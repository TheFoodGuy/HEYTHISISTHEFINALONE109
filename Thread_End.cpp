#include "Thread_End.h"



Thread_End::Thread_End():Thread(){

}

// Thread_End::Thread_End(const Var& v){
// 	tVec = new vector<vector<Var*> >(*)
// }

Thread_End *t = new Thread_End();

void Thread_End::doThread(vector < vector<Var*> >const&vec) {
	//transform(vec.begin(), vec.end(), back_inserter(tVec), DeepCopy());

	t->tVec = vec;
	cout << "Calling doThread in Thread_End" << endl;
	vector <Var*> tempVec = vec.at(0);
	cout << tempVec.at(0)->getString() << endl;

	//vector <Var*> tempVec2 = tVec.at(0);
	cout << tempVec.at(0)->getString() << endl;
	cout << tVec.size() << " this is the size of tVec in doThread" << endl;
	
	Thread *t = new Thread_End();
	t->start();
}

void *Thread_End::threadMainBody (void * arg){
	cout << "In Thread_End threadMainBody" << endl;

    //Create label tabel for this thread

    map <string, Instruction*> ins;
    ins["ADD"] = new Add();
    ins["SUB"] = new Subtract();
    ins["MUL"] = new Multiply();
    ins["DIV"] = new Divide();  
    ins["ASSIGN"] = new Assign();
    ins["OUT"] = new Out();
    ins["SET_STR_CHAR"] = new SetChar();
    ins["GET_STR_CHAR"] = new GetChar();
    ins["LABEL"] = new Label();
    ins["JMP"] = new JMP();
    ins["JMPZ"] = new JMPZ();
    ins["JMPNZ"] = new JMPNZ();
    ins["JMPGT"] = new JMPGT();
    ins["JMPLT"] = new JMPLT();
    ins["JMPGTE"] = new JMPGTE();
    ins["JMPLTE"] = new JMPLTE();
    ins["SLEEP"] = new Sleep();
    ins["VAR"] = new Value();
	ins["THREAD_BEGIN"] = new Thread_Begin();
	ins["THREAD_END"] = new Thread_End();
	ins["LOCK"] = new Lock();
	ins["UNLOCK"] = new Unlock();
	ins["BARRIER"] = new Barrier();

	for (int i = 0; i<t->tVec.size(); i++){
		vector<Var*> tempVec = t->tVec.at(i);
		Instruction *p = ins[tempVec.at(0)->getString()];
	        Instruction *m = p->clone();
		cout << tempVec.at(0)->getString() <<endl;	
	}
	//cout << tVec.size() << " this is the size of tVec in threadMainBodoy"  <<endl;
	return nullptr;
}

Instruction* Thread_End::clone(){
	Thread_End *threade = new Thread_End();
	return threade;
}


Thread_End::~Thread_End(){
    
}
