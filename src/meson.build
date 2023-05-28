flex = find_program('flex')
bison = find_program('bison')

lgen = generator(
  flex,
  output: '@PLAINNAME@.yy.c',
  arguments: ['-o', '@OUTPUT@', '@INPUT@']
)

pgen = generator(
  bison,
  output: ['@BASENAME@.tab.c', '@BASENAME@.tab.h'],
  arguments: ['@INPUT@', '--defines=@OUTPUT1@', '--output=@OUTPUT0@']
)

lfiles = lgen.process('lexer.l')
pfiles = pgen.process('parser.y')

mongoose_sources = files()

mongoose_deps = [
  glib_dep
]

mongoose_lib = static_library('mongoose', mongoose_sources, lfiles, pfiles, dependencies: mongoose_deps)
mongoose_lib_dep = declare_dependency(link_with: mongoose_lib)

executable('mongoose', 'main.c',
  dependencies: mongoose_deps + [mongoose_lib_dep],
  install: true,
)

