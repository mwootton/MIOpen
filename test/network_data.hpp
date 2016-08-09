
#include <mlopen/tensor.hpp>

template<class T, class F>
void visit_network(F f, int n=1)
{
    mlopenDataType_t t = mlopenFloat; // TODO: Compute this from T
    f(mlopen::TensorDescriptor(t, { (100 / n), 3,    32,  32  }), mlopen::TensorDescriptor(t, { (32 / n),  3,    5,  5  }));
    f(mlopen::TensorDescriptor(t, { (100 / n), 32,   16,  16  }), mlopen::TensorDescriptor(t, { (32 / n),  32,   5,  5  }));
    f(mlopen::TensorDescriptor(t, { (100 / n), 32,   8,   8   }), mlopen::TensorDescriptor(t, { (64 / n),  32,   5,  5  }));
    f(mlopen::TensorDescriptor(t, { (256 / n), 3,    227, 227 }), mlopen::TensorDescriptor(t, { (96 / n),  3,    11, 11 }));
    f(mlopen::TensorDescriptor(t, { (256 / n), 96,   27,  27  }), mlopen::TensorDescriptor(t, { (256 / n), 96,   5,  5  }));
    f(mlopen::TensorDescriptor(t, { (256 / n), 256,  13,  13  }), mlopen::TensorDescriptor(t, { (384 / n), 256,  3,  3  }));
    f(mlopen::TensorDescriptor(t, { (256 / n), 384,  13,  13  }), mlopen::TensorDescriptor(t, { (384 / n), 384,  3,  3  }));
    f(mlopen::TensorDescriptor(t, { (256 / n), 384,  13,  13  }), mlopen::TensorDescriptor(t, { (256 / n), 384,  3,  3  }));
    f(mlopen::TensorDescriptor(t, { (32 / n),  3,    224, 224 }), mlopen::TensorDescriptor(t, { (64 / n),  3,    7,  7  }));
    f(mlopen::TensorDescriptor(t, { (32 / n),  64,   56,  56  }), mlopen::TensorDescriptor(t, { (64 / n),  64,   1,  1  }));
    f(mlopen::TensorDescriptor(t, { (32 / n),  64,   56,  56  }), mlopen::TensorDescriptor(t, { (192 / n), 64,   3,  3  }));
    f(mlopen::TensorDescriptor(t, { (32 / n),  192,  28,  28  }), mlopen::TensorDescriptor(t, { (64 / n),  192,  1,  1  }));
    f(mlopen::TensorDescriptor(t, { (32 / n),  192,  28,  28  }), mlopen::TensorDescriptor(t, { (96 / n),  192,  1,  1  }));
    f(mlopen::TensorDescriptor(t, { (32 / n),  96,   28,  28  }), mlopen::TensorDescriptor(t, { (128 / n), 96,   3,  3  }));
    f(mlopen::TensorDescriptor(t, { (32 / n),  192,  28,  28  }), mlopen::TensorDescriptor(t, { (16 / n),  192,  1,  1  }));
    f(mlopen::TensorDescriptor(t, { (32 / n),  16,   28,  28  }), mlopen::TensorDescriptor(t, { (32 / n),  16,   5,  5  }));
    f(mlopen::TensorDescriptor(t, { (32 / n),  192,  28,  28  }), mlopen::TensorDescriptor(t, { (32 / n),  192,  1,  1  }));
    f(mlopen::TensorDescriptor(t, { (32 / n),  256,  28,  28  }), mlopen::TensorDescriptor(t, { (128 / n), 256,  1,  1  }));
    f(mlopen::TensorDescriptor(t, { (32 / n),  256,  28,  28  }), mlopen::TensorDescriptor(t, { (128 / n), 256,  1,  1  }));
    f(mlopen::TensorDescriptor(t, { (32 / n),  128,  28,  28  }), mlopen::TensorDescriptor(t, { (192 / n), 128,  3,  3  }));
    f(mlopen::TensorDescriptor(t, { (32 / n),  256,  28,  28  }), mlopen::TensorDescriptor(t, { (32 / n),  256,  1,  1  }));
    f(mlopen::TensorDescriptor(t, { (32 / n),  32,   28,  28  }), mlopen::TensorDescriptor(t, { (96 / n),  32,   5,  5  }));
    f(mlopen::TensorDescriptor(t, { (32 / n),  256,  28,  28  }), mlopen::TensorDescriptor(t, { (64 / n),  256,  1,  1  }));
    f(mlopen::TensorDescriptor(t, { (32 / n),  480,  14,  14  }), mlopen::TensorDescriptor(t, { (192 / n), 480,  1,  1  }));
    f(mlopen::TensorDescriptor(t, { (32 / n),  480,  14,  14  }), mlopen::TensorDescriptor(t, { (96 / n),  480,  1,  1  }));
    f(mlopen::TensorDescriptor(t, { (32 / n),  96,   14,  14  }), mlopen::TensorDescriptor(t, { (208 / n), 96,   3,  3  }));
    f(mlopen::TensorDescriptor(t, { (32 / n),  480,  14,  14  }), mlopen::TensorDescriptor(t, { (16 / n),  480,  1,  1  }));
    f(mlopen::TensorDescriptor(t, { (32 / n),  16,   14,  14  }), mlopen::TensorDescriptor(t, { (48 / n),  16,   5,  5  }));
    f(mlopen::TensorDescriptor(t, { (32 / n),  480,  14,  14  }), mlopen::TensorDescriptor(t, { (64 / n),  480,  1,  1  }));
    f(mlopen::TensorDescriptor(t, { (32 / n),  512,  4,   4   }), mlopen::TensorDescriptor(t, { (128 / n), 512,  1,  1  }));
    f(mlopen::TensorDescriptor(t, { (32 / n),  512,  14,  14  }), mlopen::TensorDescriptor(t, { (160 / n), 512,  1,  1  }));
    f(mlopen::TensorDescriptor(t, { (32 / n),  512,  14,  14  }), mlopen::TensorDescriptor(t, { (112 / n), 512,  1,  1  }));
    f(mlopen::TensorDescriptor(t, { (32 / n),  112,  14,  14  }), mlopen::TensorDescriptor(t, { (224 / n), 112,  3,  3  }));
    f(mlopen::TensorDescriptor(t, { (32 / n),  512,  14,  14  }), mlopen::TensorDescriptor(t, { (24 / n),  512,  1,  1  }));
    f(mlopen::TensorDescriptor(t, { (32 / n),  24,   14,  14  }), mlopen::TensorDescriptor(t, { (64 / n),  24,   5,  5  }));
    f(mlopen::TensorDescriptor(t, { (32 / n),  512,  14,  14  }), mlopen::TensorDescriptor(t, { (64 / n),  512,  1,  1  }));
    f(mlopen::TensorDescriptor(t, { (32 / n),  512,  14,  14  }), mlopen::TensorDescriptor(t, { (128 / n), 512,  1,  1  }));
    f(mlopen::TensorDescriptor(t, { (32 / n),  512,  14,  14  }), mlopen::TensorDescriptor(t, { (128 / n), 512,  1,  1  }));
    f(mlopen::TensorDescriptor(t, { (32 / n),  128,  14,  14  }), mlopen::TensorDescriptor(t, { (256 / n), 128,  3,  3  }));
    f(mlopen::TensorDescriptor(t, { (32 / n),  512,  14,  14  }), mlopen::TensorDescriptor(t, { (24 / n),  512,  1,  1  }));
    f(mlopen::TensorDescriptor(t, { (32 / n),  24,   14,  14  }), mlopen::TensorDescriptor(t, { (64 / n),  24,   5,  5  }));
    f(mlopen::TensorDescriptor(t, { (32 / n),  512,  14,  14  }), mlopen::TensorDescriptor(t, { (64 / n),  512,  1,  1  }));
    f(mlopen::TensorDescriptor(t, { (32 / n),  512,  14,  14  }), mlopen::TensorDescriptor(t, { (112 / n), 512,  1,  1  }));
    f(mlopen::TensorDescriptor(t, { (32 / n),  512,  14,  14  }), mlopen::TensorDescriptor(t, { (144 / n), 512,  1,  1  }));
    f(mlopen::TensorDescriptor(t, { (32 / n),  144,  14,  14  }), mlopen::TensorDescriptor(t, { (288 / n), 144,  3,  3  }));
    f(mlopen::TensorDescriptor(t, { (32 / n),  512,  14,  14  }), mlopen::TensorDescriptor(t, { (32 / n),  512,  1,  1  }));
    f(mlopen::TensorDescriptor(t, { (32 / n),  32,   14,  14  }), mlopen::TensorDescriptor(t, { (64 / n),  32,   5,  5  }));
    f(mlopen::TensorDescriptor(t, { (32 / n),  512,  14,  14  }), mlopen::TensorDescriptor(t, { (64 / n),  512,  1,  1  }));
    f(mlopen::TensorDescriptor(t, { (32 / n),  528,  4,   4   }), mlopen::TensorDescriptor(t, { (128 / n), 528,  1,  1  }));
    f(mlopen::TensorDescriptor(t, { (32 / n),  528,  14,  14  }), mlopen::TensorDescriptor(t, { (256 / n), 528,  1,  1  }));
    f(mlopen::TensorDescriptor(t, { (32 / n),  528,  14,  14  }), mlopen::TensorDescriptor(t, { (160 / n), 528,  1,  1  }));
    f(mlopen::TensorDescriptor(t, { (32 / n),  160,  14,  14  }), mlopen::TensorDescriptor(t, { (320 / n), 160,  3,  3  }));
    f(mlopen::TensorDescriptor(t, { (32 / n),  528,  14,  14  }), mlopen::TensorDescriptor(t, { (32 / n),  528,  1,  1  }));
    f(mlopen::TensorDescriptor(t, { (32 / n),  32,   14,  14  }), mlopen::TensorDescriptor(t, { (128 / n), 32,   5,  5  }));
    f(mlopen::TensorDescriptor(t, { (32 / n),  528,  14,  14  }), mlopen::TensorDescriptor(t, { (128 / n), 528,  1,  1  }));
    f(mlopen::TensorDescriptor(t, { (32 / n),  832,  7,   7   }), mlopen::TensorDescriptor(t, { (256 / n), 832,  1,  1  }));
    f(mlopen::TensorDescriptor(t, { (32 / n),  832,  7,   7   }), mlopen::TensorDescriptor(t, { (160 / n), 832,  1,  1  }));
    f(mlopen::TensorDescriptor(t, { (32 / n),  160,  7,   7   }), mlopen::TensorDescriptor(t, { (320 / n), 160,  3,  3  }));
    f(mlopen::TensorDescriptor(t, { (32 / n),  832,  7,   7   }), mlopen::TensorDescriptor(t, { (32 / n),  832,  1,  1  }));
    f(mlopen::TensorDescriptor(t, { (32 / n),  32,   7,   7   }), mlopen::TensorDescriptor(t, { (128 / n), 32,   5,  5  }));
    f(mlopen::TensorDescriptor(t, { (32 / n),  832,  7,   7   }), mlopen::TensorDescriptor(t, { (128 / n), 832,  1,  1  }));
    f(mlopen::TensorDescriptor(t, { (32 / n),  832,  7,   7   }), mlopen::TensorDescriptor(t, { (384 / n), 832,  1,  1  }));
    f(mlopen::TensorDescriptor(t, { (32 / n),  832,  7,   7   }), mlopen::TensorDescriptor(t, { (192 / n), 832,  1,  1  }));
    f(mlopen::TensorDescriptor(t, { (32 / n),  192,  7,   7   }), mlopen::TensorDescriptor(t, { (384 / n), 192,  3,  3  }));
    f(mlopen::TensorDescriptor(t, { (32 / n),  832,  7,   7   }), mlopen::TensorDescriptor(t, { (48 / n),  832,  1,  1  }));
    f(mlopen::TensorDescriptor(t, { (32 / n),  48,   7,   7   }), mlopen::TensorDescriptor(t, { (128 / n), 48,   5,  5  }));
    f(mlopen::TensorDescriptor(t, { (32 / n),  832,  7,   7   }), mlopen::TensorDescriptor(t, { (128 / n), 832,  1,  1  }));
    f(mlopen::TensorDescriptor(t, { (128 / n), 3,    231, 231 }), mlopen::TensorDescriptor(t, { (96 / n),  3,    11, 11 }));
    f(mlopen::TensorDescriptor(t, { (128 / n), 96,   28,  28  }), mlopen::TensorDescriptor(t, { (256 / n), 96,   5,  5  }));
    f(mlopen::TensorDescriptor(t, { (128 / n), 256,  12,  12  }), mlopen::TensorDescriptor(t, { (512 / n), 256,  3,  3  }));
    f(mlopen::TensorDescriptor(t, { (128 / n), 512,  12,  12  }), mlopen::TensorDescriptor(t, { (1024 / n),512,  3,  3  }));
    f(mlopen::TensorDescriptor(t, { (128 / n), 1024, 12,  12  }), mlopen::TensorDescriptor(t, { (1024 / n),1024, 3,  3  }));
    f(mlopen::TensorDescriptor(t, { (64 / n),  3,    224, 224 }), mlopen::TensorDescriptor(t, { (64 / n),  3,    3,  3  }));
    f(mlopen::TensorDescriptor(t, { (64 / n),  64,   112, 112 }), mlopen::TensorDescriptor(t, { (128 / n), 64,   3,  3  }));
    f(mlopen::TensorDescriptor(t, { (64 / n),  128,  56,  56  }), mlopen::TensorDescriptor(t, { (256 / n), 128,  3,  3  }));
    f(mlopen::TensorDescriptor(t, { (64 / n),  256,  56,  56  }), mlopen::TensorDescriptor(t, { (256 / n), 256,  3,  3  }));
    f(mlopen::TensorDescriptor(t, { (64 / n),  256,  28,  28  }), mlopen::TensorDescriptor(t, { (512 / n), 256,  3,  3  }));
    f(mlopen::TensorDescriptor(t, { (64 / n),  512,  28,  28  }), mlopen::TensorDescriptor(t, { (512 / n), 512,  3,  3  }));
    f(mlopen::TensorDescriptor(t, { (64 / n),  512,  14,  14  }), mlopen::TensorDescriptor(t, { (512 / n), 512,  3,  3  }));
    f(mlopen::TensorDescriptor(t, { (64 / n),  512,  14,  14  }), mlopen::TensorDescriptor(t, { (512 / n), 512,  3,  3  }));
}
