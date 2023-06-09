
const union VoiceGroup voicegroup178[] =
{
    VOICEGROUP_FILLER(DRUMKIT_STANDARD,LEAD_8_BASS_LEAD),

    [DRUMKIT_STANDARD]      = VOICE_KEYSPLIT_ALL(VOICE_DRUMKIT_177),
    [XYLOPHONE]             = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sc88pro_xylophone, 255, 204, 103, 165),
    [ACOUSTIC_GUITAR_NYLON] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sc88pro_nylon_str_guitar, 255, 165, 154, 165),
    [LEAD_1_SQUARE]         = VOICE_SQUARE_1_ALT(60, 0, 0, 2, 0, 2, 7, 1),
    [LEAD_2_SAWTOOTH]       = VOICE_SQUARE_2_ALT(60, 0, 2, 0, 2, 7, 1),
    [LEAD_8_BASS_LEAD]      = VOICE_PROGRAMMABLE_WAVE_ALT(60, 0, ProgrammableWaveData_5, 0, 0, 15, 1)
};

