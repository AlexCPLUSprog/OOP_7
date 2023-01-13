#include <iostream>
#include <vector>
#include <list>
#include <forward_list>
#include <map>
#include <string>
#include <utility> // std::pair
#include <unordered_map>
#include "Race.h"

template <typename T>
class calc {
public:
	calc(T num1, T num2) : _num1(num1), _num2(num2){}

	/*T get_num1() {
		return _num1;
	}

	void set_num1(T num1) {
		_num1 = num1;
	}

	T get_num2() {
		return _num2;
	}

	void set_num1(T num2) {
		_num2 = num2;
	}*/

	
	T sum(T num1, T num2) {
		return num1 + num2;
	}

	T subtraction(T num1, T num2) {
		return num1 - num2;
	}

	T мult(T num1, T num2) {
		return num1 * num2;
	}

	T division(T num1, T num2) {
		return num1 / num2;
	}

private:
	T _num1;
	T _num2;
};


// STL-контейнеры
// Ўаблоны классов
// Ќаследование шаблонов классов

// „то хранит в себе узел двусв€зного списка
template <typename T>
struct Node {
	T val;		// значение узла (какую информацию он хранит)
	Node<T>* prev;	// предыдущий сосед
	Node<T>* next;	// следующий сосед
};

template <typename T>
struct Node_of_forward_list {
	T val;
	Node_of_forward_list<T> *next; // следующий сосед
};

int main() {

	/*std::vector<int> vec{1,2,3};
	// range-based for loop
	for (const auto& el : vec) {							// эти два for эквивалентны

	}
	for (std::vector<int>::const_iterator it = vec.begin(); it != vec.end(); it++) {

	}

	// быстрее в случае, если бежим от начала к концу вектора
	// [][][]
	for (int i = 0; i < vec.size(); i++) {
		int x = vec[i];
	}*/

	/*std::list<int> myList;	// list - двусв€зный список (состоит из узлов(Node)), каждый узел знает про своего соседа (предыдущего и следующего)

	myList.push_back(1);
	myList.push_back(2);
	myList.push_back(3);
	
	for (const auto& el : myList) {
		std::cout << el << " ";
	}
	std::cout << '\n';

	myList.push_front(0);
	myList.push_front(-1);
	myList.push_front(-2);

	for (const auto& el : myList) {
		std::cout << el << " ";
	}
	std::cout << "===========================\n";

	// Ќоды
	Node<int> *n = new Node<int>();	
	std::vector<int> vec2;

	//n->next->next->next;
	while (n->next != nullptr) {
		vec2.push_back(n->next->val);
		n = n->next;
	}*/
	
	// forward list - направление только в одну сторону (односв€зный список), занимает меньше места, чем двусв€зный
	/*std::forward_list<int> fwl;
	fwl.push_front(1);
	fwl.push_front(2);
	fwl.push_front(3);
	// auto i = 5; // ѕример использовани€ auto
	for (const auto& el : fwl) {
		std::cout << el << " ";
	}
	std::cout << "\n============\n";

	std::map<int, std::string> myMap;
	myMap[2] = "abc";	// по второму ключу пушим "abc"

	myMap.insert({ 5, "Bob" });					// эквивалентные записи, способ 1

	myMap.insert(std::make_pair(5, "Bob"));		// эквивалентные записи, способ 2

	std::pair<int, std::string> mypair;			// эквивалентные записи, способ 3
	mypair.first = 6;
	mypair.second = "Tanya";

	myMap.insert(mypair);

	for (const auto& [key, value] : myMap) {
		std::cout << key << " " << value << '\n';	
	}*/

	/*std::unordered_map<int, std::string> umap;	// unordered map занимает много пам€ти, не сортируетс€

	umap.insert({ 1, "Hello" });
	umap.insert({ 2, "how are you?" });
	umap.insert({ 3, "ok" });
	// insert -> hash(key) -> hashed_key
	// 3 -> ssadsafdfesf <- hashed_key
	// 3 -> ssadsafdfesf 
	//umap.find(3); // hash(3) -> umap[hashed_key]
	for (const auto& [key, value] : umap) {
		std::cout << key << " " << value << '\n';
	}
	std::cout << '\n';

	std::map<int, std::string> mymap2;
	mymap2.insert({ 5, "abc" });
	const auto& [it, isInserted] = mymap2.insert({ 5, "def" }); // попытались в 5 добавить другое значение, проверили на добавление. 0(false) - значит не добавилось

	std::cout << "isInserted: " << isInserted << '\n';*/
	
	Race<Car> myRace;
	Car c1(50, "BMW");
	Car c2(60, "Mercedes");

	myRace.race(c1, c2);

	calc calculator(5,6);
	std::cout << calculator.sum(5, 6) << '\n';
	std::cout << calculator.subtraction(11, 6) << '\n';
	std::cout << calculator.мult(5, 6) << '\n';
	std::cout << calculator.division(12, 6) << '\n';

}