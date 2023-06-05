
/*
#include <iostream>
#include <fstream>
int main() {
std::fstream file("example.txt", std::ios::in | std::ios::out);
if (file.is_open()) {
file.seekp(10, std::ios_base::beg);
file << "Hello World!";
file.seekg(0, std::ios_base::beg);
std::string line;
while (getline(file, line)) {
std::cout << line << std::endl;
}
file.close();
}
return 0;
}*/


// #include <iostream>
// #include <fstream>
// int main() {std::ofstream file("example.txt", std::ios::out | std::ios::app);
// if (file.is_open()) {
// file << "Hello World!";
// std::streampos position = file.tellp();
// std::cout << "Current position: " << position << std::endl;
// file.close();
// }
// return 0;
// }


//methode 1:
// #include <iostream>
// #include <cstring>
// #include <exception>
// #include <fstream>
// using namespace std;

// struct Product {
//     char Name[50];
//     int id;
//     double price;
//     int quantity;
// };

// class Inventory {
// public:
//     Inventory() {}
// fstream file;
//     void open(const char* filename, ios_base::openmode mode) {
//         file.open(filename, mode | ios::binary);
//         if (!file) {
//             throw runtime_error("unable to open file");
//         }
//     }

//     void close() {
//         file.close();
//     }

//     void addProduct(Product product) {
//         file.seekg(0, ios::end);
//         file.write(reinterpret_cast<char*>(&product), sizeof(Product));
//         cout << "Product added!" << endl;
//     }

//     void displayAllProduct() {
//         file.seekg(0, ios::beg);
//         Product product;
//         while (file.read(reinterpret_cast<char*>(&product), sizeof(Product))) {
//             cout << "Id: " << product.id << endl;
//             cout << "Name: " << product.Name << endl;
//             cout << "Price: " << product.price << endl;
//             cout << "Quantity: " << product.quantity << endl;
//         }
//     }

//     void SearchProduct() {
//         int item;
//         cout << "Search by: " << endl;
//         cout << "1 - ID\n";
//         cout << "2 - Name\n";
//         cin >> item;

//         if (item == 1) {
//             int id;
//             cout << "Enter the ID: ";
//             cin >> id;
//             Product product;
//             file.seekg(0, ios::beg);
//             bool isTrue = false;
//             while (file.read(reinterpret_cast<char*>(&product), sizeof(Product))) {
//                 if (product.id == id) {
//                     isTrue = true;
//                     cout << "Id: " << product.id << endl;
//                     cout << "Name: " << product.Name << endl;
//                     cout << "Price: " << product.price << endl;
//                     cout << "Quantity: " << product.quantity << endl;
//                     break;
//                 }
//             }
//             if (!isTrue) {
//                 cout << "Product not found!" << endl;
//             }
//         }
//         else if (item == 2) {
//             char name[50];
//             cout << "Enter the name: ";
//             cin.ignore();
//             cin.getline(name, 50);
//             Product product;
//             file.seekg(0, ios::beg);
//             bool isTrue = false;
//             while (file.read(reinterpret_cast<char*>(&product), sizeof(Product))) {
//                 if (strcmp(product.Name, name) == 0) {
//                     isTrue = true;
//                     cout << "Id: " << product.id << endl;
//                     cout << "Name: " << product.Name << endl;
//                     cout << "Price: " << product.price << endl;
//                     cout << "Quantity: " << product.quantity << endl;
//                     break;
//                 }
//             }
//             if (!isTrue) {
//                 cout << "Product not found!" << endl;
//             }
//         }
//         else {
//             cout << "Invalid input!" << endl;
//         }
//     }

//    void editProduct(const char* filename, int id, Product newData) {
//     file.open(filename, ios::binary | ios::in | ios::out);
//     if (!file.is_open()) {
//         cout << "Error in opening the file" << endl;
//     }
//     file.seekg(0, ios::end);
//     int fileSize = file.tellg();
//     int numOfProd = fileSize / sizeof(Product);
//     file.seekg(0, ios::beg);

//     bool found = false;

