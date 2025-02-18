# client/CMakeLists.txt
add_executable(MystaviaClient main_client.cpp)

# Om klienten behöver länkas mot gemensam kod:
target_include_directories(MystaviaClient PRIVATE ../shared/include)
target_link_libraries(MystaviaClient PRIVATE MystaviaShared)
