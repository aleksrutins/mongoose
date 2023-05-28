test_exe = executable('mongoose-test',
    ['parser_test.c'],
    dependencies : mongoose_deps + [mongoose_lib_dep],
    install: false
)

test('tests', test_exe)