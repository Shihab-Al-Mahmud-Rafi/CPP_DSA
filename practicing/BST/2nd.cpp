#include <algorithm>
#include <iostream>
#include <queue>
#include <stdexcept>

class BinarySearchTree {
private:
    struct Node {
        int data;
        Node* left;
        Node* right;

        explicit Node(int value) : data(value), left(nullptr), right(nullptr) {}
    };

    Node* root;

    Node* insertLogic(Node* node, int value) {
        if (node == nullptr) {
            return new Node(value);
        }
        if (value < node->data) {
            node->left = insertLogic(node->left, value);
        } else if (value > node->data) {
            node->right = insertLogic(node->right, value);
        }
        // Duplicates are ignored; change `else if` to `else` to allow them on the right.
        return node;
    }

    Node* findMinNode(Node* node) const {
        while (node != nullptr && node->left != nullptr) {
            node = node->left;
        }
        return node;
    }

    Node* findMaxNode(Node* node) const {
        while (node != nullptr && node->right != nullptr) {
            node = node->right;
        }
        return node;
    }

    Node* removeLogic(Node* node, int value) {
        if (node == nullptr) {
            return nullptr;
        }

        if (value < node->data) {
            node->left = removeLogic(node->left, value);
        } else if (value > node->data) {
            node->right = removeLogic(node->right, value);
        } else {
            // Case 1 & 2: Leaf node or single child
            if (node->left == nullptr) {
                Node* rightChild = node->right;
                delete node;
                return rightChild;
            }
            if (node->right == nullptr) {
                Node* leftChild = node->left;
                delete node;
                return leftChild;
            }

            // Case 3: Two children (replace with inorder successor)
            Node* successor = findMinNode(node->right);
            node->data = successor->data;
            node->right = removeLogic(node->right, successor->data);
        }
        return node;
    }

    bool searchLogic(Node* node, int target) const {
        if (node == nullptr) {
            return false;
        }
        if (node->data == target) {
            return true;
        }
        return (target < node->data)
            ? searchLogic(node->left, target)
            : searchLogic(node->right, target);
    }

    void preOrderLogic(Node* node) const {
        if (node == nullptr) return;
        std::cout << node->data << " ";
        preOrderLogic(node->left);
        preOrderLogic(node->right);
    }

    void inOrderLogic(Node* node) const {
        if (node == nullptr) return;
        inOrderLogic(node->left);
        std::cout << node->data << " ";
        inOrderLogic(node->right);
    }

    void postOrderLogic(Node* node) const {
        if (node == nullptr) return;
        postOrderLogic(node->left);
        postOrderLogic(node->right);
        std::cout << node->data << " ";
    }

    int heightLogic(Node* node) const {
        if (node == nullptr) return -1; // Empty tree height is -1, single node is 0
        return 1 + std::max(heightLogic(node->left), heightLogic(node->right));
    }

    int sizeLogic(Node* node) const {
        if (node == nullptr) return 0;
        return 1 + sizeLogic(node->left) + sizeLogic(node->right);
    }

    void clearLogic(Node* node) {
        if (node == nullptr) return;
        clearLogic(node->left);
        clearLogic(node->right);
        delete node;
    }

public:
    BinarySearchTree() : root(nullptr) {}

    ~BinarySearchTree() {
        clear();
    }

    // Prevent shallow copies that would cause double-free errors
    BinarySearchTree(const BinarySearchTree&) = delete;
    BinarySearchTree& operator=(const BinarySearchTree&) = delete;

    void insert(int value) {
        root = insertLogic(root, value);
    }

    void remove(int value) {
        root = removeLogic(root, value);
    }

    bool search(int value) const {
        return searchLogic(root, value);
    }

    int findMin() const {
        if (root == nullptr) {
            throw std::runtime_error("Tree is empty");
        }
        return findMinNode(root)->data;
    }

    int findMax() const {
        if (root == nullptr) {
            throw std::runtime_error("Tree is empty");
        }
        return findMaxNode(root)->data;
    }

    void preorder() const {
        preOrderLogic(root);
        std::cout << '\n';
    }

    void inorder() const {
        inOrderLogic(root);
        std::cout << '\n';
    }

    void postorder() const {
        postOrderLogic(root);
        std::cout << '\n';
    }

    void levelOrder() const {
        if (root == nullptr) return;

        std::queue<Node*> q;
        q.push(root);

        while (!q.empty()) {
            Node* current = q.front();
            q.pop();

            std::cout << current->data << " ";
            if (current->left != nullptr) q.push(current->left);
            if (current->right != nullptr) q.push(current->right);
        }
        std::cout << '\n';
    }

    int height() const {
        return heightLogic(root);
    }

    int size() const {
        return sizeLogic(root);
    }

    bool isEmpty() const {
        return root == nullptr;
    }

    void clear() {
        clearLogic(root);
        root = nullptr;
    }
};

int main() {
    BinarySearchTree bst;
    for (int val : {50, 30, 70, 20, 40, 60, 80}) {
        bst.insert(val);
    }

    std::cout << "Inorder (sorted): ";
    bst.inorder();

    std::cout << "Preorder:         ";
    bst.preorder();

    std::cout << "Postorder:        ";
    bst.postorder();

    std::cout << "Level order:      ";
    bst.levelOrder();

    std::cout << "Min: " << bst.findMin() << ", Max: " << bst.findMax() << '\n';
    std::cout << "Height: " << bst.height() << ", Size: " << bst.size() << '\n';
    std::cout << "Contains 40? " << (bst.search(40) ? "Yes" : "No") << '\n';

    bst.remove(50); // Remove root (two-children case)
    std::cout << "After removing 50: ";
    bst.inorder();

    return 0;
}