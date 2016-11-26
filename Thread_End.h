#ifndef THREADEND_H
#define THREADEND_H

#include "Threads.h"
#include "Thread.h"

class Thread_End: public Threads, public Thread{
    public:
        Thread_End();
        vector< vector<Var*> >tVec;
        void doThread(vector < vector<Var*> >const&);
        void * threadMainBody (void * arg);
        Instruction *clone();
        ~Thread_End();
};

#endif
