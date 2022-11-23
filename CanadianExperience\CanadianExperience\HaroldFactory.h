https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/**
 * \file HaroldFactory.h
 *
 * \author Charles B. Owen
 *
 * Factory class that builds the Harold character
 */

#pragma once
#include "ActorFactory.h"

/** 
 * Factory class that builds the Harold character 
 */
class CHaroldFactory :
    public CActorFactory
{
public:
    CHaroldFactory();
    virtual ~CHaroldFactory();

    std::shared_ptr<CActor> Create(); 
};

