/*************************************************************************************************/
/**
 * The MIT License (MIT)
 *
 * Copyright (c) 2014 A567W
 * 
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 * 
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 * 
 * @file	KsThread.h
 * @brief	スレッド
 * @date	2014/04/12
 * @author	A567W
 * @version	1.0.0
 */
 /************************************************************************************************/
#ifndef __KSTHREAD_H__
#define __KSTHREAD_H__

/*==============================================================================================*/
/*                                 << インクルード >>                                            */
/*==============================================================================================*/
#include "KsThreadCommon.h"

/*==============================================================================================*/
/*                                     << 定義 >>                                               */
/*==============================================================================================*/

/*==============================================================================================*/
/*                                     << 宣言 >>                                               */
/*==============================================================================================*/
ksNS_KS_BEGIN


/************************************************************************************************/
/**
 * スレッドプライオリティ
 * @enum	ksTHREAD_PRIORITY_TYPE
 * @author  A567W
 * @since   2003/03/22
 * @version ----/--/--
 */
/************************************************************************************************/
enum ksTHREAD_PRIORITY_TYPE
{
	ksTHREAD_PRIORITY_TIME_CRITICAL =  15,
	ksTHREAD_PRIORITY_HIGHEST       =   2,
	ksTHREAD_PRIORITY_ABOVE_NORMAL  =   1,
	ksTHREAD_PRIORITY_NORMAL        =   0,
	ksTHREAD_PRIORITY_BELOW_NORMAL  =  -1,
	ksTHREAD_PRIORITY_LOWEST        =  -2,
	ksTHREAD_PRIORITY_IDLE          = -15,
	ksTHREAD_PRIORITY_FORCE32       =  0x7fffffff
};

/************************************************************************************************/
/**
 * KsMutex
 */
/************************************************************************************************/
typedef std::mutex		KsMutex;

/************************************************************************************************/
/**
 * KsThread
 */
/************************************************************************************************/
typedef std::thread		KsThread;

/************************************************************************************************/
/**
 * KsThread
 */
/************************************************************************************************/
//#define std::async		KsAsync


namespace KsThreadUtil
{
    ksINLINE void   setPriority( KsHandle handle, KsInt32 priority )
    {
        ::SetThreadPriority( handle, priority );
    }

    ksINLINE void   setProcessor( KsHandle handle, KsInt32 processorNo )
    {
        ::SetProcessAffinityMask( handle, 1 << processorNo );
    }

    ksINLINE void   yield()
    {
        std::this_thread::yield();
    }
};

ksNS_KS_END

#endif	/* __KSTHREAD_H__ */

