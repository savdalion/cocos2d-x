/****************************************************************************
Copyright (c) 2013 cocos2d-x.org

http://www.cocos2d-x.org

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
****************************************************************************/

#ifndef __CC_EXTENTIONS_CCCOMNODE_H__
#define __CC_EXTENTIONS_CCCOMNODE_H__

#include "cocos2d.h"
#include "cocos-ext.h"
#include "ExtensionMacros.h"

NS_CC_EXT_BEGIN

class CCComRender : public cocos2d::CCComponent
{
protected:
    CCComRender(void);
    CCComRender(cocos2d::CCNode *node, const char *comName);
    virtual ~CCComRender(void);
    
public:
   virtual void onEnter();
   virtual void onExit();
   cocos2d::CCNode* getNode();
   void setNode(cocos2d::CCNode *pNode);

   static CCComRender* create(cocos2d::CCNode *pNode, const char *comName);

private:
   cocos2d::CCNode *m_pRender;
};

NS_CC_EXT_END
#endif  // __FUNDATION__CCCOMPONENT_H__
