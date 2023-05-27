mongoose_sources = [
  'main.cpp',
]

boost_dep = dependency('boost')
mongoose_deps = [
  boost_dep
]

subdir('Mongoose')

executable('mongoose', mongoose_sources,
  dependencies: mongoose_deps,
  include_directories: include_directories('.'),
  install: true,
)

