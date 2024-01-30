#include <bt_basics.h>
#include <bt_bst.h>

#include <stdio.h>
#include <stdlib.h>


int main(void) {
    printf("|------------------------------------------------------------|\n");
    printf("|                                                            |\n");
    printf("|                            TEST                            |\n");
    printf("|                                                            |\n");
    printf("|------------------------------------------------------------|\n");
    printf("\n");
    printf("<----- Creation d'un arbre binaire avec comme racine 42 ----->\n");
    bt_p *tree = create_bt_p(42, 0, NULL, NULL, NULL);
    printf("test null:\n");
    if (tree != NULL) {
        printf("OK\n");
    } else {
        printf("ERROR\n");
        return 1;
    }
    printf("test key:\n");
    if (tree->key == 42) {
        printf("OK\n");
    } else {
        printf("ERROR\n");
        return 1;
    }
    printf("\n");
    printf("<----- Insertion en feuille de 21 ; 64 ; 8 ; 24 ; 48 ; 42 ----->\n");
    tree = insert_leaf_bt_p(21, 0, NULL, tree);
    tree = insert_leaf_bt_p(64, 0, NULL, tree);
    tree = insert_leaf_bt_p(8, 0, NULL, tree);
    tree = insert_leaf_bt_p(24, 0, NULL, tree);
    tree = insert_leaf_bt_p(48, 0, NULL, tree);
    printf("test null:\n");
    if (tree != NULL) {
        printf("OK\n");
    } else {
        printf("ERROR\n");
        return 1;
    }
    printf("\n");

    printf("<----- Convertion de bt_p en bt_t ----->\n");
    bt_t *tree_tab = convert_bt_p_to_tab(tree);
    printf("test null:\n");
    if (tree_tab != NULL) {
        printf("OK\n");
    } else {
        printf("ERROR\n");
        return 1;
    }
    printf("test tab_len:\n");
    if (tree_tab->tab_len == 7) {
        printf("OK\n");
    } else {
        printf("ERROR\n");
        return 1;
    }
    printf("test tab_used:\n");
    if (tree_tab->tab_used == 6) {
        printf("OK\n");
    } else {
        printf("ERROR\n");
        return 1;
    }

    int tab_key[7] = {42, 21, 64, 8, 24, 48, -1};
    printf("test keys in tab:\n");
    for (int i = 0; i < 7; i++){
        if (tree_tab->keys[i] != tab_key[i]) {
            printf("ERROR\n");
            return 1;
        }
    }
    printf("OK\n");
    printf("\n");

    printf("<----- Affichage de bt_t ----->\n");
    printf("expected:\n");
    printf("42\n21\n64\n8\n24\n48\n-1\n");
    printf("you:\n");
    printf("---\n");
    print_bt_t(tree_tab);
    printf("---\n");
    printf("\n");

    printf("<----- Affichage preorder ------>\n");
    printf("expected:\n");
    printf("42\n21\n8\n24\n64\n48\n");
    printf("you:\n");
    printf("---\n");
    print_dfs_preorder_bt_p(tree);
    printf("---\n");
    printf("\n");

    printf("<----- Affichage inorder ----->\n");
    printf("expected:\n");
    printf("8\n21\n24\n42\n48\n64\n");
    printf("you:\n");
    printf("---\n");
    print_dfs_inorder_bt_p(tree);
    printf("---\n");
    printf("\n");

    printf("<----- Affichage postorder ----->\n");
    printf("expected:\n");
    printf("8\n24\n21\n48\n64\n42\n");
    printf("you:\n");
    printf("---\n");
    print_dfs_postorder_bt_p(tree);
    printf("---\n");
    printf("\n");

    printf("<----- Hauteur arbre ----->\n");
    printf("test null:\n");
    if (height_bt_p(NULL) == -1) {
        printf("OK\n");
    } else {
        printf("ERROR\n");
        return 1;
    }
    printf("test arbre:\n");
    if (height_bt_p(tree) == 2) {
        printf("OK\n");
    } else {
        printf("ERROR\n");
        return 1;
    }
    printf("\n");

    printf("<----- Affichage hiérarchique ----->\n");
    printf("expected:\n");
    printf("42\n21\n64\n8\n24\n48\n");
    printf("you:\n");
    printf("---\n");
    print_hierarchical_bt_p(tree);
    printf("---\n");
    printf("\n");
    printf("test null:\n");
    printf("expected:\n");
    printf("you:\n");
    printf("---\n");
    print_hierarchical_bt_p(NULL);
    printf("---\n");
    printf("\n");

    printf("<----- Recherche et Affichage dans ABR ----->\n");
    printf("expected:\n");
    printf("42\n21\n24\n");
    printf("you:\n");
    printf("---\n");
    bt_p *tmp = search_verbose_bt_p(24, tree);
    printf("---\n");
    printf("\n");

    printf("<----- Profondeur d'un noeud ------>\n");
    if (deepness_node_bt_p(tmp, tree) == 2) {
        printf("OK\n");
    } else {
        printf("ERROR\n");
        return 1;
    }
    printf("\n");
   
    printf("<----- Suppression d'un noeud ----->\n");
    printf("suppresion d'une feuille:\n");
    tree = remove_node_bt_p(8, tree);
    printf("OK\n");
    printf("affichage après suppression:\n");
    printf("expected\n");
    printf("42\n21\n24\n64\n48\n");
    printf("you:\n");
    printf("---\n");
    print_dfs_preorder_bt_p(tree);
    printf("---\n");
    printf("size après suppression:\n");
    if (size_bt_p(tree) == 5) {
        printf("OK\n");
    } else {
        printf("ERROR\n");
        return 1;
    }
    printf("\n");
    printf("suppression d'un noeud avec un fils:\n");
    tree = remove_node_bt_p(64, tree);
    printf("OK\n");
    printf("affichage après suppression:\n");
    printf("expected\n");
    printf("42\n21\n24\n48\n");
    printf("you:\n");
    printf("---\n");
    print_dfs_preorder_bt_p(tree);
    printf("---\n");
    printf("size après suppression:\n");
    if (size_bt_p(tree) == 4) {
        printf("OK\n");
    } else {
        printf("ERROR\n");
        return 1;
    
    }
    printf("\n");
    printf("suppression d'un noeud avec deux fils (racine):\n");
    tree = remove_node_bt_p(42, tree);
    printf("OK\n");
    printf("affichage après suppression:\n");
    printf("expected\n");
    printf("24\n21\n48\n");
    printf("you:\n");
    printf("---\n");
    print_dfs_preorder_bt_p(tree);
    printf("---\n");
    printf("size après suppression:\n");
    if (size_bt_p(tree) == 3) {
        printf("OK\n");
    } else {
        printf("ERROR\n");
        return 1;
    }
    printf("\n");

    printf("<----- Suppression de l'arbre ----->\n");
    printf("test null:\n");
    int result;
    result = clear_bt_p(NULL);
    if (result == 0) {
        printf("OK\n");
    } else {
        printf("ERROR\n");
        return 1;
    }
    printf("test arbre:\n");
    result = clear_bt_p(tree);
    if (result == 3) {
        printf("OK\n");
    } else {
        printf("ERROR\n");
        return 1;
    }
    printf("nombre d'élément supprimé:\n");
    printf("OK\n");

    free(tree_tab->keys);
    free(tree_tab->elts_size);
    free(tree_tab->elts);
    free(tree_tab);


    printf("\n");
    printf("|------------------------------------------------------------|\n");
    printf("|                                                            |\n");
    printf("|                        FIN DES TEST                        |\n");
    printf("|                                                            |\n");
    printf("|------------------------------------------------------------|\n");


    return 0;
}
