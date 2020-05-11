#include"saclist.hpp"

// the idea of this project is to implement std::list functionalities here
// user should be able to create a object of saclist just like std::list<int> l1;
// insert into list l1.insert(4), l1.delete(5), l1.find(x) -> returns the position of x from begining or end
// more functionalities like l1.delete_element_at(index), etc etc
#if 0 // We really do not need main here, Added a Test Framework for this 
int main(int argc, char const *argv[])
{
	sac::list<int> s1;
	
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


	cout<<s1.get_size()<<endl;

	return 0;
}
#endif