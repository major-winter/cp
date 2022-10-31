#include <bits/stdc++.h>
using namespace std;

class BaseHeap {
  virtual void add_node(int) = 0;
  virtual int delete_node() = 0;
  virtual void build_min_heap() = 0;
  virtual void min_heapify(int) = 0;
};

class MinHeap : public BaseHeap {
  public:
    MinHeap(vector<int>h) {
      H = h;
    }
    void add_node(int node){};

    int delete_node() {
      int el = H[0];
      H.erase(H.begin());
      return el;
    };
    void min_heapify(int node_index) {
      // assume left and right child of the node_index are min_heap
      // node_index can be 0
      int left_child = node_index * 2 + 1;
      int right_child = node_index * 2 + 2;
      int smallest_index = node_index;
      if (left_child < H.size() && H[left_child] <= H[node_index])
        smallest_index = left_child;
      if (right_child < H.size() && H[right_child] < H[smallest_index])
        smallest_index = right_child;
      if (smallest_index != node_index) {
        swap(H[node_index], H[smallest_index]);
        min_heapify(smallest_index);
      }
    };
    void min_heapify(int node_index, int r) {
      // assume left and right child of the node_index are min_heap
      // node_index can be 0
      int left_child =  node_index * 2 + 1;
      int right_child = node_index * 2 + 2;
      int smallest_index = node_index;
      if (left_child <= r && H[left_child] <= H[node_index])
        smallest_index = left_child;
      if (right_child <= r && H[right_child] < H[smallest_index])
        smallest_index = right_child;
      if (smallest_index != node_index) {
        cout << smallest_index;
        swap(H[node_index], H[smallest_index]);
        min_heapify(smallest_index);
      }
    };
    void build_min_heap() {
      int end = H.size() / 2;
      for (int i = end; i >= 0; i--){
        min_heapify(i);
      }
    };

    void heap_sort(int l, int r) {
      build_min_heap();
      for (int i = r; i >= 2; i--) {
        swap(H[0], H[i]);
        min_heapify(0, i - 1);
      }
    }
    void print() {
      for (auto &it : H)
        cout << it << ' ';
      cout << '\n';
    }

  private:
    vector<int> H;

};

int main() {
  vector<int> list = {2,3,5,1,4};
  MinHeap h(list);
  h.heap_sort(0, list.size() - 1);
  // h.print();
  return 0;
}
