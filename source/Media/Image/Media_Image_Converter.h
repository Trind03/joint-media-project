//
// Created by Torstein on 27/05/2026.
//
#include <Media_Image_Format.h>
#include <iostream>
#include <type_traits>
#include <opencv2/core.hpp>
#include <string>

#ifndef MVICONVERTER_MEDIA_IMAGECONVERTER_H
#define MVICONVERTER_MEDIA_IMAGECONVERTER_H

namespace Media::Image::Converter
{
    template<typename F> requires std::is_same_v<Media::Image::Format::Formats, F>
    void convertJpegToPng(const std::string& filePath)
    {
        // cv::Mat image = cv::imread(filePath, cv::IMREAD_COLOR);
        // if (image.empty())
        // {
        //     std::cerr << "Could not read the image" << std::endl;
        //     return cv::Mat{};
        // }
        std::cout << filePath << std::endl;
    }
} // Media::Converter

#endif //MVICONVERTER_MEDIA_IMAGECONVERTER_H
