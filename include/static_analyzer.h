#ifndef STATIC_ANALYZER_H
#define STATIC_ANALYZER_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ast.h"

// Function Prototypes
void analyze_cfg(CFG *cfg);
void report_dead_code(CFG *cfg);
void report_memory_leaks(CFG *cfg);

#endif // STATIC_ANALYZER_H