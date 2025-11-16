#include <iostream>
#include <unordered_map>
using namespace std;

class GetFirstUnique {
public:
    GetFirstUnique() {}

    char getUniqueChar(const string &s) {
        unordered_map<char, int> counter;   // sửa: unordered_map<char, int>

        for (char c : s) {
            ++counter[c];
        }

        for (char c : s) {
            if (counter[c] == 1) {
                return c;
            }
        }

        return '\0';   // sửa: '' -> '\0'
    }
};

int main() {
    cout << "Hello, World!" << endl;

    // ❌ sai: new GetFirstUnique() trả về pointer
    // GetFirstUnique uni = new GetFirstUnique();

    // ✔ đúng: tạo object trực tiếp
    GetFirstUnique uni;

    char ans = uni.getUniqueChar("aabccccde");
    cout << ans << endl;

    return 0;
}
