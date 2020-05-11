#ifndef __SACLIST_IMPL_HPP_INCLUDED__
#define __SACLIST_IMPL_HPP_INCLUDED__



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

#endif