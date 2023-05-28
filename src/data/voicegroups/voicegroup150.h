
const union VoiceGroup voicegroup150[] =
{
    VOICEGROUP_FILLER(DRUMKIT_STANDARD,GUNSHOT),

    [DRUMKIT_STANDARD]      = VOICE_KEYSPLIT_ALL(VOICE_DRUMKIT_002),
    [BRIGHT_ACOUSTIC_PIANO] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_steinway_b_piano, 255, 165, 103, 235),
    [WHISTLE]               = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sd90_classical_whistle, 85, 204, 77, 127),
    [LEAD_1_SQUARE]         = VOICE_SQUARE_2_ALT(60, 0, 1, 0, 1, 4, 6),
    [LEAD_2_SAWTOOTH]       = VOICE_SQUARE_1_ALT(60, 0, 0, 1, 0, 2, 4, 5),
    [LEAD_4_CHIFF]          = VOICE_PROGRAMMABLE_WAVE_ALT(60, 0, ProgrammableWaveData_2, 0, 7, 15, 0),
    [APPLAUSE]              = VOICE_NOISE_ALT(60, 0, 0, 0, 2, 4, 0),
    [GUNSHOT]               = VOICE_NOISE_ALT(60, 0, 0, 0, 1, 0, 0)
};

