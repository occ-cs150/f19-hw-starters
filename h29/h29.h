/**
    @file h29.h
    @author Stephen Gilbert
    @version Fall 2019 CS 150
*/
#ifndef H29_H_
#define H29_H_
#include <vector>
#include <string>
#include <cassert>

using UC = unsigned char;
struct Pixel {UC red=0, green=0, blue=0, alpha=255;};

class Image
{
public:
    Image() = default;
    Image(unsigned width, unsigned height);
    Image(const std::string& path);

    unsigned width() const;
    unsigned height() const;
    unsigned size() const;

    void fill(const Pixel& color);
    Pixel& at(unsigned pos);
    Pixel& at(unsigned x, unsigned y);

    bool load(const std::string& path);
    bool save(const std::string& path);
private:
    unsigned width_ = 0, height_ = 0;
    vector<Pixel> pixels_;
};

// Functions from stb_image and stb_image_write
// These are C functions
extern "C" {
unsigned char* stbi_load(const char* fileName,
    int* width, int* height, int* bitsPerChannel,
    int desiredBpp=4);

 int stbi_write_png(const char* fName, int width, int height,
    int comp, const void *data, int stride);
 int stbi_write_bmp(const char* fName, int width, int height,
    int comp, const void *data);
 int stbi_write_jpg(const char* fName, int width, int height,
    int comp, const void *data, int quality);

 void stbi_image_free (void *);
};

#endif
