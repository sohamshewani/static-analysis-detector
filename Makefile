CC=gcc
CFLAGS=-Wall -Wextra -std=gnu99
OBJS=src/cfg_builder/cfg_builder.o src/static_analyzer/static_analyzer.o src/report_generator/report_generator.o

all: static-analysis-detector

static-analysis-detector: $(OBJS)	gcc $(CFLAGS) -o $@ $^ -lm

src/cfg_builder/cfg_builder.o: src/cfg_builder/cfg_builder.c include/ast.h include/config.h
	$(CC) $(CFLAGS) -c $< -o $@

src/static_analyzer/static_analyzer.o: src/static_analyzer/static_analyzer.c include/ast.h include/cfg_builder.h include/static_analyzer.h include/config.h
	$(CC) $(CFLAGS) -c $< -o $@

src/report_generator/report_generator.o: src/report_generator/report_generator.c include/ast.h include/static_analyzer.h include/config.h
	$(CC) $(CFLAGS) -c $< -o $@

check-cfg_builder: tests/cfg_builder_test
	./$<

check-static_analyzer: tests/static_analyzer_test
	./$<

check-report_generator: tests/report_generator_test
	./$<

clean:	gcc -clean -R .