//     for (int i = 0; i < numOfProd; i++) {
//         Product product;
//         file.read(reinterpret_cast<char*>(&product), sizeof(Product));
//         if (product.id == id) {
//             found = true;
//             file.seekp(i * sizeof(Product), ios::beg);
//             file.write(reinterpret_cast<char*>(&newData), sizeof(Product));
//             cout << "Product with ID " << id << " updated successfully" << endl;
//             break;
//         }
//     }
//     if (!found) {
//         cout << "Product with ID " << id << " not updated successfully" << endl;
//     }
//     file.close();
// }
// void deleteProduct(const char* filename, int id) {
//     file.open(filename, ios::binary | ios::in | ios::out);
//     if (!file.is_open()) {
//         cout << "Error in opening the file" << endl;
//         return;
//     }
//     file.seekg(0, ios::end);
//     int fileSize = file.tellg();
//     int numOfProd = fileSize / sizeof(Product);
//     file.seekg(0, ios::beg);

//     bool found = false;

//     for (int i = 0; i < numOfProd; i++) {
//         Product product;
//         file.read(reinterpret_cast<char*>(&product), sizeof(Product));
//         if (product.id != id) {
//             file.seekp(i * sizeof(Product), ios::beg);
//             file.write(reinterpret_cast<char*>(&product), sizeof(Product));
//         } else {
//             found = true;
//         }
//     }

//     if (found) {
//         cout << "Product with ID " << id << " deleted successfully" << endl;
//     } else {
//         cout << "Product with ID " << id << " not found or not deleted successfully" << endl;
//     }

//     file.close();
// }


//     double calTotValue(fstream& file) {
//         file.clear();
//         file.seekg(0, ios::beg);
//         double totValue = 0;
//         Product product;

//         while (file.read(reinterpret_cast<char*>(&product), sizeof(Product))) {
//             totValue += product.price * product.quantity;
//         }
//         return totValue;
//     }
// };

// int main() {
//     Inventory t;
//     Product p1, p2, p3;
//     p1.id = 1;
//     strcpy(p1.Name, "shampoo");
//     p1.price = 123;
//     p1.quantity = 12;
//     p2.id = 2;
//     strcpy(p2.Name, "lotion");
//     p2.price = 113;
//     p2.quantity = 7;
//     p3.id = 3;
//     strcpy(p3.Name, "polish");
//     p3.price = 90;
//     p3.quantity = 5;

//     try {
//         t.open("inventory.dat", ios::in | ios::out | ios::app);
//         t.addProduct(p1);
//         t.addProduct(p2);
//         t.addProduct(p3);
//         t.close();

//         int choice;
//         do {
//             cout << "1. Display all products" << endl;
//             cout << "2. Search a product" << endl;
//             cout << "3. Edit a product" << endl;
//             cout << "4. Delete a product" << endl;
//             cout << "5. Calculate total value" << endl;
//             cout << "6. Exit" << endl;
//             cout << "Enter your choice: ";
//             cin >> choice;

//             switch (choice) {
//                 case 1:
//                     t.open("inventory.dat", ios::in);
//                     t.displayAllProduct();
//                     t.close();
//                     break;
//                 case 2:
//                     t.open("inventory.dat", ios::in);
//                     t.SearchProduct();
//                     t.close();
//                     break;
//                 case 3:
//                     t.open("inventory.dat", ios::in | ios::out);
//                     int id;
//                     cout << "Enter the ID of the product you want to edit: ";
//                     cin >> id;
//                     cout << "Enter new product details: " << endl;
//                     Product newData;
//                     cout << "ID: ";
//                     cin >> newData.id;
//                     cout << "Name: ";
//                     cin.ignore();
//                     cin.getline(newData.Name, 50);
//                     cout << "Price: ";
//                     cin >> newData.price;
//                     cout << "Quantity: ";
//                     cin >> newData.quantity;
//                     t.editProduct("inventory.dat", id, newData);
//                     t.close();
//                     break;
//                 case 4:
//                     t.open("inventory.dat", ios::in | ios::out);
//                     int deleteId;
//                     cout << "Enter the ID of the product you want to delete: ";
//                     cin >> deleteId;
//                     t.deleteProduct("inventory.dat", deleteId);
//                     t.close();
//                     break;
//                 case 5:
//                     t.open("inventory.dat", ios::in);
//                     cout << "Total value of inventory: " << t.calTotValue(t.file) << endl;
//                     t.close();
//                     break;
//                 case 6:
//                     cout << "Exiting program..." << endl;
//                     break;
//                 default:
//                     cout << "Invalid choice!" << endl;
//                     break;
//             }
//         } while (choice != 6);
//     } catch (const exception& e) {
//         cout << "Exception occurred: " << e.what() << endl;
//     }

