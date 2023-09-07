# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "/Users/fadysamir/esp/ESP8266_RTOS_SDK/tools/kconfig"
  "/Users/fadysamir/esp/esp-idf/examples/get-started/esp_project/cmake-build-debug/kconfig_bin"
  "/Users/fadysamir/esp/esp-idf/examples/get-started/esp_project/cmake-build-debug/mconf-idf-prefix"
  "/Users/fadysamir/esp/esp-idf/examples/get-started/esp_project/cmake-build-debug/mconf-idf-prefix/tmp"
  "/Users/fadysamir/esp/esp-idf/examples/get-started/esp_project/cmake-build-debug/mconf-idf-prefix/src/mconf-idf-stamp"
  "/Users/fadysamir/esp/esp-idf/examples/get-started/esp_project/cmake-build-debug/mconf-idf-prefix/src"
  "/Users/fadysamir/esp/esp-idf/examples/get-started/esp_project/cmake-build-debug/mconf-idf-prefix/src/mconf-idf-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/Users/fadysamir/esp/esp-idf/examples/get-started/esp_project/cmake-build-debug/mconf-idf-prefix/src/mconf-idf-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "/Users/fadysamir/esp/esp-idf/examples/get-started/esp_project/cmake-build-debug/mconf-idf-prefix/src/mconf-idf-stamp${cfgdir}") # cfgdir has leading slash
endif()
