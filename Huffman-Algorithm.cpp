// Huffman-Algorithm.cpp : Defines the entry point for the console application.
//
/**
* Created by Visual Studio.
* Developer: Deuse
* Date: 21.12.2016
* Creation Time: 18:33
* Last update: 13.01.2017 at 16:07
*/

#include "stdafx.h"
#include <iostream>
#include <vector> 
#include <map> 
#include <list> 

using namespace std;

int main()
{
	class Node
	{
		public:
			int a;
			char b;
			Node *left, *right;
	};

	string source = "This is string, that should be encoded!";
	map <char, int> m_freq;
	map <char, int> :: iterator itr;

	list<Node*> list_node;

	for (int i = 0; i < source.length(); i++)
	{
		char symb = source[i];
		m_freq[symb]++;
	}

	for (itr = m_freq.begin(); itr != m_freq.end(); itr++) 
	{
		//Node *p = new Node();
		//p->a = itr->first;
		//p->b = itr->second;
		//list_node.push_back(p);
		cout << itr->first << ":" << itr->second << endl;
	}

	system("pause");
	return 0;
}

/*	class MagicalMassive
	{
		public:
			int a;
			char b;

			MagicalMassive(int num, char symb)
			{
				a = num;
				b = symb;
			}

			~MagicalMassive() 
			{
				cout << "Destructor is worked!" << endl;
			}
	};

	struct Compare
	{
		bool operator() (MagicalMassive m1, MagicalMassive m2) const
		{
			return m1.a < m2.a;
		}
	};

	list <MagicalMassive> list_massive;
	list <MagicalMassive> :: iterator count;

	MagicalMassive mass1(11, 's'), mass2(1243, 'a'), mass3(23, 'q'), mass4(2, 'd');

	list_massive.push_back(mass1);
	list_massive.push_back(mass2);
	list_massive.push_back(mass3);
	list_massive.push_back(mass4);
	list_massive.sort(Compare());

	cout << "Hello! This is a list massive!" << endl;

	for (count = list_massive.begin(); count != list_massive.end(); count++)
	{
		cout << count-> a << ":" << count-> b << endl;
	} */

	


