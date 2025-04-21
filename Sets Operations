//#include <iostream>
//#include <string>  
//#include <cmath>  
//using namespace std;
//
//class Relation 
//{
//    int** Sets; // Double Pointer to Create Sets
//    int SizeA;  // Size Of Set A
//    int SizeB; // Size of Set B
//    bool empty[2] = { false }; // To keep the track of empty sets
//
//public:
//    Relation(int A = 0, int B = 0) : SizeA(A), SizeB(B) {
//        Sets = nullptr;
//    }
//
//    // Creation of Sets
//    void CreateSets(int A, int B) {
//        SizeA = A;
//        SizeB = B;
//        Sets = new int* [2];
//        empty[0] = true;
//        empty[1] = true;
//        if (A > 0) {
//            Sets[0] = new int[SizeA];
//            empty[0] = false;
//        }
//        if (B > 0) {
//            Sets[1] = new int[SizeB];
//            empty[1] = false;
//        }
//        if (!empty[0]) {
//            cout << "\nEnter The Elements in SetA:\n"; // Populating SetA
//            for (int i = 0; i < SizeA; i++) {
//                bool validInput = false;
//                while (!validInput) {
//                    cout << "Enter " << i + 1 << " Element: ";
//                    string input;
//                    getline(cin, input);
//
//                    try {        // Exception handling using Built-in Exceptions
//                      
//                        *(*(Sets + 0) + i) = stoi(input);
//                        validInput = true;  
//                    }
//                    catch (const invalid_argument& e) {
//                        
//                        cout << "Invalid input! Please enter a valid number.\n";
//                    }
//                    catch (const out_of_range& e) {
//                        
//                        cout << "Number out of range! Please enter a valid number.\n";
//                    }
//                }
//            }
//        }
//        if (!empty[1]) {
//            cout << "\nEnter The Elements in SetB:\n";  // Populating SetB
//            for (int i = 0; i < SizeB; i++) {
//                bool validInput = false;
//                while (!validInput) {
//                    cout << "Enter " << i + 1 << " Element: ";
//                    string input;
//                    getline(cin, input); 
//
//                    try {
//                       
//                        *(*(Sets + 1) + i) = stoi(input);
//                        validInput = true;  
//                    }
//                    catch (const invalid_argument& e) {
//
//                        cout << "Invalid input! Please enter a valid number.\n";
//                    }
//                    catch (const out_of_range& e) {
//                        
//                        cout << "Number out of range! Please enter a valid number.\n";
//                    }
//                }
//            }
//        }
//    }
//
//    // Evaluating Union Operation
//    void UnionOfSets() {
//        int* Union = new int[SizeA + SizeB];
//        bool Flag = true;
//        int k = 0;
//
//        if (empty[0] == false && empty[1] == true) {}
//        if (empty[1] == false && empty[0] == true) {}
//
//        for (int i = 0; i < SizeA; i++) {       // Copying the Elements Of Set A into the Newly created Pointer Array
//            Union[k++] = *(*(Sets + 0) + i);
//        }
//
//        int m = 0;
//        for (int i = SizeA; i < SizeA + SizeB; i++) { // Copying the Elements of Set B while keeping the track of Unique of elements
//            for (int j = 0; j < SizeA; j++) {
//                if (*(*(Sets + 1) + m) == *(*(Sets + 0) + j)) {
//                    Flag = false;
//                    break;
//                }
//            }
//            if (Flag) {
//                Union[k++] = *(*(Sets + 1) + m);
//            }
//            m++;
//
//            Flag = true;
//        }
//
//        cout << "\nUnion of Sets: "; 
//        for (int i = 0; i < k; i++) {
//            cout << Union[i] << " ";
//        }
//        cout << endl;
//
//        delete[] Union;
//    }
//
//    // Evaluating Intersection of the Sets
//    void InterSectionOfSets() {
//        int* Intersection = new int[min(SizeA, SizeB)];
//        int K = 0;
//        bool Intersect = false;
//
//        for (int i = 0; i < SizeA; i++) {
//            for (int j = 0; j < SizeB; j++) {
//                if (Sets[0][i] == Sets[1][j]) {
//                    Intersect = true;
//                    bool isDuplicate = false;
//
//                    for (int m = 0; m < K; m++) {   // Traversing the SetA & SetB if Particular element is in both copy it into newly
//                                                    //newly created pointer array
//                        if (Intersection[m] == Sets[0][i]) {
//                            isDuplicate = true;
//                            break;
//                        }
//                    }
//
//                    if (!isDuplicate) {
//                        Intersection[K++] = Sets[0][i];
//                    }
//                    break;
//                }
//            }
//        }
//
//        if (K > 0) {  // display if a non-empty set
//            cout << "\nIntersection of Sets: ";
//            for (int i = 0; i < K; i++) {
//                cout << Intersection[i] << " ";
//            }
//            cout << endl;
//        }
//        else {
//            cout << "\nIntersection of Sets: NULL SET";
//        }
//
//        delete[] Intersection;
//    }
//    // Evaluating the Elements of SetA keeping the track of Unique Elements of Set A
//    void SetA() {
//        int* A = new int[SizeA];
//        bool Flag = true;
//        int K = 0;
//        if (!empty[1]) {
//            for (int i = 0; i < SizeA; i++) {
//                for (int j = 0; j < SizeB; j++) {
//                    if (*(*(Sets + 0) + i) == *(*(Sets + 1) + j)) {
//                        Flag = false;
//                        break;
//                    }
//                }
//                if (Flag) {
//                    A[K++] = *(*(Sets + 0) + i); // copy if and only if element is in A
//                }
//                Flag = true;
//            }
//
//            cout << "\nElements in Set A but not in Set B: ";
//            if (K > 0) {
//                for (int i = 0; i < K; i++) {
//                    cout << A[i] << " ";
//                }
//                cout << endl;
//            }
//            else {
//                cout << "NULL SET\n";
//            }
//
//            delete[] A;
//        }
//        else cout << "Set B is empty comparison can't be performed" << endl;
//    }
//
//    // Evaluating the Elements of SetA keeping the track of Unique Elements of Set A
//    void SetB() {
//        int* B = new int[SizeB];
//        bool Flag = true;
//        int K = 0;
//
//        if (!empty[0]) {
//            for (int i = 0; i < SizeB; i++) {
//                for (int j = 0; j < SizeA; j++) {
//                    if (*(*(Sets + 1) + i) == *(*(Sets + 0) + j)) {
//                        Flag = false;
//                        break;
//                    }
//                }
//                if (Flag) {
//                    B[K++] = *(*(Sets + 1) + i); // Copy if the element is only in B
//                }
//                Flag = true;
//            }
//            if (K > 0) {
//                cout << "\nElements in Set B but not in Set A: ";
//                for (int i = 0; i < K; i++) {
//                    cout << B[i] << " ";
//                }
//                cout << endl;
//            }
//            else {
//                cout << "NULL SET\n";
//            }
//            delete[] B;
//        }
//    }
//
//    int TotalNumberOfRelations() {
//        int NewSize = SizeA * SizeB;
//        int Total = pow(2, NewSize);
//        return Total;
//    }
//
//    bool Reflexive() {
//        int Num = 0;
//        cout << "Enter Number of Pairs in Relations:\n";
//        while (true) {
//            string input;
//            getline(cin, input);
//            try {
//                Num = stoi(input);
//                if (Num < 0) {
//                    cout << "Please enter a positive number.\n";
//                }
//                else {
//                    break;
//                }
//            }
//            catch (const invalid_argument&) {
//                cout << "Invalid input! Please enter a valid number.\n";
//            }
//            catch (const out_of_range&) {
//                cout << "Number is too large! Please enter a valid number.\n";
//            }
//        }
//
//        int* Pair = new int[Num * 2];
//
//        // Input the relation pairs
//        for (int i = 0; i < Num; i++) {
//            bool validPairInput = false;
//            while (!validPairInput) {
//                cout << "Enter Pair " << i + 1 << " (two integers): ";
//                string pairInput;
//                getline(cin, pairInput);
//
//                try {
//                    size_t pos = 0;
//                    int first = stoi(pairInput, &pos);
//                    int second = stoi(pairInput.substr(pos));
//
//                    Pair[i * 2] = first;
//                    Pair[i * 2 + 1] = second;
//
//                    validPairInput = true;
//                }
//                catch (const invalid_argument&) {
//                    cout << "Invalid input! Please enter two integers.\n";
//                }
//                catch (const out_of_range&) {
//                    cout << "Number is too large! Please enter valid integers.\n";
//                }
//            }
//        }
//
//        // For reflexive property, we need to check if (a,a) exists for every element in Set A
//        for (int i = 0; i < SizeA; i++) {
//            bool foundReflexive = false;
//            int currentElement = Sets[0][i];
//
//            // Check if (a,a) exists in the relation for the current element
//            for (int j = 0; j < Num * 2; j += 2) {
//                if (Pair[j] == currentElement && Pair[j + 1] == currentElement) {
//                    foundReflexive = true;
//                    break;
//                }
//            }
//
//            // If we didn't find (a,a) for any element, the relation is not reflexive
//            if (!foundReflexive) {
//                delete[] Pair;
//                return false;
//            }
//        }
//
//        delete[] Pair;
//        return true;
//    }
//
//    bool Symmetric() {
//        int Num = 0;
//        cout << "Enter Number of Pairs in Relations:\n";
//        while (true) {
//            string input;
//            getline(cin, input);
//            try {
//                Num = stoi(input);  
//                if (Num < 0) {
//                    cout << "Please enter a positive number.\n";
//                }
//                else {
//                    break;  
//                }
//            }
//            catch (const invalid_argument&) {
//                cout << "Invalid input! Please enter a valid number.\n";
//            }
//            catch (const out_of_range&) {
//                cout << "Number is too large! Please enter a valid number.\n";
//            }
//        }
//
//        bool isSymmetric = true;
//        int* Pair = new int[Num * 2];
//
//        for (int i = 0; i < Num; i++) {
//            bool validPairInput = false;
//            while (!validPairInput) {
//                cout << "Enter Pair " << i + 1 << " (two integers): ";
//                string pairInput;
//                getline(cin, pairInput);
//
//                try {
//                    size_t pos = 0;
//                    int first = stoi(pairInput, &pos); 
//                    int second = stoi(pairInput.substr(pos)); 
//
//                    Pair[i * 2] = first;
//                    Pair[i * 2 + 1] = second;
//
//                    validPairInput = true;
//                }
//                catch (const invalid_argument&) {
//                    cout << "Invalid input! Please enter two integers.\n";
//                }
//                catch (const out_of_range&) {
//                    cout << "Number is too large! Please enter valid integers.\n";
//                }
//            }
//        }
//
//        for (int i = 0; i < Num * 2; i += 2) {
//            bool isFound = false;
//            for (int j = 0; j < Num * 2; j += 2) {
//                if (Pair[i] == Pair[j + 1] && Pair[i + 1] == Pair[j]) { // Checking whether (a,b)&(b,a) Exits for all pairs if so set the flag
//                                                                        // traversing the whole array to search
//                    isFound = true;
//                    break;
//                }
//            }
//            if (!isFound) {
//                isSymmetric = false;
//                break;
//            }
//        }
//
//        delete[] Pair;
//        return isSymmetric;
//    }
//
//    bool Antisymmetric() {
//        int Num = 0;
//        cout << "Enter Number of Pairs in Relations:\n";
//        while (true) {
//            string input;
//            getline(cin, input);
//            try {
//                Num = stoi(input);
//                if (Num < 0) {
//                    cout << "Please enter a positive number.\n";
//                }
//                else {
//                    break;  
//                }
//            }
//            catch (const invalid_argument&) {
//                cout << "Invalid input! Please enter a valid number.\n";
//            }
//            catch (const out_of_range&) {
//                cout << "Number is too large! Please enter a valid number.\n";
//            }
//        }
//
//        bool isAntisymmetric = true;
//        int* Pair = new int[Num * 2];
//
//        for (int i = 0; i < Num; i++) {
//            bool validPairInput = false;
//            while (!validPairInput) {
//                cout << "Enter Pair " << i + 1 << " (two integers): ";
//                string pairInput;
//                getline(cin, pairInput);
//
//                try {
//                    size_t pos = 0;
//                    int first = stoi(pairInput, &pos);
//                    int second = stoi(pairInput.substr(pos));
//
//                    Pair[i * 2] = first;
//                    Pair[i * 2 + 1] = second;
//
//                    validPairInput = true;
//                }
//                catch (const invalid_argument&) {
//                    cout << "Invalid input! Please enter two integers.\n";
//                }
//                catch (const out_of_range&) {
//                    cout << "Number is too large! Please enter valid integers.\n";
//                }
//            }
//        }
//
//        for (int i = 0; i < Num * 2; i += 2) {
//            for (int j = i + 2; j < Num * 2; j += 2) {
//                if (Pair[i] == Pair[j + 1] && Pair[i + 1] == Pair[j]) {  //If we find a pair (a, b) and (b, a), it is not antisymmetric
//                    isAntisymmetric = false;                              //except Strictly Reflexive
//                    break;
//                }
//            }
//            if (!isAntisymmetric) break;
//        }
//
//        delete[] Pair;
//        return isAntisymmetric;
//    }
//};
//
//int main() {
//    
//    Relation r;
//    r.CreateSets(3, 4);  // Create sets A and B with 3 elements each
//
//    // Test Reflexive property
//    if (r.Reflexive()) {
//        cout << "The relation is Reflexive.\n";
//    }
//    else {
//        cout << "The relation is not Reflexive.\n";
//    }
//
//    // Test Symmetric property
//    if (r.Symmetric()) {
//        cout << "The relation is Symmetric.\n";
//    }
//    else {
//        cout << "The relation is not Symmetric.\n";
//    }
//
//    // Test Antisymmetric property
//    if (r.Antisymmetric()) {
//        cout << "The relation is Antisymmetric.\n";
//    }
//    else {
//        cout << "The relation is not Antisymmetric.\n";
//    }
//
//    // Test Union of sets
//    r.UnionOfSets();  // Union of SetA and SetB
//
//    // Test Intersection of sets
//    r.InterSectionOfSets();  // Intersection of SetA and SetB
//
//    // Test elements in Set A but not in Set B
//    r.SetA();
//
//    // Test elements in Set B but not in Set A
//    r.SetB();
//
//    // Test Total number of relations between two sets
//    cout << "Total number of relations: " << r.TotalNumberOfRelations() << endl;
//
//    return 0;
//}
