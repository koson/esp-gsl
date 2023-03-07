# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "D:/GitHubRepos/__ESP32_GSL/test-esp-gsl/components/esp-gsl/gsl_2_7"
  "D:/GitHubRepos/__ESP32_GSL/test-esp-gsl/components/esp-gsl/src/gsl_build-build"
  "D:/GitHubRepos/__ESP32_GSL/test-esp-gsl/components/esp-gsl"
  "D:/GitHubRepos/__ESP32_GSL/test-esp-gsl/components/esp-gsl/build/tmp"
  "D:/GitHubRepos/__ESP32_GSL/test-esp-gsl/components/esp-gsl/build/stamp"
  "D:/GitHubRepos/__ESP32_GSL/test-esp-gsl/components/esp-gsl/src"
  "D:/GitHubRepos/__ESP32_GSL/test-esp-gsl/components/esp-gsl/build/stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "D:/GitHubRepos/__ESP32_GSL/test-esp-gsl/components/esp-gsl/build/stamp/${subDir}")
endforeach()
