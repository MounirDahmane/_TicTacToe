#pragma once

class Texture
{
public:
	Texture(const char* Path);
	void BindTexture();
private:
	void assign_texture(unsigned int texture, const char* Path);
	unsigned int _texture;
};