https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/**
 * \file TreeFactory.h
 *
 * \author Charles Owen
 *
 * Tree factory class. Creates Tree and Basket objects
 */

#pragma once

#include <memory>

class CTree;
class CBasket;

//#define STANDIN

/**
 * Tree factory class. Creates Tree and Basket objects
 *
 * AFX_EXT_CLASS is a Microsoft directive that indicates
 * that this class can be used outside the DLL. Do not change
 * it or add it to any other classes.
 */
class AFX_EXT_CLASS CTreeFactory
{
public:
    CTreeFactory();
    ~CTreeFactory();

    std::shared_ptr<CTree> CreateTree();
    std::shared_ptr<CBasket> CreateBasket();
};

