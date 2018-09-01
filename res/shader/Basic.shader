#shader vertex
#version 330 core
layout (location = 0) in vec4 Position;
layout (location = 1) in vec3 Color;
layout (location = 2) in vec2 TexCoord;

out vec3 u_Color;
out vec2 v_TexCoord;

uniform mat4 transform;


void main()
{
    gl_Position = transform * Position;
    u_Color = Color;
    v_TexCoord = TexCoord;
}

#shader fragment
#version 330 core

out vec4 Color;

in vec3 u_Color;
in vec2 v_TexCoord;

uniform sampler2D u_Texture0;
uniform sampler2D u_Texture1;

void main()
{
    Color = mix(texture(u_Texture0, v_TexCoord), texture(u_Texture1, vec2(1.0 - v_TexCoord.x, v_TexCoord.y)), 0.2);
}