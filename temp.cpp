// c++ template setup for competitive programming
// well you can use this one below for light weight
/*
#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

#define STANDARD_TYPE
#define STANDARD
#define MATH

#ifdef STANDARD_TYPE
    using ulli = unsigned long long int;
    using ll = long long;
    using ull = unsigned long long;
    using lli = long long int;
    using ld = long double;
    typedef long int int32;
    typedef unsigned long int uint32;
    typedef long long int int64;
    typedef unsigned long long int  uint64;
#endif

const ll INF = 1e18;
const ll MOD = 1e9 + 7;

#ifdef STANDARD
    #define FAST_IO ios::sync_with_stdio(0), cin.tie(nullptr), cout.tie(nullptr)
    #define LOG(msg) cout << msg << endl
    const char nl = '\n';
#endif 

#ifdef MATH
    #define PI 3.1415926535897932384626433832795
#endif

#ifdef DEBUG
    //#include "algo/debug.h"
    #define debug(...) printf(__VA_ARGS__)
    #define DEBUG_LOG(msg) cout<< #msg << " " << msg << '\n'
#else
    #define debug(...) 42
#endif

void solve()
{
    
}

int main()
{
    FAST_IO;
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    #endif
    solve();
}

*/
#include<bits/stdc++.h>
using namespace std;

/* Little info (might needed) (credits : viplu43)

ASCII OF NUMBERS 0-9             ==> [48, 57]
ASCII OF UPPERCASE ALPHABETS A-Z ==> [65, 90]
ASCII OF LOWERCASE ALPHABETS a-z ==> [97, 122]
ASCII OF WHITESPACE              ==> [32]
ASCII OF SPECIAL CHARACTERS I    ==> [33, 47]
ASCII OF SPECIAL CHARACTERS II   ==> [58, 64]
ASCII OF SPECIAL CHARACTERS III  ==> [91, 96]
ASCII OF SPECIAL CHARACTERS IV   ==> [123, 126]
ASCII OF VOWELS                  ==> [97/65, 101/69, 105/73, 111/79, 117/85]

*/
// below is heavy setup
#define STANDARD
#define ALGO
#define MATH
#define STANDARD_TYPE
#define ALGO_DEBUG

#ifdef STANDARD_TYPE
    using ulli = unsigned long long int;
    using ll = long long;
    using ull = unsigned long long;
    using lli = long long int;
    using ld = long double;
    typedef long int int32;
    typedef unsigned long int uint32;
    typedef long long int int64;
    typedef unsigned long long int  uint64;
#endif

const ll INF = 1e18;
const ll MOD = 1e9 + 7;

#ifdef STANDARD
    #define FAST_IO ios::sync_with_stdio(0), cin.tie(nullptr), cout.tie(nullptr)
    #define LOG(msg) cout << msg << endl
    const char nl = '\n';
#endif 

#ifdef MATH
    #define PI 3.1415926535897932384626433832795
#endif

#ifdef DEBUG
    //#include "algo/debug.h"
    #define debug(...) printf(__VA_ARGS__)
    #define DEBUG_LOG(msg) cout<< #msg << " " << msg << '\n'
#else
    #define debug(...) 42
#endif

