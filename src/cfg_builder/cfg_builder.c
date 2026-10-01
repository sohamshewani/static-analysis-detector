#include "cfg_builder.h"
#include "ast.h"

CFG* build_cfg(const char *code) {
    // Implementation of CFG building logic
    CFG *cfg = malloc(sizeof(CFG));
    if (!cfg) {
        perror("Failed to allocate memory for CFG");
        return NULL;
    }
    cfg->node_count = 0;
    cfg->nodes = NULL;
    // Code parsing and AST creation logic here
    return cfg;
}

void print_cfg(CFG *cfg) {
    // Print CFG logic
}

void free_cfg(CFG *cfg) {
    // Free memory allocated for CFG
    if (cfg) {
        for (int i = 0; i < cfg->node_count; i++) {
            free_ast(cfg->nodes[i]);
        }
        free(cfg->nodes);
        free(cfg);
    }
}
