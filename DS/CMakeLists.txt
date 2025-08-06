file(GLOB_RECURSE ALL_FILES "*.cpp")
message(STATUS "Found source files: ${ALL_FILES}")

foreach(source ${ALL_FILES})
    get_filename_component(source_name ${source} NAME_WE)
    add_executable(${source_name} ${source})
    message(STATUS "Added executable: ${source_name}")
endforeach(source )