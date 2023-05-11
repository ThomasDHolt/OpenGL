#pragma once

class VertexBuffer
{
private:
	unsigned int m_RendererID;
public:
	/// <summary>
	/// 
	/// </summary>
	/// <param name="data"></param>
	/// <param name="size">Size in bytes.</param>
	VertexBuffer(const void* data, unsigned int size);
	~VertexBuffer();

	void Bind() const;
	void Unbind() const;
};