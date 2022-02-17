#include <iostream>
#include <List>
using namespace std;

typedef struct tagNode
{
	tagNode* Front;
	int Value;
	tagNode* Back;

}Node;

typedef struct tagiterator
{	
	tagNode* pThis;
}piterator;

int iSize = 1;

void push_back(int _Value, Node* _pList);
Node* front(Node* _pList);
Node* back(Node* _plist);

piterator* begin(Node* _pList);
piterator* end(Node* _pList);

void Delete(int _where, Node* _pList);
Node* erase(int _where, Node* _pList);
int size();


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
	/*
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
	*/
	
	Node* pList = new Node;

	pList->Front = nullptr;
	pList->Value = 10;
	pList->Back = nullptr;

	push_back(20, pList);
	push_back(30, pList);
	push_back(40, pList);
	push_back(50, pList);
	push_back(60, pList);
	push_back(70, pList);
	push_back(80, pList);
	push_back(90, pList);

	//Delete(3, pList);
	//erase(3, pList);

	//cout << size() << endl;
	//
	//for (piterator* iIter = begin(pList); iIter->pThis != nullptr; iIter->pThis = iIter->pThis->Back)
	//{
	//	cout << iIter->pThis->Value << endl;
	//}

	
	list<int> NumberList;

	for (int i = 0; i < 10; i++)
	{
		NumberList.push_back(i * 10 + 10);
	}

	cout << "size : " << NumberList.size() << endl;
	cout << "begin : " << (*NumberList.begin()) << endl;
	cout << "end : " << *(--NumberList.end()) << endl << endl;
	

	for (list<int>::iterator iter = NumberList.begin(); iter != NumberList.end(); ++iter)
	{
		cout << *iter << endl;
	}
	cout << endl << endl;
	for (auto iter : NumberList)
	{
		cout << iter << endl;
	}

	return 0;
}

void push_back(int _Value, Node* _pList)
{
	if (_pList->Back == nullptr)
	{
		Node* node = new Node;

		node->Front = _pList;
		node->Value = _Value;
		node->Back = nullptr;

		_pList->Back = node;
		++iSize;
	}
	else
	{
		push_back(_Value, _pList->Back);
	}
}

Node* front(Node* _pList)
{
	return _pList;
}

Node* back(Node* _pList)
{
	if (_pList->Back == nullptr)
	{
		return _pList;
	}
	else
	{
		back(_pList->Back);
	}
}

piterator* begin(Node* _pList)
{
	
	piterator* iter = new piterator;
	//iter.pThis = new Node;
	//iter.pThis = _pList;

	return iter;
}

piterator* end(Node* _pList)
{
	return nullptr;
}

void Delete(int _where, Node* _pList)
{
	if (_where == 1)
	{
		_pList->Back->Front = _pList->Front;
		_pList->Front->Back = _pList->Back;

		delete _pList;
		iSize -= 1;
	}
	else
	{
		Delete(_where + (-1), _pList->Back);
	}
}

Node* erase(int _where, Node* _pList)
{
	if (_where == 1)
	{
		_pList->Back->Front = _pList->Front;
		Node* Temp = _pList->Back;

		delete _pList;
		iSize -= 1;
		return nullptr;
	}
	else
	{
		erase(_where + (-1), _pList->Back);
	}

	return nullptr;
}

int size()
{
	
	return iSize;
}
