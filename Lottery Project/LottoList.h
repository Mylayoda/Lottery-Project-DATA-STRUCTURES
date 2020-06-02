#pragma once
#include <iostream>
#include <random>
#include <time.h>
#include "CreateLottoNumbers.h"
using namespace std;
class CreateLottoDraw
{
public:
	struct LinkList
	{
		int data;
		LinkList* next;
	};

	void printList(LinkList* root) {
		while (root)
		{
			printf("%d ", root->data, '\n%s\n');
			root = root->next;
		}
	}

	void loadList() { // 6 number list
		CreateLottoNumbers CLN;
		LinkList* root, * second, * third, * fourth, * fifth, * sixth;
		root = new LinkList;
		second = new LinkList;
		third = new LinkList;
		fourth = new LinkList;
		fifth = new LinkList;
		sixth = new LinkList;

		root->data = CLN.numberPicker();
		root->next = second;

		second->data = CLN.numberPicker();
		second->next = third;

		third->data = CLN.numberPicker();
		third->next = fourth;

		fourth->data = CLN.numberPicker();
		fourth->next = fifth;

		fifth->data = CLN.numberPicker();
		fifth->next = sixth;

		sixth->data = CLN.numberPicker();
		sixth->next = NULL; // end of list

		printList(root); // print numbers
	}

	void loadListSeven() { // 7 number list
		CreateLottoNumbers CLN;
		LinkList* root, * second, * third, * fourth, * fifth, * sixth, * seventh;
		root = new LinkList;
		second = new LinkList;
		third = new LinkList;
		fourth = new LinkList;
		fifth = new LinkList;
		sixth = new LinkList;
		seventh = new LinkList;

		root->data = CLN.numberPicker();
		root->next = second;

		second->data = CLN.numberPicker();
		second->next = third;

		third->data = CLN.numberPicker();
		third->next = fourth;

		fourth->data = CLN.numberPicker();
		fourth->next = fifth;

		fifth->data = CLN.numberPicker();
		fifth->next = sixth;

		sixth->data = CLN.numberPicker();
		sixth->next = seventh;

		seventh->data = CLN.numberPicker();
		seventh->next = NULL;// end of list
		printList(root); // print numbers
	}

};


