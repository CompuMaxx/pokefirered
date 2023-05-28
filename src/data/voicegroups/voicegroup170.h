
const union VoiceGroup voicegroup170[] =
{
    VOICEGROUP_FILLER(DRUMKIT_STANDARD,LEAD_4_CHIFF),

    [DRUMKIT_STANDARD]      = VOICE_KEYSPLIT_ALL(VOICE_DRUMKIT_001),
    [TIMPANI]               = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sc88pro_timpani, 255, 246, 0, 226),
    [TRUMPET]               = VOICE_KEYSPLIT(voicegroup_trumpet, KEYSPLITTABLE_TRUMPET_PTR),
    [TUBA]                  = VOICE_KEYSPLIT(voicegroup_tuba, KEYSPLITTABLE_TUBA_PTR),
    [FLUTE]                 = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sc88pro_flute, 255, 127, 231, 127),
    [LEAD_1_SQUARE]         = VOICE_SQUARE_2_ALT(60, 0, 1, 0, 1, 7, 1),
    [LEAD_2_SAWTOOTH]       = VOICE_PROGRAMMABLE_WAVE_ALT(60, 0, ProgrammableWaveData_1, 0, 7, 15, 1),
    [LEAD_3_CALLIOPE]       = VOICE_SQUARE_1_ALT(60, 0, 0, 1, 0, 1, 7, 1),
    [LEAD_4_CHIFF]          = VOICE_SQUARE_2_ALT(60, 0, 2, 0, 1, 0, 0)
};

