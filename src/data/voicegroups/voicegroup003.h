// KeySplitTable1
// SAMPLE_VOICE_0 = C2  - F#3
// SAMPLE_VOICE_1 = G3  - A4
// SAMPLE_VOICE_2 = A#4 - F#6
// SAMPLE_VOICE_3 = G6  - B7

const union VoiceGroup voicegroup_piano1[] =
{
    [SAMPLE_VOICE_0] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sc88pro_piano1_48, 255, 252, 0, 239),
    [SAMPLE_VOICE_1] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sc88pro_piano1_60, 255, 250, 0, 221),
    [SAMPLE_VOICE_2] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sc88pro_piano1_72, 255, 250, 0, 221),
    [SAMPLE_VOICE_3] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sc88pro_piano1_84, 255, 247, 0, 221),
};

