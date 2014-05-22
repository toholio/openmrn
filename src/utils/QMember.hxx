/** \copyright
 * Copyright (c) 2014, Stuart W Baker
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are  permitted provided that the following conditions are met:
 *
 *  - Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 *
 *  - Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * \file Queue.hxx
 * This file provides an implementation queues.
 *
 * @author Stuart W. Baker
 * @date 10 March 2014
 */

#ifndef _Queue_hxx_
#define _Queue_hxx_

/** Essentially a "next" pointer container.
 */
class QMember
{
public:
    /** Initiailize a QMember, in place of a public placement construction.
     * @param item QMemember to init
     */
    void init()
    {
        HASSERT(this);
        next = NULL;
    }

protected:
    /** Constructor.
     */
    QMember() : next(NULL)
    {
    }

    /** Destructor.
     */
    ~QMember()
    {
    }

    /** pointer to the next member in the queue */
    QMember *next;

    /** This class is a helper of Q */
    friend class Q;
    /** ActiveTimers needs to iterate through the queue. */
    friend class ActiveTimers;
    friend class TimerTest;
};

#endif /* _Queue_hxx_ */