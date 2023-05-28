project('mongoose', ['c'],
          version: '0.1.0',
    meson_version: '>= 0.62.0',
  default_options: [ 'warning_level=2', 'werror=true', 'cpp_std=gnu++2a', ],
)

glib_dep = dependency('glib-2.0')

subdir('src')

subdir('test')