#include <iostream>
#include <List>
using namespace std;

typedef struct tagNode
{
	int Value;
	tagNode* Next;

}Node ;

int main()
{
	/*
	int iArray[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int* iIter = nullptr;

	iIter = iArray;

	for (int i = 0; i < 10; ++i)
	{
		cout << (*(iIter + i)) << endl;
	}
	*/
	
	
	/*
	list<int>::iterator iter;

	list<int> NumberList = { 0,1,2,3,4 };

	for (iter = NumberList.begin(); iter != NumberList.end(); ++iter)
	{
		cout << *iter << endl;
	}
	*/

	/*
	int iArray[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, NULL };

	for (int* iIter = iArray; (*iIter) != NULL; ++iIter)
	{
		cout << *iIter << endl;
	}
	*/
	
	Node* pList = new Node;
	
	pList->Value = 0;
	pList->Next = nullptr;


	{
		Node* pNode = new Node;

		pNode->Value = 1;
		pNode->Next = nullptr;

		pList->Next = pNode;
	}

	cout << pList->Value << endl;
	cout << pList->Next->Value << endl;
	
	return 0;
}