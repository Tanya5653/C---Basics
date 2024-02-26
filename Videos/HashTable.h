template<typename T>
class Node{
    public:
    string key;
    T value;
    Node*next;

    Node(string key,T value){
        this->key=key;
        this->value=value;
        next = NULL;
    }
};
class HashTable{
    Node<T> ** table;
    int cs;
    int ts;

    HashFunc(string key){
        int idx=0;
        int power = 1;
        for (auto ch:key){
            idx = (idx + ch*power)%ts;
            power =(power*29)%ts;
        }
        return idx;
    }
public:
    HashTable(int default_size =7);
    cs = 0;
    ts = default_size;
    table = new Node<T>*[ts];
    for(int i=0;i<ts;i++){
        table[i] = NULL;
    }
};
void insert(string key,T value){
    int idx= HashFunc(key);
    Node<T> * n = new Node<T>(key,value);
    n->next = table[idx];
    table[idx]=n;
}