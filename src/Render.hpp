#pragma once

#include "VertexArray.hpp"
#include "IndexBuffer.hpp"
#include "Shader.hpp"


namespace Render
{
    void clear();
    void clear(const char color);
    void draw(const VertexArray& va, const IndexBuffer& ib, const Shader& shader);
}
