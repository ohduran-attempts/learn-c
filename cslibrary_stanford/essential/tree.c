typedef struct treenode * Tree;

struct treenode {
  int data;
  Tree smaller, larger;
}