//     return 0;
// }

//methode 2:(easy)
#include <iostream>
#include <fstream>
#include<cstring>
#include<vector>
#include <stdexcept>
#include <string>
#include<algorithm>

using namespace std;
void Search();
void Update();
void Delete();
class Student {
public:
    char name[100];
    char Fname[100];
    int id;
    int age;
    int Class;
    char grade;
    float percentage;


    Student() {}

    Student(const char* arr, const char* arr1, int a, int b, int c, char d, float e) {
        strcpy(name, arr);
        strcpy(Fname, arr1);
        id = a;
        age = b;
        Class = c;
        grade = d;
        percentage = e;
    }

    // void AddToFile() {
    //     ofstream File("Student.txt", ios::out);
    //     if (!File) {
    //         throw runtime_error("Unable to open the file");
    //     }
    //     else {
    //         File.write(reinterpret_cast<char*>(this), sizeof(Student));
    //         cout << "Added to the file successfully" << endl;
    //     }
    //     File.close();
    // }

    // void ReadFromFile() {
    //     ifstream File("Student.txt", ios::in);
    //     if (!File) {
    //         throw runtime_error("Unable to open the file");
    //     }
    //     else {
    //         Student s;
    //         while (File.read(reinterpret_cast<char*>(&s), sizeof(Student))) {
    //             cout << s;
    //         }
    //     }
    //     File.close();
    // }

    // void Search() {
    //     int item;
    //     cout << "Search by: \n1-Id\n2-Name" << endl;
    //     cin >> item;
    //     ifstream File("Student.txt", ios::in);
    //     if (!File) {
    //         throw runtime_error("Unable to open the file");
    //     }
    //     else if (item == 1) {
    //         int id;
    //         cout << "Enter the id: " << endl;
    //         cin >> id;
    //         Student s;
    //         while (File.read(reinterpret_cast<char*>(&s), sizeof(Student))) {
    //             if (s.id == id)
    //                 cout << s;
    //         }
    //         cout << "ID not found!" << endl;
    //     }
    //     else if (item == 2) {
    //         string name;
    //         cout << "Enter the name: " << endl;
    //         cin >> name;
    //         Student s;
    //         while (File.read(reinterpret_cast<char*>(&s), sizeof(Student))) {
    //             if (strcmp(s.name, name.c_str()) == 0)
    //                 cout << s;
    //         }
    //         cout << "Name not found!" << endl;
    //     }
    //     File.close();
    // }

    // void Update() {
    //     int item;
    //     cout << "Update by: \n1-Id\n2-Name" << endl;
    //     cin >> item;
    //     ifstream File("Student.txt", ios::in);
    //     ofstream File1("temp.txt", ios::out);
    //     if (!File) {
    //         throw runtime_error("Unable to open the file");
    //     }
    //     else if (item == 1) {
    //         int id;
    //         cout << "Enter the id: " << endl;
    //         cin >> id;
    //         Student s;
    //         Student newData;
    //         cin >> newData;
    //         while (File.read(reinterpret_cast<char*>(&s), sizeof(Student))) {
    //             if (s.id == id)
    //                 File1.write(reinterpret_cast<char*>(&newData), sizeof(Student));
    //             else
    //                 File1.write(reinterpret_cast<char*>(&s), sizeof(Student));
    //         }
    //     }
    //     else if (item == 2) {
    //         string name;
    //         cout << "Enter the name: " << endl;
    //         cin >> name;
    //         Student s;
    //         Student newData;
    //         cin >> newData;
    //         while (File.read(reinterpret_cast<char*>(&s), sizeof(Student))) {
    //             if (strcmp(s.name, name.c_str()) == 0)
    //                 File1.write(reinterpret_cast<char*>(&newData), sizeof(Student));
    //             else
    //                 File1.write(reinterpret_cast<char*>(&s), sizeof(Student));
    //         }
    //     }
    //     File.close();
    //     File1.close();
    //     remove("Student.txt");
    //     rename("temp.txt", "Student.txt");
    // }

