# mt_cmake

- Tips
  - debug cmake
    - cmake supported log level string
      - FATAL_ERROR
      - SEND_ERROR
      - WARNING
      - AUTHOR_WARNING
      - DEPRECATION
      - NOTICE
      - STATUS
      - VERBOSE
      - DEBUG
      - TRACE
    - cmake --log-level=VERBOSE
    - list(APPEND CMAKE_MESSAGE_INDENT "  ")
    - list(APPEND CMAKE_MESSAGE_CONTEXT some_context)
      - need call cmake with **--log-context**
  - Change compiler
    - -DCMAKE_CXX_COMPILER=/usr/bin/g++-10
  - passing flags to compiler
    - -DCMAKE_CXX_FLAGS:STRING="-Wall -Werror"