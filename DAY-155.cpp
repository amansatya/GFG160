class Trie {
    struct TrieNode {
        TrieNode* children[26];
        bool endOfWord;
        TrieNode() {
            endOfWord = false;
            for (int i = 0; i < 26; ++i)
                children[i] = nullptr;
        }
    };
    TrieNode* root;
  public:
    Trie() 
    {
        root = new TrieNode();
    }
    void insert(string &word) 
    {
        TrieNode* node = root;
        for (char ch : word) {
            int index = ch - 'a';
            if (node->children[index] == nullptr)
                node->children[index] = new TrieNode();
            node = node->children[index];
        }
        node->endOfWord = true;
    }
    bool search(string &word) 
    {
        TrieNode* node = root;
        for (char ch : word) {
            int index = ch - 'a';
            if (node->children[index] == nullptr)
                return false;
            node = node->children[index];
        }
        return node->endOfWord;
    }
    bool isPrefix(string &word) 
    {
        TrieNode* node = root;
        for (char ch : word) {
            int index = ch - 'a';
            if (node->children[index] == nullptr)
                return false;
            node = node->children[index];
        }
        return true;
    }
};
