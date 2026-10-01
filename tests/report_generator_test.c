#include <stdio.h>
#include <stdlib.h>
#include "report_generator.h"
#include <assert.h>

int main() {
    CFG *cfg = malloc(sizeof(CFG));
    assert(cfg != NULL);
    // Assuming the CFG is correctly set up
    generate_report(cfg);
    free_cfg(cfg);
    return 0;
}
