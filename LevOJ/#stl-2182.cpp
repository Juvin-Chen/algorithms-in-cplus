#include <iostream>
#include <list>
#include <string>

using namespace std;

int main() {
    char c;
    list<char> L;
    while (cin >> c) {
        L.push_back(c);
    }

    // 操作指令的数量
    int num;
    cin >> num;

    // 初始光标的位置
    int index = 0;

    while (num--) {
        cin >> c;
        switch (c) {
        case '>': {
            if (index != L.size()) {
                index++;
            }
            break;
        }
        case '<': {
            if (index != 0) {
                index--;
            }
            break;
        }
        case 'I': {
            cin >> c;
            // 迭代器（光标）
            list<char>::iterator it = L.begin();
            advance(it, index); // 把it向后移动 index-1 步（核心！）
            L.insert(it, c);
            break;
        }
        case 'D ': {
            if (index == 0) {
                continue;
            }
            L.erase()
        }
        }
    }
    return 0;
}