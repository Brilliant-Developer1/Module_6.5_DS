// #include<bits/stdc++.h>
#include <algorithm>
#include <array>
#include <bitset>
#include <cassert>
#include <cctype>
#include <cerrno>
#include <cfloat>
#include <ciso646>
#include <climits>
#include <clocale>
#include <cmath>
#include <complex>
#include <csetjmp>
#include <csignal>
#include <cstdarg>
#include <cstddef>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <cwchar>
#include <cwctype>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <random>
#include <regex>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <strstream>
#include <tuple>
#include <typeinfo>
#include <type_traits>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <valarray>
#include <vector>

using namespace std;
class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void insert_at_tail(Node *&head, int v)
{
    Node *newNode = new Node(v);

    if (head == NULL)
    {
        head = newNode;
        return;
    }

    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    } // temp ekhon last node e.

    temp->next = newNode;
}

int getLinkedListLength(Node *head)
{
    int length = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        length++;
        temp = temp->next;
    }
    return length;
}
void print_linked_list(Node *head)
{
    int length = getLinkedListLength(head);
    Node *temp = head;
    int frqArray[length];
    int i = 0;
    while (temp != NULL)
    {
        frqArray[i] = temp->val;
        temp = temp->next;
        i++;
    }
    // cout << length << endl;
    for (int i = 0; i < length; i++)
    {
        if (length % 2 == 0)
        {
            if (i == (length / 2) - 1 || i == length / 2)
            {
                cout << frqArray[i] << " ";
            }
            else
                continue;
        }
        else
        {
            if (i == length / 2)
            {
                cout << frqArray[i] << " ";
            }
            else
                continue;
        }
    }
}

int main()
{
    int value;
    Node *head = NULL;
    while (true)
    {
        cin >> value;
        if (value == -1)
            break;
        insert_at_tail(head, value);
    }
    print_linked_list(head);

    return 0;
}