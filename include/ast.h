#ifndef AST_H
#define AST_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Abstract Syntax Tree (AST) Node structure
typedef struct ast_node {
    int type;
    char *value;
    struct ast_node *child;
    struct ast_node *sibling;
} ASTNode;

// Function Prototypes
ASTNode* create_ast_node(int type, const char *value);
void print_ast(ASTNode *node);
void free_ast(ASTNode *node);

#endif // AST_H