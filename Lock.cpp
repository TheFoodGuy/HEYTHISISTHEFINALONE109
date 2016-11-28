#include "Lock.h"

Lock::Lock(){

}

Lock::~Lock(){

}

void Lock::doThreadMethod(vector<Var*>&vec){
cout << "got into lock method" <<endl;

}

void Lock::checkOps(vector<Var*>const&vec){

}

Instruction* Lock::clone(){
    Lock* lock = new Lock();
    return lock;
}
