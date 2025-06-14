#include <iostream>
using namespace std;

struct BinaryNode {
    int data;
    BinaryNode* left;
    BinaryNode* right;

    BinaryNode(int val, BinaryNode* l = nullptr, BinaryNode* r = nullptr)
        : data(val), left(l), right(r) {}
};

// Contains
bool contains(BinaryNode* T, int x) {
    if (T == nullptr) return false;
    if (x < T->data) return contains(T->left, x);
    else if (T->data < x) return contains(T->right, x);
    else return true;
}

// Find Minimum
BinaryNode* find_min(BinaryNode* T) {
    if (T == nullptr) return nullptr;
    else if (T->left == nullptr) return T;
    else return find_min(T->left);
}

// Find Maximum
BinaryNode* find_max(BinaryNode* T) {
    if (T == nullptr) return nullptr;
    else if (T->right == nullptr) return T;
    else return find_max(T->right);
}

// Insert
BinaryNode* insert(BinaryNode* T, int x) {
    if (T == nullptr) return new BinaryNode(x);
    if (x < T->data) T->left = insert(T->left, x);
    else if (T->data < x) T->right = insert(T->right, x);
    return T; // x == T->data이면 아무것도 안 함 (중복 허용 안 함)
}

// Remove
BinaryNode* remove(BinaryNode* T, int x) {
    if (T == nullptr) return nullptr;

    if (x < T->data) {
        T->left = remove(T->left, x);
    } else if (T->data < x) {
        T->right = remove(T->right, x);
    } else { // 찾은 노드
        if (T->left != nullptr && T->right != nullptr) {
            BinaryNode* min_node = find_min(T->right);
            T->data = min_node->data;
            T->right = remove(T->right, T->data);
        } else {
            BinaryNode* old_node = T;
            T = (T->left != nullptr) ? T->left : T->right;
            delete old_node;
        }
    }
    return T;
}

// Inorder Traversal (출력용)
void inorder(BinaryNode* T) {
    if (T != nullptr) {
        inorder(T->left);
        cout << T->data << " ";
        inorder(T->right);
    }
}

// 메모리 해제
void delete_tree(BinaryNode* T) {
    if (T != nullptr) {
        delete_tree(T->left);
        delete_tree(T->right);
        delete T;
    }
}

// Example Usage
int main() {
    BinaryNode* root = nullptr;
    root = insert(root, 4);
    root = insert(root, 2);
    root = insert(root, 6);
    root = insert(root, 1);
    root = insert(root, 3);
    root = insert(root, 5);
    root = insert(root, 7);

    cout << "Inorder traversal: ";
    inorder(root);
    cout << endl;

    cout << "Contains 5? " << (contains(root, 5) ? "Yes" : "No") << endl;
    cout << "Minimum value: " << find_min(root)->data << endl;
    cout << "Maximum value: " << find_max(root)->data << endl;

    root = remove(root, 2);
    cout << "After removing 2: ";
    inorder(root);
    cout << endl;

    delete_tree(root);
    return 0;
}
