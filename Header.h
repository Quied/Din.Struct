#pragma once

class Node {
public:

	std::string Name;
	std::string LastName;
	std::string Group;
	int Birthday;
	double Score;

	Node* next;

	Node(std::string _name, std::string LN, std::string _G, int _Birt, double _score): Name(_name),LastName(LN), Group(_G), Birthday(_Birt), Score(_score){}
	Node(){}

};


class Students {
public:

	Node* L;
	Node* F;

	Students() : L(nullptr), F(nullptr){}

	bool empty() {
		return F == nullptr;
	}

	int size() {
		int s = 0;
		while (F != nullptr) {
			s++;
		}
		return s;
	}

	void add() {
		Node* e = new Node();	
		addArguments(e);
		if (empty()) {
			L = e;
			F = e;
			return;
		}
		L->next = e;
		L = e;
	}

	void addArguments(Node *e) {
		std::string name;
		std::string lastname;
		std::string Group;
		int Birth;
		double score;

		std::cout << "Name: "; std::cin >> name;
		std::cout << "Last Name: "; std::cin >> lastname;
		std::cout << "Group: "; std::cin >> Group;
		std::cout << "Birthday: "; std::cin >> Birth;
		std::cout << "Score: "; std::cin >> score;

		e->Birthday = Birth;
		e->Name = name;
		e->Group = Group;
		e->LastName = lastname;
		e->Score = score;
	}

	void print(Students *n) {
		while (F != nullptr) {
			std::cout << "Name: " << F->Name << std::endl;
			std::cout << "Last Name: " << F->LastName << std::endl;
			std::cout << "Birthday: " << F->Birthday << std::endl;
			std::cout << "Group: " << F->Group << std::endl;
			std::cout << "Score: " << F->Score << std::endl;
			F = F->next;
			std::cout << std::endl;
		}
	}

	void sort() {
		for (int j = 0; j < size(); j++) {
			for (int i = 0; i < size(); i++) {
				if (F->Score > F->next->Score) {

					std::swap(F->Name, F->next->Name);
					std::swap(F->LastName, F->next->LastName);
					std::swap(F->Group, F->next->Group);
					std::swap(F->Birthday, F->next->Birthday);
					std::swap(F->Score, F->next->Score);

				}
			}
		}

	}

};