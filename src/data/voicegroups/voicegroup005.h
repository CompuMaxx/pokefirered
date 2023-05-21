// KeySplitTable3
// SAMPLE_VOICE_0 = C2  - F4
// SAMPLE_VOICE_1 = F#4 - B5
// SAMPLE_VOICE_2 = C6  - B7

const union VoiceGroup voicegroup_trumpet[] =
{
    [SAMPLE_VOICE_0] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sc88pro_trumpet_60, 255, 0, 193, 127),
    [SAMPLE_VOICE_1] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sc88pro_trumpet_72, 255, 0, 193, 127),
    [SAMPLE_VOICE_2] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sc88pro_trumpet_84, 255, 0, 193, 127),
};

// why ? maybe an unused voicegroup
static const union VoiceGroup voicegroup_unused_005[] = 
{
    [ACOUSTIC_GRAND_PIANO]  = VOICE_SQUARE_1_ALT(60, 0, 38, 2, 1, 0, 0, 0),
    [BRIGHT_ACOUSTIC_PIANO
     ... HELICOPTER]        = VOICE_SQUARE_1(60, 0, 0, 2, 0, 0, 15, 0),
    [APPLAUSE]              = VOICE_SQUARE_1_ALT(60, 0, 36, 2, 0, 1, 4, 2),
    [GUNSHOT]               = VOICE_SQUARE_1_ALT(60, 0, 21, 2, 0, 0, 15, 2)
};

