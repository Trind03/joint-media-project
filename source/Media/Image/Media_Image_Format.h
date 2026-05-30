//
// Created by Torstein on 30/05/2026.
//

#ifndef MVICONVERTER_MEDIA_IMAGE_FORMAT_H
#define MVICONVERTER_MEDIA_IMAGE_FORMAT_H
#include <cstdint>

namespace Media::Image
{
    enum class Format : std::uint8_t
    {
        JPEG,
        JPG,
        PNG,
        WEBP,
    };
}

#endif //MVICONVERTER_MEDIA_IMAGE_FORMAT_H
