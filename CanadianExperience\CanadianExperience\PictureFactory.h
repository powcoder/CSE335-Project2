https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/**
 * \file PictureFactory.h
 *
 * \author Charles B. Owen
 *
 * A factory class that builds our picture.
 */

#pragma once

#include <memory>

#include "Picture.h"

/**
 * A factory class that builds our picture.
 */
class CPictureFactory
{
public:
    CPictureFactory();
    virtual ~CPictureFactory();

    std::shared_ptr<CPicture> Create();
};

