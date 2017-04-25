#include <iostream>

// this source is not used for compilation

int main ()
{
  constexpr unsigned sz = 42;

  int ia[sz];			// ia is an array with 42 integers

  int *pia[sz];		// pia is an array with 42 pointers to integer

  const unsigned cn = 36;

  std::string sa[cn];	     // error! cn is not a constant expression

  const unsigned sz = 3;

  int ia[sz] = {1, 2, 3};	// 3 elements, values 1, 2, 3
  int ia1[] = {1, 2, 3};	// 3 elements, values 1, 2, 3

  int ia2[5] = {1, 2, 3}; 	// 5 elements, values 1, 2, 3, 0, 0

  string sa[sz] = {"g", "mu"};	// 3 elements, values "g", "mu", ""

  int ia3[2] = {1, 2, 3}; 	// error! too many initializers

  char ca1[] = {'S', 'J', 'T', 'U'};	   // 4 elements, no \0

  char ca2[] = {'S', 'J', 'T', 'U', '\0'}; // 5 elements

  char ca3[] = "SJTU";		// 5 elements, same as above

  char ca4[4] = "SJTU";	   // error! The string literal has 5 elements

  int a[] = {0, 1, 2};		// array of three ints

  int a2[] = a;	    // error: cannot initialize one array with another

  a2 = a;	    // error: cannot assign one array to another

  int *ptrs[10]; // ptrs is an array of ten pointers to int

  int &refs[10] = /* ? */; // error: no arrays of references

  int (*Parray)[10] = &arr; // Parray points to an array of ten ints

  int (&arrRef)[10] = arr; // arrRef refers to an array of ten ints

  int *(&arry)[10] = ptrs; // arry is a reference to an array of ten pointers

  string nums[] = {"one", "two", "three"}; // array of strings

  string *p = &nums[0];	      // p points to the first element in nums

  string *pp = nums;	      // pp points to the first element in nums

  int ia[] = {0,1,2,3,4,5,6,7,8,9}; // ia is an array of ten ints

  auto ia2(ia); // ia2 is an int* that points to the first element in ia
  auto ia3(&ia[0]);		// same as above
  decltype (ia) ia4 = {0,1,2,3,4,5,6,7,8,9}; // ia4 is an array of ten ints

  int arr[] = {0,1,2,3,4,5,6,7,8,9};

  int *p = arr; // p points to the first element in arr

  ++p; // p points to arr[1]

  int *e = &arr[10]; // pointer just past the last element in arr

  for (int *b = arr; b != e; ++b)
    cout << *b << endl; // print the elements in arr

  int ia[] = {0,1,2,3,4,5,6,7,8,9}; // ia is an array of ten ints

  int *beg = begin(ia); // pointer to the first element in ia

  int *last = end(ia); // pointer one past the last element in ia

  constexpr size_t sz = 5;

  int arr[sz] = {1,2,3,4,5};

  int *ip = arr; // equivalent to int *ip = &arr[0]

  int *ip2 = ip + 4; // ip2 points to arr[4], the last element in arr

  int *p = arr + sz; // use caution -- do not dereference!
  int *p2 = arr + 10; // error: arr has only 5 elements; p2 has undefined value

  auto n = end(arr) - begin(arr); // n is 5, the number of elements in arr

  int *b = arr, *e = arr + sz;
  while (b < e) {
    // use *b
    ++b;
  }

  int ia[] = {0,2,4,6,8}; // array with 5 elements of type int

  int last = *(ia + 4); // ok: initializes last to 8, the value of ia[4]

  last = *ia + 4; // ok: last = 4, equivalent to ia[0] + 4

  int ia[] = {0,2,4,6,8}; // array with 5 elements of type int

  int i = ia[2]; // ia is converted to a pointer to the first element in ia
		 // ia[2] fetches the element to which (ia + 2) points
  int *p = ia;	 // p points to the first element in ia
  i = *(p + 2);	 // equivalent to i = ia[2]

  int *p = &ia[2]; // p points to the element indexed by 2
  int j = p[1];	   // p[1] is equivalent to *(p + 1),
		   // p[1] is the same element as ia[3]
  int k = p[-2];   // p[-2] is the same element as ia[0]

  string s = "Hello SJTU!";
  const char *ps1 = s.c_str();
  const char *ps2 = s.data();

  int int_arr[] = {0, 1, 2, 3, 4, 5};

  // ivec has six elements; each is a copy of the corresponding element in int_arr
  vector<int> ivec(begin(int_arr), end(int_arr));


  int ia[3][4]; // array of size 3; each element is an array of ints of size 4

  // array of size 10; each element is a 20-element array whose elements
  // are arrays of 30 ints
  int arr[10][20][30] = {0}; // initialize all elements to 0

  int ia[3][4] = { // three elements; each element is an array of size 4
    {0, 1, 2, 3},  // initializers for the row indexed by 0
    {4, 5, 6, 7},  // initializers for the row indexed by 1
    {8, 9, 10, 11} // initializers for the row indexed by 2
  };

  int ia[3][4] = {0,1,2,3,4,5,6,7,8,9,10,11};

  // assigns the first element of arr to the last element in the last row of ia
  ia[2][3] = arr[0][0][0];
  
  int (&row)[4] = ia[1]; // binds row to the second four-element array in ia

  constexpr size_t rowCnt = 3, colCnt = 4;
  int ia[rowCnt][colCnt]; // 12 uninitialized elements
  // for each row
  for (size_t i = 0; i != rowCnt; ++i) {
    // for each column within the row
    for (size_t j = 0; j != colCnt; ++j) {
      // assign the element's positional index as its value
      ia[i][j] = i * colCnt + j;
    }
  }

  size_t cnt = 0;
  for (auto &row : ia) {// for every element in the outer array
    for (auto &col : row) { // for every element in the inner array
      col = cnt; // give this element the next value
      ++cnt; // increment cnt
    }
  }

  for (const auto &row : ia) // for every element in the outer array
    for (auto col : row) // for every element in the inner array
      cout << col << endl;

  int ia[3][4]; // array of size 3; each element is an array of ints of size 4

  int (*p)[4] = ia; // p points to an array of four ints

  p = &ia[2]; // p now points to the last element in ia

  int ia[3][4]; // array of size 3; each element is an array of ints of size 4
  for (auto p = ia; p != ia + 3; ++p) {
    // q points to the first element of an array of four ints;
    // that is, q points to an int
    for (auto q = *p; q != *p + 4; ++q)
      cout << *q << ' ';
    cout << endl;
  }

  // p points to the first array in ia
  for (auto p = begin(ia); p != end(ia); ++p) {
    // q points to the first element in an inner array
    for (auto q = begin(*p); q != end(*p); ++q)
      cout << *q << ' ';
    cout << endl;
  }

}
  
