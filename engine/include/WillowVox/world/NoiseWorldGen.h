#pragma once

#include <WillowVox/WillowVoxDefines.h>
#include <WillowVox/world/WorldGen.h>
#include <WillowVox/math/NoiseSettings.h>

namespace WillowVox
{
    class WILLOWVOX_API NoiseWorldGen : public WorldGen
    {
    public:
        NoiseWorldGen(NoiseSettings2D& noiseSettings)
            : m_noiseSettings(noiseSettings) {}

        uint16_t GetBlock(int x, int y, int z) override;

        NoiseSettings2D& m_noiseSettings;
    };
}