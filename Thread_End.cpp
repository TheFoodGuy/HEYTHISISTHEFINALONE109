#include "Thread_End.h"



Thread_End::Thread_End():Thread(){

}

// Thread_End::Thread_End(const Var& v){
// 	tVec = new vector<vector<Var*> >(*)
// }


void Thread_End::doThread(vector < vector<Var*> >const&vec) {
	//transform(vec.begin(), vec.end(), back_inserter(tVec), DeepCopy());
	cout << "Calling doThread in Thread_End" << endl;
	vector <Var*> tempVec = vec.at(0);
	cout << tempVec.at(0)->getString() << endl;

	vector <Var*> tempVec2 = tVec.at(0);
	cout << tempVec.at(0)->getString() << endl;
	cout << tVec.size() << " this is the size of tVec in doThread" << endl;
	
	Thread *t = new Thread_End();
	t->start();
}

void *Thread_End::threadMainBody (void * arg){
	cout << "In Thread_End threadMainBody" << endl;
	cout << tVec.size() << " this is the size of tVec in threadMainBodoy"  <<endl;
	return nullptr;
}

Instruction* Thread_End::clone(){
	Thread_End *threade = new Thread_End();
	return threade;
}


Thread_End::~Thread_End(){
    
}
