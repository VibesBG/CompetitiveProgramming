#include <iostream>
#include <bitset>

using namespace std;

const int N = 10;

bitset<N> setUnion(const bitset<N>& a, const bitset<N>& b) { return a | b; }
bitset<N> intersection(const bitset<N>& a, const bitset<N>& b) { return a & b; }
bitset<N> difference(const bitset<N>& a, const bitset<N>& b) { return a & (~b); }
bitset<N> symdifference(const bitset<N>& a, const bitset<N>& b) { return a ^ b; }

int main()
{
    bitset<N> A, B;

    A.set(1);
    A.set(3);
    A.set(5);
    A.set(7);

    B.set(3);
    B.set(4);
    B.set(7);
    B.set(8);

    cout << "A = " << A << endl;
    cout << "B = " << B << endl << endl;

    cout << "Union (A ∪ B) =        " << setUnion(A, B) << endl;
    cout << "Intersection (A ∩ B) = " << intersection(A, B) << endl;
    cout << "Difference (A \\ B) =   " << difference(A, B) << endl;
    cout << "Symmetric diff =       " << symdifference(A, B) << endl;

    return 0;
}
