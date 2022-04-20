#include <iostream>
#include <vector>
#include <algorithm>
#include <array>
#include <forward_list>
#include <list>
#include <deque>
#include <stack>
#include <queue>
#include <set>
#include <map>

int IntCompare(const void* left, const void* right)
{
    int lhs = *static_cast<const int*>(left);
    int rhs = *static_cast<const int*>(right);

    if (lhs > rhs)
    {
        return -1;
    }
    else if (lhs < rhs)
    {
        return 1;
    }

    return 0;
}

int main()
{
    //std::vector<int> v{ 4, 2, 3, 1, 5, 7, 6 };

    //qsort(v.data(), v.size(), sizeof(v[0]), IntCompare);

    //for (int value : v)
    //{
    //    std::cout << value << " ";
    //}

    //std::cout << std::endl;

    //std::vector<int> v1{ 1, 3, 2, 5, 4 };

    //qsort(v1.data(), v1.size(), sizeof(v1[0]), [](const void* a, const void* b) {
    //    return *static_cast<const int*>(a) - *static_cast<const int*>(b);
    //});

    //for (int value : v1)
    //{
    //    std::cout << value << " ";
    //}

    //std::cout << std::endl;

    //std::for_each(v1.begin(), v1.end(), [](const int& val) {
    //    std::cout << val << " ";
    //});

    //std::cout << std::endl;
    //------------------------------------------------------------------

    //std::array<int, 4> intArray = { 0, 1, 2, 3 };

    //for (int value : intArray)
    //{
    //    std::cout << value << " ";
    //}

    //std::cout << std::endl;

    //for (auto iter = intArray.begin(); iter != intArray.end(); ++iter)
    //{
    //    *iter = *iter + 1;
    //    std::cout << *iter << " ";
    //}

    //std::cout << std::endl;

    //for (int i = 0; i < intArray.size(); ++i)
    //{
    //    std::cout << intArray[i] << " ";
    //}

    //std::cout << std::endl;
    //------------------------------------------------------------------

    //std::vector<int> v1{ 1, 3, 2, 5, 4 };

    //v1.push_back(6);

    //for (int e : v1)
    //{
    //    std::cout << e << " ";
    //}
    //std::cout << std::endl;

    //v1.pop_back();
    //v1.resize(7, 0);
    //v1.erase(v1.begin());

    //for (int e : v1)
    //{
    //    std::cout << e << " ";
    //}
    //std::cout << std::endl;

    //v1.clear();
    //
    //for (int e : v1)
    //{
    //    std::cout << e << " ";
    //}

    //------------------------------------------------------------------

    //std::forward_list<int> list{ 1, 3, 5, 7 };

    //auto itr = std::find(list.begin(), list.end(), 3);
    //
    //itr = list.insert_after(itr, 2);

    //for (auto itr = list.begin(); itr != list.end(); ++itr)
    //{
    //    std::cout << *itr << " ";
    //}

    //std::cout << std::endl;

    //std::forward_list<int> list2{ 3, 4, 6, 7 };
    //list.splice_after(itr, list2);

    //for (auto itr = list.begin(); itr != list.end(); ++itr)
    //{
    //    std::cout << *itr << " ";
    //}

    //std::cout << std::endl;

    //list.sort();

    //list.unique([](int a, int b) { return a == b; });

    //list.erase_after(list.begin());

    //for (auto itr = list.begin(); itr != list.end(); ++itr)
    //{
    //    std::cout << *itr << " ";
    //}

    //------------------------------------------------------------------

    //std::list<int> list{ 1, 2, 3 };

    //list.reverse();

    //for (int e : list)
    //{
    //    std::cout << e << " ";
    //}
    //std::cout << std::endl;

    //std::list<int> list2{ 4, 5, 6 };

    //list.sort();
    //list2.merge(list);

    //for (int e : list2)
    //{
    //    std::cout << e << " ";
    //}
    //std::cout << std::endl;

    //list2.erase(list2.begin());

    //------------------------------------------------------------------

    //std::deque<int> container{ 3, 4, 5 };

    //container.push_front(1);
    //container.push_back(2);
    //container.pop_front();


    //------------------------------------------------------------------

//Container Adapter

    //std::stack<int> container;

    //container.push(1);
    //container.push(2);
    //container.push(3);
    //container.push(2);
    //container.push(1);

    //container.pop();

    //std::stack<int> tempStack(container);
    //while (!tempStack.empty())
    //{
    //    std::cout << tempStack.top() << std::endl;
    //    tempStack.pop();
    //}

    //------------------------------------------------------------------

 //   std::queue<int> container;

 //   container.push(1);
 //   container.push(2);
 //   container.push(3);

 //   container.pop();

	//std::queue<int> tempQueue(container);
	//while (!tempQueue.empty())
	//{
	//	std::cout << tempQueue.front() << " ";
	//	tempQueue.pop();
	//}

    //------------------------------------------------------------------
    
    //std::priority_queue<int> container;

    //container.push(1);
    //container.push(3);
    //container.push(2);
    //container.push(1);
    //container.push(2);
    //container.push(4);

    //std::cout << container.top() << std::endl;

    //container.pop();

    //std::cout << container.top() << std::endl;

    //------------------------------------------------------------------
//Associative Container
    
 //   std::set<int> container;

 //   container.insert(1);
 //   container.insert(5);
 //   container.insert(7);
 //   container.insert(3);
 //   container.insert(2);

 //   container.erase(2);

	//for (const auto& e : container)
	//{
	//	std::cout << e << " ";
	//}
	//std::cout << std::endl;

    //------------------------------------------------------------------
    
    using MyPair = std::pair<int, std::string>;

    std::map<int, std::string> container;
    std::pair<int, std::string> element;

    element.first = 1;
    element.second = "array";

    container.insert(element);

    container.insert(std::pair<int, std::string>(3, "vector"));

    container.insert(MyPair(4, "stack"));

    container.insert({ 2, "queue" });


    for (const auto& e : container)
    {
        std::cout << e.first << " : " << e.second << std::endl;
    }

    std::cout << container.at(3) << std::endl;
    std::cout << container[2] << std::endl;

}