#pragma GCC optimize("O3")
#include <bits/stdc++.h>
using namespace std;

template <typename T> struct rge {
  T b, e;
};
template <typename T> rge<T> range(T i, T j) { return rge<T>{i, j}; }
#define imie(...) "{" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "}"

#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++)
#define FORS(a, b, c) for (int(a) = (b); (a) < (c); (a)++)
#define FORL(a, c) for (int(a) = 0; (a) <= (c); (a)++)
#define FORLS(a, b, c) for (int(a) = (b); (a) <= (c); (a)++)
#define MP make_pair
using i8 = char;                // -128;127
using i16 = short;              // -32768;32767
using i32 = int;                // -2; 2 billion
using i64 = long long;          // -9;9 quadrillion
using u8 = unsigned char;       // 0;255
using u16 = unsigned short;     // 0;65535
using u32 = unsigned int;       // 0; 4 billion
using u64 = unsigned long long; // 0;18 quadrillion
const u8 alphabet_ASCII[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i',
                             'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r',
                             's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
const u8 ALPHABET_ASCII[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I',
                             'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R',
                             'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
#define DEBUG
#ifdef DEBUG
#define debug_run(a) (a)
#else
#define debug_run(a)
#endif
using ll = long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vi = vector<int>;
using vll = vector<ll>;
template <typename T> using Vec = vector<T>;

template <typename T>
std::ostream &operator<<(std::ostream &os, const vector<T> &inp) {
  os << "[";
  u64 s = inp.size();
  if (s != 0) {
    os << inp[0];
    for (int i = 1; i < s; i++) {
      os << ", " << inp[i];
    }
  }

  os << "]";
  return os;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  i32 i = 0;
}