    // void Delete() {
    //     int item;
    //     cout << "Delete by: \n1-Id\n2-Name" << endl;
    //     cin >> item;
    //     ifstream File("Student.txt", ios::in);
    //     ofstream File1("temp.txt", ios::app);
    //     if (!File) {
    //         throw runtime_error("Unable to open the file");
    //     }
    //     else if (item == 1) {
    //         int id;
    //         cout << "Enter the id: " << endl;
    //         cin >> id;
    //         Student s;
    //         while (File.read(reinterpret_cast<char*>(&s), sizeof(Student))) {
    //             if (s.id == id)
    //                 continue;
    //             else
    //                 File1.write(reinterpret_cast<char*>(&s), sizeof(Student));
    //         }
    //     }
    //     else if (item == 2) {
    //         string name;
    //         cout << "Enter the name: " << endl;
    //         cin >> name;
    //         Student s;
    //         while (File.read(reinterpret_cast<char*>(&s), sizeof(Student))) {
    //             if (strcmp(s.name, name.c_str()) == 0)
    //                 continue;
    //             else
    //                 File1.write(reinterpret_cast<char*>(&s), sizeof(Student));
    //         }
    //     }
    //     File.close();
    //     File1.close();
    //     remove("Student.txt");
    //     rename("temp.txt", "Student.txt");
    // }

    //sortingnn7
    
    static bool CompareById(const Student& s1, const Student& s2) {
        return s1.id < s2.id;
    }

    static bool CompareByName(const Student& s1, const Student& s2) {
        return strcmp(s1.name, s2.name) < 0;
    }

    static void SortAscending() {
        vector<Student> students = ReadAllFromFile();
        sort(students.begin(), students.end(), CompareById);
        WriteAllToFile(students);
        cout << "File sorted in ascending order by ID." << endl;
    }

    static void SortDescending() {
        vector<Student> students = ReadAllFromFile();
        sort(students.begin(), students.end(), CompareById);
        reverse(students.begin(), students.end());
        WriteAllToFile(students);
        cout << "File sorted in descending order by ID." << endl;
    }

    static vector<Student> ReadAllFromFile() {
        vector<Student> students;
        ifstream File("Student.txt", ios::in);
        if (!File) {
            throw runtime_error("Unable to open the file");
        }
        else {
            Student s;
            while (File.read(reinterpret_cast<char*>(&s), sizeof(Student))) {
                students.push_back(s);
            }
        }
        File.close();
        return students;
    }

    static void WriteAllToFile(const vector<Student>& students) {
        ofstream File("Student.txt", ios::out);
        if (!File) {
            throw runtime_error("Unable to open the file");
        }
        else {
            for (const auto& student : students) {
                File.write(reinterpret_cast<const char*>(&student), sizeof(Student));
            }
            cout << "Written to the file successfully" << endl;
        }
        File.close();
    }

    friend ostream& operator<<(ostream& output, const Student& obj);
    friend istream& operator>>(istream& input, Student& obj);
};
ostream& operator<<(ostream& output, const Student& obj) {
    output << "Id: " << obj.id << endl;
    output << "Name: " << obj.name << endl;
    output << "Father Name: " << obj.Fname << endl;
    output << "Age: " << obj.age << endl;
    output << "Class: " << obj.Class << endl;
    output << "Previous Grade: " << obj.grade << endl;
    output << "Previous Percentage: " << obj.percentage << endl;
    return output;
}

