# cmake_minimum_required(VERSION 3.16)

# project(QtHTMLtoWEB LANGUAGES CXX)

# # Включаем автообработку UI, MOC и ресурсов
# set(CMAKE_AUTOUIC ON)
# set(CMAKE_AUTOMOC ON)
# set(CMAKE_AUTORCC ON)

# # Устанавливаем стандарт C++
# set(CMAKE_CXX_STANDARD 17)
# set(CMAKE_CXX_STANDARD_REQUIRED ON)

# # Указываем путь к Qt6 (здесь должен быть твой путь к Qt6)
# set(CMAKE_PREFIX_PATH "/home/linad/Qt/6.10.2/gcc_64/lib/cmake/Qt6")

# # Ищем необходимые компоненты только для Qt6
# find_package(Qt6 REQUIRED COMPONENTS Core Widgets WebEngineWidgets)

# # Создаем исполнимый файл из основного исходного файла
# add_executable(QtHTMLtoWEB
#     main.cpp
# )

# # Линкуем с библиотеками Qt6
# target_link_libraries(QtHTMLtoWEB
#     PRIVATE
#     Qt6::Core
#     Qt6::Widgets
#     Qt6::WebEngineWidgets
# )

# # Указываем установочные директории для библиотеки
# include(GNUInstallDirs)
# install(TARGETS QtHTMLtoWEB
#     LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
#     RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
# )
cmake_minimum_required(VERSION 3.16)

project(QtHTMLtoWEB LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

find_package(Qt5 REQUIRED COMPONENTS Core Widgets WebEngineWidgets)

add_executable(QtHTMLtoWEB
    main.cpp
)

target_link_libraries(QtHTMLtoWEB
    PRIVATE
    Qt5::Core
    Qt5::Widgets
    Qt5::WebEngineWidgets
)
