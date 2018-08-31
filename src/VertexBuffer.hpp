#ifndef VertexBuffer_hpp
#define VertexBuffer_hpp


class VertexBuffer
{
private:
    unsigned int m_RendererID;
public:
    VertexBuffer(const void* data, unsigned int size);
    ~VertexBuffer();

    void bind() const;
    void unBind() const;
};

#endif