#include <WillowVox/world/NoiseWorldGen.h>

#include <WillowVox/core/Logger.h>
#include <WillowVox/math/Noise.h>

namespace WillowVox
{
    uint16_t NoiseWorldGen::GetBlock(int x, int y, int z)
    {
        float noise = Noise::GetValue2D(m_noiseSettings, m_seed, x, z);
        int block = (int)roundf(noise);
        
        if (y <= block)
            return 1;
        else
            return 0;
    }
}