

class Heap
{
private:
    int *a;
    int m;
    int n;
public:
    Heap();

    void build_maxheap(int *a,int n);
    void max_heap(int *a, int m, int n);
};
