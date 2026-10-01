#include <stdio.h>
#include <stdlib.h>
#include "static_analyzer.h"
#include <assert.h>

int main() {
    CFG *cfg = malloc(sizeof(CFG));
    assert(cfg != NULL);
    // Assuming the CFG is correctly set up
    analyze_cfg(cfg);
    report_dead_code(cfg);
    report_memory_leaks(cfg);
    free_cfg(cfg);
    return 0;
}
