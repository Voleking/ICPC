// written at 22:53 on 17 Aug 2018
#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, n) for (int i = a; i < n; i++)
#define per(i, a, n) for (int i = n - 1; i >= a; i--)
#define SZ(x) ((int)x.size())
#define all(x) (x).begin(), (x).end()
#define IOS std::ios::sync_with_stdio(false); std::cin.tie(nullptr); std::cout.tie(nullptr);
#define filename ""
#define setfile() freopen(filename".in", "r", stdin); freopen(filename".ans", "w", stdout);
#define resetfile() freopen("/dev/tty", "r", stdin); freopen("/dev/tty", "w", stdout); system("more " filename".ans");

template <typename T>
inline T sqr(T a) { return a * a;};
template <typename T>
void dprint(T begin, T end) {for (auto i = begin; i != end; i++) cerr << (*i) << " "; cerr << "\n";};

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int, int > Pii;

int n, k, a, b;
string s;

int main() {
    cin >> n >> k >> s; a = b = (n - k) / 2;
    for (int i = 0; i < n; i++) {
        if (s[i] == '(') {
            if (a == 0) cout << s[i];
            else a--;
        }
        if (s[i] == ')') {
            if (b == 0) cout << s[i];
            else b--;
        }
    }
    cout << endl;
    return 0;
}
