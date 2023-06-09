// KeySplitTable4
// SAMPLE_VOICE_0 = C1  - F2
// SAMPLE_VOICE_1 = F#2 - B7

const union VoiceGroup voicegroup_tuba[] =
{
    [SAMPLE_VOICE_0] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sc88pro_tuba_39, 255, 0, 255, 165),
    [SAMPLE_VOICE_1] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sc88pro_tuba_51, 255, 0, 255, 165)
};

