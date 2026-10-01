#ifndef CFG_BUILDER_H
#define CFG_BUILDER_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ast.h"

// Control Flow Graph (CFG) structure
typedef struct cfg {
    int node_count;
    ASTNode **nodes;
} CFG;

// Function Prototypes
CFG* build_cfg(const char *code);
void print_cfg(CFG *cfg);
void free_cfg(CFG *cfg);

#endif // CFG_BUILDER_H