cmake_minimum_required(VERSION 3.0)

project(HippoMocks)

# ------------------------------------------------------------------------------
# bareflank: start
# ------------------------------------------------------------------------------
# enable_testing()
# add_subdirectory(HippoMocks)
# add_subdirectory(HippoMocksTest)
# ------------------------------------------------------------------------------
# bareflank: end
# ------------------------------------------------------------------------------

# ------------------------------------------------------------------------------
# bareflank: start
# ------------------------------------------------------------------------------
install(FILES ${PROJECT_SOURCE_DIR}/HippoMocks/hippomocks.h DESTINATION include)
install(FILES ${PROJECT_SOURCE_DIR}/HippoMocks/comsupport.h DESTINATION include)
install(DIRECTORY ${PROJECT_SOURCE_DIR}/HippoMocks/detail DESTINATION include)
# ------------------------------------------------------------------------------
# bareflank: end
# ------------------------------------------------------------------------------
