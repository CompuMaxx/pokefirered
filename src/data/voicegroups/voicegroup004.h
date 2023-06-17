// KeySplitTable2
// SAMPLE_VOICE_0 = C2 - G#4
// SAMPLE_VOICE_1 = A4 - G#5
// SAMPLE_VOICE_2 = A5 - B7

const union VoiceGroup voicegroup_string_ensemble[] =
{
    [SAMPLE_VOICE_0] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sc88pro_string_ensemble_60, 255, 0, 255, 196),
    [SAMPLE_VOICE_1] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sc88pro_string_ensemble_72, 255, 0, 255, 196),
    [SAMPLE_VOICE_2] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sc88pro_string_ensemble_84, 255, 0, 255, 196),
};

