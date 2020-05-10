#include<iostream>
using namespace std;

// int size_of_ll;

template<typename T>
struct node
{
	T data;
	struct node *next;
	node(T val)
	{
		this->data = val;
		this->next =NULL;
	}
};

namespace sac
{
	template<typename T>
	class list
	{
	public:
		T element_to_insert;
		node<T> *head =NULL;
		int size_of_ll = 0;
		list()
		{
			
		}
		~list()
		{
			
		}

		void insert(T);
		void remove_at(T);
		void remove(T);
		void display();
		int get_size();
	};
}