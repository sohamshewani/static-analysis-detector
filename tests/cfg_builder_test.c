#include <stdio.h>
#include <stdlib.h>
#include "cfg_builder.h"
#include <assert.h>

int main() {
    const char *code = "#include <stdio.h>\nint main() {\n    int a = 5;\n    return 0;\n}";
    CFG *cfg = build_cfg(code);
    assert(cfg != NULL);
    free_cfg(cfg);
    return 0;
}
