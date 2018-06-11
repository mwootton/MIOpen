#include <miopen/fusion.hpp>

namespace miopen {
miopenStatus_t FusionOpDescriptor::GetNetworkConfig(std::string& network_config, Handle& handle)
{
    (void)(network_config);
    (void)(handle);
    return miopenStatusSuccess;
}

miopenStatus_t FusionOpDescriptor::GetCompileParms(std::string& compile_config, Handle& handle)
{
    (void)(compile_config);
    (void)(handle);
    return miopenStatusSuccess;
}

miopenStatus_t BiasFusionOpDescriptor::GetNetworkConfig(std::string& network_config, Handle& handle)
{
    (void)(handle);
    network_config += "1"; // for bias
    return miopenStatusSuccess;
}

miopenStatus_t BiasFusionOpDescriptor::GetCompileParms(std::string& compile_config, Handle& handle)
{
    (void)(handle); // only convolution uses handle
    compile_config += " -DMLO_CONV_BIAS=" + std::to_string(1);
    return miopenStatusSuccess;
}

miopenStatus_t ActivFusionOpDescriptor::GetNetworkConfig(std::string& network_config,
                                                         Handle& handle)
{
    (void)(handle);
    network_config += std::to_string(base_desc.GetMode());
    return miopenStatusSuccess;
}

miopenStatus_t ActivFusionOpDescriptor::GetCompileParms(std::string& compile_config, Handle& handle)
{
    (void)(handle);
    compile_config += " -DMIOPEN_NRN_OP_ID=" + std::to_string(base_desc.GetMode());
    return miopenStatusSuccess;
}
} // namespace miopen
