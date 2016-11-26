#include "Thread_End.h"

Thread_End::Thread_End(){

}

void Thread_End::doThread(vector < vector<Var*> >const&vec) {
	cout << "Calling doThread in Thread_End" << endl;
	vector <Var*> tempVec = vec.at(0);
	cout << tempVec.at(0)->getString() << endl;
}

void *Thread_End::threadMainBody (void * arg){
	return nullptr;
}
Instruction* Thread_End::clone(){
	Thread_End *threade = new Thread_End();
	return threade;
}

Thread_End::~Thread_End(){
    
}