istream& operator>>(istream& input, Student& obj) {
    cout << "Enter the id: ";
    input >> obj.id;
    cout << endl;
    cout << "Enter your name: ";
    input.ignore();
    //getline(input,obj.name);
    input.getline(obj.name, 100);
    cout << endl;
    cout << "Enter your father's name: ";
    input.getline(obj.Fname, 100);
    cout << endl;
    cout << "Enter the age: ";
    input >> obj.age;
    cout << endl;
    cout << "Enter the class: ";
    input >> obj.Class;
    cout << endl;
    cout << "Enter the previous grade: ";
    input >> obj.grade;
    cout << endl;
    cout << "Enter the previous percentage: ";
    input >> obj.percentage;
    cout << endl;
    return input;
}
   void AddToFile( Student s) {
       
        ofstream File("Student.txt", ios::app);
        if (!File) {
            throw runtime_error("Unable to open the file");
        }
        else {
            File.write(reinterpret_cast<char*>(&s), sizeof(Student));
            cout << "Added to the file successfully" << endl;
        }
        File.close();
    }

    void ReadFromFile() {
        Student s;
        ifstream File("Student.txt", ios::in);
        if (!File) {
            throw runtime_error("Unable to open the file");
        }
        else {
            Student s;
            while (File.read(reinterpret_cast<char*>(&s), sizeof(Student))) {
                cout << s;
            }
        }
        File.close();
    }

    void Search() {
        int item;
        cout << "Search by: \n1-Id\n2-Name" << endl;
        cin >> item;
        ifstream File("Student.txt", ios::in);
        if (!File) {
            throw runtime_error("Unable to open the file");
        }
        else if (item == 1) {
            int id;
            cout << "Enter the id: " << endl;
            cin >> id;
            Student s;
            while (File.read(reinterpret_cast<char*>(&s), sizeof(Student))) {
                if (s.id == id)
                    cout << s;
            }
            cout << "ID not found!" << endl;
        }
        else if (item == 2) {
            string name;
            cout << "Enter the name: " << endl;
            cin >> name;
            Student s;
            while (File.read(reinterpret_cast<char*>(&s), sizeof(Student))) {
                if (strcmp(s.name, name.c_str()) == 0)
                    cout << s;
            }
            cout << "Name not found!" << endl;
        }
        File.close();
    }

    void Update() {
        int item;
        cout << "Update by: \n1-Id\n2-Name" << endl;
        cin >> item;
        ifstream File("Student.txt", ios::in);
        ofstream File1("temp.txt", ios::out);
        if (!File) {
            throw runtime_error("Unable to open the file");
        }
        else if (item == 1) {
            int id;
            cout << "Enter the id: " << endl;
            cin >> id;
            Student s;
            Student newData;
            cin >> newData;
            while (File.read(reinterpret_cast<char*>(&s), sizeof(Student))) {
                if (s.id == id)
                    File1.write(reinterpret_cast<char*>(&newData), sizeof(Student));
                else
                    File1.write(reinterpret_cast<char*>(&s), sizeof(Student));
            }
        }
        else if (item == 2) {
            string name;
            cout << "Enter the name: " << endl;
            cin >> name;
            Student s;
            Student newData;
            cin >> newData;
            while (File.read(reinterpret_cast<char*>(&s), sizeof(Student))) {
                if (strcmp(s.name, name.c_str()) == 0)
                    File1.write(reinterpret_cast<char*>(&newData), sizeof(Student));
                else
                    File1.write(reinterpret_cast<char*>(&s), sizeof(Student));
            }
        }
        File.close();
        File1.close();
        remove("Student.txt");
        rename("temp.txt", "Student.txt");
    }

    void Delete() {
        int item;
        cout << "Delete by: \n1-Id\n2-Name" << endl;
        cin >> item;
        ifstream File("Student.txt", ios::in);
        ofstream File1("temp.txt", ios::app);
        if (!File) {
            throw runtime_error("Unable to open the file");
        }
        else if (item == 1) {
            int id;
            cout << "Enter the id: " << endl;
            cin >> id;
            Student s;
            while (File.read(reinterpret_cast<char*>(&s), sizeof(Student))) {
                if (s.id == id)
                    continue;
                else
                    File1.write(reinterpret_cast<char*>(&s), sizeof(Student));
            }
        }
        else if (item == 2) {
            string name;
            cout << "Enter the name: " << endl;
            cin >> name;
            Student s;
            while (File.read(reinterpret_cast<char*>(&s), sizeof(Student))) {
                if (strcmp(s.name, name.c_str()) == 0)
                    continue;
                else
                    File1.write(reinterpret_cast<char*>(&s), sizeof(Student));
            }
        }
        File.close();
        File1.close();
        remove("Student.txt");
        rename("temp.txt", "Student.txt");
    }
int main() {
    Student S[3] = { Student("irtiza", "wazir", 1, 18, 13, 'A', 89.9),Student("sadiq", "jamal", 2, 19, 12, 'F', 8.9),Student("subhan", "rangila", 3, 20, 23, 'B', 88.9) };

   
      //  S[0].AddToFile();
    

//when func are global
    AddToFile(S[0]);
    AddToFile(S[1]);
    ReadFromFile();
    Delete();
    ReadFromFile();
    Update();
    ReadFromFile();
    S[0].SortAscending();
    ReadFromFile();
    S[0].SortDescending();
    ReadFromFile();

    // S[0].Delete();
    // S[0].ReadFromFile();
    // S[1].Search();
    // S[2].Update();

    return 0;
}
