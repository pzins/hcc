// RUN: %amp_device -D__GPU__ %s -m32 -emit-llvm -c -S -O2 -o %t.ll && mkdir -p %t
// RUN: %clamp-device %t.ll %t/kernel.cl
// RUN: pushd %t && %embed_kernel kernel.cl %t/kernel.o && popd
// RUN: %cxxamp %link %t/kernel.o %s -o %t.out && %t.out
#include <amp.h>
#include <amp_short_vectors.h>

using namespace concurrency;
using namespace concurrency::graphics;

int main(void) {
  // Bug of Microsoft's Implementation
  
  // float_2 operator=(const float_2& other) restrict(cpu, amp);
  {
    float_2 a(1.0f);
    float_2 b = a;
    assert(a == b);
  }

  // Unary Negation

  // float_2 operator-() const restrict(cpu, amp);
  {
    float a = 2.0f;
    float b = -a;
    float_2 c(a), d(b);
    float_2 e(-c);
    assert(d == e);
  }

  return 0;
}
