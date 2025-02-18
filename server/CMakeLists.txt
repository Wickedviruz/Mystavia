# server/CMakeLists.txt
add_executable(MystaviaServer main_server.cpp)

target_include_directories(MystaviaServer PRIVATE ../shared/include)
target_link_libraries(MystaviaServer PRIVATE MystaviaShared)
