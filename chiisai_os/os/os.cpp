#include "os/os.hpp"
#include "os/output.hpp"
#include "os/input.hpp"
#include "os/error.hpp"
#include "os/process.hpp"
#include "os/chrono.hpp"

void os::init() {
  output::init();
  input::init();
  error::init();
  chrono::init();
  process::init();
}

int main() {
  os::init();
}