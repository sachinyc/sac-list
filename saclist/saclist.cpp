#include"saclist.hpp"

// the idea of this project is to implement std::list functionalities here
// user should be able to create a object of saclist just like std::list<int> l1;
// insert into list l1.insert(4), l1.delete(5), l1.find(x) -> returns the position of x from begining or end
// more functionalities like l1.delete_element_at(index), etc etc

int main(int argc, char const *argv[])
{
	/*sac::list<int> s1;
	
	s1.insert(10);
	s1.insert(20);
	s1.insert(30);

	cout<<s1.get_size()<<endl;
	s1.display();

	s1.remove(20);
	//s1.remove(20);
	s1.remove(30);
	//s1.remove(10);
	s1.display();


	cout<<s1.get_size()<<endl;*/

	return 0;
}

template<typename T>
void sac::list<T>::insert(T element)
{
	node<T> *n1 = new node<T>(element);

	if(head == NULL)
	{
		head = n1;
	}
	else
	{
		n1->next = head;
		head = n1;
	}

	size_of_ll++;
}

template<typename T>
void sac::list<T>::remove(T element)
{
	if(head == NULL)
	{
		cout<<"sac::list is empty"<<endl;
		return;
	}
	else
	{
		node<T> *temp = head, *prev = NULL;
		while(temp != NULL && temp->data != element)
		{
			prev = temp;
			temp = temp->next;
		}

		if(temp != NULL)
		{
			if(prev)
				prev->next = temp->next;
			else // this is the case when there is only one element in the list
				head = head->next;

			delete temp;
			temp = NULL;
		}
		else
		{
			cout<<"Element not present in the list \n";
			return;
		}
	}

	size_of_ll--;
}

template<typename T>
void sac::list<T>::display()
{
	node<T> *temp = head;
	if(head == NULL)
		cout<<"No elements in the LL"<<endl;
	else
	{
		while(temp != NULL)
		{
			cout<< temp->data<< "  ";
			temp = temp->next;
		}

		cout<<endl;
	}

}

template<typename T>
int sac::list<T>::get_size()
{
	return size_of_ll;
}
