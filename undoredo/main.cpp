#include "Command.cpp"  
#include <iostream>
using namespace std;

//ģ�������ַ���,Ȼ���������ַ�������undo redo����  
//�����¼����������¼,��:������undo �� redo �������ַ������ݸı�  
//Ҳ���¼,�������������undo ���� redo �������ַ���ʱ ��redo��ռ���  
//����Ϊ����ʷ��¼���޸�ֵ����Ϊ�����µ�ֵ������Ҫ��redo  
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