#ifdef ALGO
    // thing for make life easier
    #define SORT_ARR(arr) sort(arr.begin(), arr.end())
    // ck stand for "check"
    template<class T> bool ckmin(T&a, T&b) { 
        return b < a ? a = b, 1 : 0; 
    }
    
    template<class T> bool ckmax(T&a, T&b) { 
        return a < b ? a = b, 1 : 0; 
    }

    template<typename T> 
    T read() {
        T x;
        cin>>x;
        return x;
    }
    #define read(type) read<type>()

    ll min(ll a,int b) { 
        return (a < b) ? a : b; 
    }

    ll min(int a,ll b) { 
        return (a < b) ? a : b; 
    }

    ll max(ll a,int b) { 
        return (a > b) ? a : b; 
    }

    ll max(int a,ll b) { 
        return (a > b) ? a : b; 
    }

    ll gcd(ll a,ll b) { 
        return (b == 0) ? a : gcd(b, a % b); 
    }

    ll lcm(ll a,ll b) { 
        return a / gcd(a, b) * b; 
    }

    bool prime(ll a) { 
        if (a == 1) return false; 
        for (ll i = 2; i * i <= a; ++i) 
            if (a % i == 0) return false; 
        return true; 
    }

    template<typename T> void swap(T&a, T&b) {
        T temp = a; 
        a = b; 
        b = temp; 
    }

    string to_upper(string a) { 
        for (char &c : a) 
            if (c >= 'a' && c <= 'z') 
                c -= 'a' - 'A'; 
        return a; 
    }

    string to_lower(string a) { 
        for (char &c : a) 
            if (c >= 'A' && c <= 'Z') 
                c += 'a' - 'A'; 
        return a; 
    }

    template<typename T>
    T findMin(const std::vector<T>& arr) {
        T min_val = arr[0];
        for (const auto& x : arr) {
            if (x < min_val) min_val = x;
        }
        return min_val;
    }

    template<typename T>
    T findMax(const std::vector<T>& arr) {
        T max_val = arr[0];
        for (const auto& x : arr) {
            if (x > max_val) max_val = x;
        }
        return max_val;
    }

    template<typename T>
    int countOccurrences(const std::vector<T>& arr, const T& value) {
        int count = 0;
        for (const auto& x : arr) {
            if (x == value) ++count;
        }
        return count;
    }

    template<typename T>
    void removeDuplicates(std::vector<T>& arr) {
        std::sort(arr.begin(), arr.end());
        auto last = std::unique(arr.begin(), arr.end());
        arr.erase(last, arr.end());
    }

    template<typename T>
    T findMedian(std::vector<T>& arr) {
        std::sort(arr.begin(), arr.end());
        size_t n = arr.size();
        if (n % 2 == 0) {
            return (arr[n / 2 - 1] + arr[n / 2]) / 2;
        }
        return arr[n / 2];
    }

    #define SORT_FIXED_ARR(arr) sort(arr, arr + sizeof(arr) / sizeof(arr[0]))
    #define all(x) (x).begin(), (x).end()

    void yes() { cout<<"YES\n"; }
    void no() { cout<<"NO\n"; }
    // debugging
    #ifdef ALGO_DEBUG
    template<typename T>
    inline std::ostream &operator<<(std::ostream &os, const std::vector<T> &v) {
        os << "["; 
        for (size_t i = 0; i < v.size(); ++i) {
            if (i > 0) os << ", ";
            os << v[i];
        }
        return os << "]";
    }

    template<typename T>
    inline std::ostream &operator<<(std::ostream &os, const std::list<T> &v) {
        os << "["; 
        bool first = true; 
        for (const auto &elem : v) { 
            if (!first) os << ", "; 
            os << elem; 
            first = false; 
        } 
        return os << "]";
    }

    template<typename T1, typename T2>
    inline std::ostream &operator<<(std::ostream &os, const std::pair<T1, T2> &p) {
        return os << "(" << p.first << ", " << p.second << ")";
    }

   template<typename... Ts>
    std::ostream& operator<<(std::ostream& os, const std::tuple<Ts...>& t) {
        os << "(";
        bool first = true;
        // Proper fold expression handling
        ((os << (first ? (first = false, std::get<Ts>(t)) : (", " << std::get<Ts>(t)))), ...);
        return os << ")";
    }



    template<typename T>
    inline std::ostream &operator<<(std::ostream &os, const std::deque<T> &v) {
        os << "["; 
        for (size_t i = 0; i < v.size(); ++i) {
            if (i > 0) os << ", "; 
            os << v[i]; 
        }
        return os << "]";
    }

    template<typename T>
    std::ostream &operator<<(std::ostream &os, std::queue<T> q) {
        os << "["; 
        while (!q.empty()) {
            os << q.front(); 
            q.pop(); 
            if (!q.empty()) os << ", "; 
        }
        return os << "]";
    }

    template<typename T>
    std::ostream &operator<<(std::ostream &os, std::stack<T> s) {
        os << "["; 
        std::vector<T> elems;
        while (!s.empty()) {
            elems.push_back(s.top()); 
            s.pop(); 
        } 
        for (size_t i = elems.size(); i > 0; --i) {
            os << elems[i - 1]; 
            if (i > 1) os << ", "; 
        } 
        return os << "]";
    }

    template<typename T>
    std::ostream &operator<<(std::ostream &os, std::priority_queue<T> pq) {
        os << "["; 
        std::vector<T> elems;
        while (!pq.empty()) {
            elems.push_back(pq.top()); 
            pq.pop(); 
        } 
        for (size_t i = elems.size(); i > 0; --i) {
            os << elems[i - 1]; 
            if (i > 1) os << ", "; 
        } 
        return os << "]";
    }

    #endif
#endif

#ifndef SOL
#define SOL

void solve() {
    LOG("Hello Coder");
}

#endif


int main() {
    FAST_IO;
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    #endif
    solve();
    return 0;
}
