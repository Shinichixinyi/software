#include "Command.cpp"  
#include <iostream>
using namespace std;

//模拟输入字符串,然后对输入的字符串进行undo redo操作  
//这里记录的是完整记录,即:即便在undo 或 redo 过程中又发生数据改变  
//也会记录,如果不想这样在undo 或者 redo 输入新字符串时 将redo清空即可  
//即认为在历史记录中修改值被认为是最新的值，不需要再redo  
int main()
{
	string com ;
	Commander *p = new Commander(new InputCommand("[empty]"));

	cin >> com;
	while (com != "p"){
		if (com == "undo"){
			p->Undo();
		}
		else if (com == "redo"){
			p->Redo();
		}
		else{
			p->ExecuteCommand(new InputCommand(com));
		}

		cin >> com;
	}

}