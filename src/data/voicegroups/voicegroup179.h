
const union VoiceGroup voicegroup179[] =
{
    VOICEGROUP_FILLER(DRUMKIT_STANDARD,LEAD_8_BASS_LEAD),

    [DRUMKIT_STANDARD]      = VOICE_KEYSPLIT_ALL(VOICE_DRUMKIT_177),
    [BRIGHT_ACOUSTIC_PIANO] = VOICE_KEYSPLIT_ALL(voicegroup176),
    [ELECTRIC_GRAND_PIANO]  = VOICE_KEYSPLIT(voicegroup_piano1, KEYSPLITTABLE_PIANO1_PTR),
    [XYLOPHONE]             = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sc88pro_xylophone, 255, 235, 0, 204),
    [ACOUSTIC_GUITAR_NYLON] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sc88pro_nylon_str_guitar, 85, 165, 154, 127),
    [ELECTRIC_BASS_FINGER]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sc88pro_fingered_bass, 255, 253, 0, 149),
    [STRING_ENSEMBLE_1]     = VOICE_KEYSPLIT(voicegroup_string_ensemble, KEYSPLITTABLE_STRING_ENSEMBLE_PTR),
    [TRUMPET]               = VOICE_KEYSPLIT(voicegroup_trumpet, KEYSPLITTABLE_TRUMPET_PTR),
    [TUBA]                  = VOICE_KEYSPLIT(voicegroup_tuba, KEYSPLITTABLE_TUBA_PTR),
    [FRENCH_HORN]           = VOICE_KEYSPLIT(voicegroup_french_horn, KEYSPLITTABLE_FRENCH_HORN_PTR),
    [LEAD_1_SQUARE]         = VOICE_SQUARE_1_ALT(60, 0, 0, 3, 0, 0, 10, 0),
    [LEAD_2_SAWTOOTH]       = VOICE_SQUARE_2_ALT(60, 0, 0, 0, 1, 9, 0),
    [LEAD_4_CHIFF]          = VOICE_SQUARE_2_ALT(60, 0, 3, 0, 1, 9, 0),
    [LEAD_8_BASS_LEAD]      = VOICE_PROGRAMMABLE_WAVE_ALT(60, 0, ProgrammableWaveData_1, 0, 7, 15, 0)
};

