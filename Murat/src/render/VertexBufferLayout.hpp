#ifndef M_VERTEX_BUFFER_LAYOUT_HPP
#define M_VERTEX_BUFFER_LAYOUT_HPP

#include <glad/glad.h>
#include <vector>

namespace Murat {
    struct VertexBufferElement {
        unsigned int count;
        unsigned int type;
        unsigned char normalized;

        static unsigned int getSizeOfType(unsigned int type) {
            switch (type) {
                case GL_FLOAT:
                    return sizeof(GLfloat);
                case GL_UNSIGNED_INT:
                    return sizeof(GLuint);
                case GL_UNSIGNED_BYTE:
                    return sizeof(GLubyte);
            }
            assert(false);
            return 0;
        }
    };

    class VertexBufferLayout {
    private:
        std::vector<VertexBufferElement> m_Elements;
        unsigned int m_Stride;
    public:
        VertexBufferLayout();

        ~VertexBufferLayout();

        template<typename T>
        void push(unsigned int count);

        inline const std::vector<VertexBufferElement> getElements() const { return m_Elements; }

        inline unsigned int getStride() const { return m_Stride; }
    };
}

#endif
