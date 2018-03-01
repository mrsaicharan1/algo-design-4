#include <stdio.h>

void main()
{
    int  no, i, j, c, root, temp;

    printf("\n Enter no of elements :");
    scanf("%d", &no);
    int tree[no];
    printf("\n Enter the nos : ");
    for (i = 0; i < no; i++)
       scanf("%d", &tree[i]);
    for (i = 1; i < no; i++)
    {
        c = i;
        do
        {
            root = (c - 1) / 2;
            if (tree[root] < tree[c])
            {
                printf("node %d with value %d is less than node %d with value %d,therefore we swap\n",root,tree[root],c,tree[c]);
                temp = tree[root];
                tree[root] = tree[c];
                tree[c] = temp;
            }
            c = root;
        } while (c != 0);
    }

    for (i = 0; i < no; i++){
       printf("\t %d", tree[i]);

}
}
