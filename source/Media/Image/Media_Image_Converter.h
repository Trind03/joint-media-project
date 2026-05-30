//
// Created by Torstein on 27/05/2026.
//
#ifndef MVICONVERTER_MEDIA_IMAGECONVERTER_H
#define MVICONVERTER_MEDIA_IMAGECONVERTER_H
#include <concepts>
#include <Media_Image_Format.h>
#include <opencv2/core.hpp>
#include <opencv2/opencv.hpp>


namespace Media::Image::Converter
{
    inline void loadImgFromDisk(const std::string_view filename)
    {
        cv::Mat imread{filename, cv::IMREAD_UNCHANGED};
    }


    inline void convertImgFmt(const Format& fmt, cv::Mat& img)
    {
        // cv::Mat image = cv::imread(filePath, cv::IMREAD_COLOR);
        // if (image.empty())
        // {
        //     std::cerr << "Could not read the image" << std::endl;
        //     return cv::Mat{};
        // }
        // return img;
    }
} // Media::Converter

#endif //MVICONVERTER_MEDIA_IMAGECONVERTER_H
