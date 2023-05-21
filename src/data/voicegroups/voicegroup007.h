// KeySplitTable5
// SAMPLE_VOICE_0 = C2  - F4
// SAMPLE_VOICE_1 = F#4 - B7

const union VoiceGroup voicegroup_french_horn[] =
{
    [SAMPLE_VOICE_0] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sc88pro_french_horn_60, 255, 0, 224, 165),
    [SAMPLE_VOICE_1] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sc88pro_french_horn_72, 255, 0, 218, 165),
};

