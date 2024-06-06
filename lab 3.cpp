//TASK 1
/*#include<iostream>
#include<string>
using namespace std;
class student {
	string name;
	string ID;
	string dept_name;
	int task_assign;
	int time_for_each_task;
	float completion_time;

public:
	void SetName(string a) {
		name = a;
	}
	string getName() {
		return name;
	}

	void SetID(string b) {
		ID = b;
	}
	string getID() {
		return ID;
	}

	void SetDeptName(string c) {
		dept_name = c;
	}
	string getDeptName() {
		return dept_name;
	}

	void SetTaskAssign(int d) {
		task_assign = d;
	}
	int getTaskAssign() {
		return task_assign;
	}

	void SetTime_For_Each_Task(int e) {
		time_for_each_task = e;
	}

	int getTime_For_Each_Task() {
		return time_for_each_task;
	}

	void SetCompletionTime(float f) {
		completion_time = f;
	}
	float getCompletionTime() {
		return completion_time;
	}

	void display() {
		cout << getName() << endl;
		cout << getID() << endl;
		cout << getDeptName() << endl;
		cout << getTaskAssign() << endl;
		cout << getTime_For_Each_Task() << endl;
		cout << getCompletionTime() << endl;
	}

};

int main() {
	student s[1];
	int i, n, t;
	float C;
	string NAME, id, DEPT_NAME;
	for (i = 0; i < 1; i++) {
		cout << "enter name: " << endl;
		cin >> NAME;
		s[i].SetName(NAME);

		cout << "enter id: " << endl;
		cin >> id;
		s[i].SetID(id);

		cout << "enter dept name: " << endl;
		cin >> DEPT_NAME;
		s[i].SetDeptName(NAME);

		cout << "enter number of task: " << endl;
		cin >> n;
		s[i].SetTaskAssign(n);

		cout << "enter time for each task: " << endl;
		cin >> t;
		s[i].SetTime_For_Each_Task(t);

		cout << "enter completion time: " << endl;
		cin >> C;
		s[i].SetCompletionTime(C);
	}


	for (i = 0; i < 1; i++) {
		s[i].display();

	}
	return 0;
}
*/

//TASL 2
/*#include<iostream>
#include<string>
using namespace std;
class BankAccount {
private:
	string name;
	static int account_no;
	int curr_bal = 0;
	int dep_money;
	int num;
public:
	BankAccount(string n, int d) {
		setname(n);
		setdep_money(d);
		account_no++;
		num = account_no;
	}

	void setname(string a) {
		name = a;
	}

	string getname() {
		return name;
	}

	void setdep_money(int x) {
		dep_money = x;
	}

	int getdep_money() {
		return dep_money;
	}

	void setcurr_bal() {
		curr_bal += getdep_money();
	}

	int getcurr_bal() {
		return (curr_bal + dep_money);
	}
	void display() {
		cout << "name: " << getname() << endl;
		cout << "account number: " << num << endl;
		cout << "current balance: " << getcurr_bal() << endl;
	}


};
int	BankAccount::account_no(0);

int main() {
	BankAccount b1("irtiza", 1200), b2("sadiq", 1100);
	b1.display();
	b2.display();
	return 0;
}
*/


//task 3
/*#include<iostream>
#include<string>
using namespace std;

class Bank_Employee {
private:
	string f_name;
	string l_name;
	int monthly_salary;
public:
	Bank_Employee(string x, string y, int z) {
		setf_name(x);
		setl_name(y);
		setsalary(z);
	}

	void setf_name(string w) {
		f_name = w;
	}
	string getf_name() {
		return f_name;
	}

	void setl_name(string l) {
		l_name = l;
	}
	string getl_name() {
		return l_name;
	}

	void setsalary(int s) {
		if (s > 0) {
			monthly_salary = s;
		}
		else {
			monthly_salary = 0;
		}

	}
	int getsalary() {
		return monthly_salary;
	}


	void display() {
		cout << "f_name: " << getf_name() << endl;
		cout << "l_name: " << getl_name() << endl;
		cout << "annual salary: " << getsalary() * 12 << endl;

	}

	int increament() {
		return (getsalary() * 0.2 * 12 + getsalary() * 12);
	}

	void DISPLAY() {
		cout << "f_name: " << getf_name() << endl;
		cout << "l_name: " << getl_name() << endl;
		cout << "annual salary: " << increament() << endl;

	}
};

int main() {
	Bank_Employee b1("mohammad", "irtiza", 50000), b2("mohammad", "sadiq", 30000);
	cout << "actual: " << endl;
	b1.display();
	b2.display();

	cout << "raise: " << endl;
	b1.DISPLAY();
	b2.DISPLAY();


	return 0;
}*/
