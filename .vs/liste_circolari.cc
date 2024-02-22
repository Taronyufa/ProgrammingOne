#include <iostream>
#include <cstdlib>
using namespace std;
struct node
{ int elem; node* next;
node(int e, node* t) { elem = e; next = t; };
};
typedef node* nlink;
int main(int argc, char *argv[])
{ int i, N = atoi(argv[1]), M = atoi(argv[2]);
nlink t = new node(1, 0); t->next = t; // creazione lista circolare di 1 nodo
nlink x = t;
for (i = 2; i <= N; i++)
x = (x->next = new node(i, t)); // inserimento i-esimo nodo nella lista
while (x != x->next)
{ // finché il nodo non punta a sé stesso:
for (i = 1; i < M; i++) x = x->next; // scorrimento di M-1 nodi
x->next = x->next->next; // rimozione M-simo nodo
}
cout << x->elem << endl; // output del superstite
}