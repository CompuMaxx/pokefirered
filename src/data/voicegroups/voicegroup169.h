
const union VoiceGroup voicegroup169[] =
{
    VOICEGROUP_FILLER(DRUMKIT_STANDARD,GUNSHOT),

    [DRUMKIT_STANDARD]      = VOICE_KEYSPLIT_ALL(VOICE_DRUMKIT_001),
    [PERCUSIVE_ORGAN]       = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sc88pro_organ2, 255, 0, 255, 210),
    [FRETLESS_BASS]         = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sc88pro_fretless_bass, 255, 253, 0, 188),
    [TRUMPET]               = VOICE_KEYSPLIT(voicegroup_trumpet, KEYSPLITTABLE_TRUMPET_PTR),
    [TUBA]                  = VOICE_KEYSPLIT(voicegroup_tuba, KEYSPLITTABLE_TUBA_PTR),
    [PAN_FLUTE]             = VOICE_PROGRAMMABLE_WAVE_ALT(60, 0, ProgrammableWaveData_2, 0, 7, 15, 0),
    [LEAD_1_SQUARE]         = VOICE_SQUARE_1_ALT(60, 0, 0, 2, 0, 1, 4, 1),
    [LEAD_2_SAWTOOTH]       = VOICE_SQUARE_2_ALT(60, 0, 2, 0, 1, 4, 1),
    [LEAD_3_CALLIOPE]       = VOICE_SQUARE_2_ALT(60, 0, 0, 0, 1, 4, 1),
    [LEAD_4_CHIFF]          = VOICE_SQUARE_1_ALT(60, 0, 0, 0, 0, 1, 4, 1),
    [APPLAUSE]              = VOICE_NOISE_ALT(60, 0, 0, 0, 2, 4, 0),
    [GUNSHOT]               = VOICE_NOISE_ALT(60, 0, 0, 0, 1, 0, 0)
};

