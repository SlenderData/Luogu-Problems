cmake_minimum_required(VERSION 3.10)
project(Luogu-Problems)

# 设置C标准
set(CMAKE_C_STANDARD 99)

# 指定编译器选项（可选）
add_compile_options(-Wall -Wextra -pedantic)

# 为每个程序添加一个可执行文件
add_executable(P1000 Main/P1000.c)
add_executable(P1001 Main/P1001.c)
add_executable(P1035 Main/P1035.c)
add_executable(P1046 Main/P1046.c)
add_executable(P1047 Main/P1047.c)
add_executable(P1051 Main/P1051.c)
add_executable(P1055 Main/P1055.c)
add_executable(P1421 Main/P1421.c)
add_executable(P1422 Main/P1422.c)
add_executable(P1423 Main/P1423.c)
add_executable(P1634 Main/P1634.c)

add_executable(AT_abc001_1 AtCoder/AT_abc001_1.c)

# 如果需要链接到库，使用target_link_libraries(可执行文件名 库名)
# 例如：target_link_libraries(P1000 m) # 链接数学库
