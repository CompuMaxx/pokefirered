
const union VoiceGroup voicegroup131[] =
{
    VOICEGROUP_FILLER(DRUMKIT_STANDARD,GUNSHOT),

    [DRUMKIT_STANDARD]      = VOICE_KEYSPLIT_ALL(VOICE_DRUMKIT_002),
    [BRIGHT_ACOUSTIC_PIANO] = VOICE_KEYSPLIT(voicegroup_piano1, KEYSPLITTABLE_PIANO1_PTR),
    [ELECTRIC_GRAND_PIANO]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_steinway_b_piano, 128, 204, 51, 242),
    [ACOUSTIC_GUITAR_NYLON] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sc88pro_nylon_str_guitar, 128, 204, 103, 226),
    [LEAD_1_SQUARE]         = VOICE_SQUARE_1_ALT(60, 0, 0, 1, 0, 2, 3, 5),
    [LEAD_2_SAWTOOTH]       = VOICE_SQUARE_2_ALT(60, 0, 3, 0, 2, 6, 5),
    [PAD_5_BOWED]           = VOICE_PROGRAMMABLE_WAVE_ALT(60, 0, ProgrammableWaveData_1, 0, 7, 9, 1),
    [GUNSHOT]               = VOICE_NOISE_ALT(60, 0, 0, 0, 1, 0, 1)
};

