
const union VoiceGroup voicegroup165[] =
{
    VOICEGROUP_FILLER(DRUMKIT_STANDARD,GUNSHOT),

    [DRUMKIT_STANDARD]      = VOICE_KEYSPLIT_ALL(VOICE_DRUMKIT_002),
    [BRIGHT_ACOUSTIC_PIANO] = VOICE_KEYSPLIT(voicegroup_piano1, KEYSPLITTABLE_PIANO1_PTR),
    [GLOCKENSPIEL]          = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sc88pro_glockenspiel, 255, 165, 51, 242),
    [MUSIC_BOX]             = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_ethnic_flavours_atarigane, 255, 0, 255, 0),
    [XYLOPHONE]             = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sc88pro_xylophone, 255, 235, 0, 204),
    [TUBULAR_BELLS]         = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sc88pro_tubular_bell, 255, 165, 90, 216),
    [PERCUSIVE_ORGAN]       = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sc88pro_organ2, 37, 165, 103, 127),
    [ACOUSTIC_GUITAR_NYLON] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sc88pro_nylon_str_guitar, 255, 204, 92, 226),
    [ORCHESTRAL_HARP]       = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sc88pro_harp, 255, 242, 51, 226),
    [STRING_ENSEMBLE_1]     = VOICE_KEYSPLIT(voicegroup_string_ensemble, KEYSPLITTABLE_STRING_ENSEMBLE_PTR),
    [SYNTH_STRINGS_1]       = VOICE_SQUARE_1_ALT(60, 0, 0, 2, 0, 2, 10, 1),
    [SYNTH_STRINGS_2]       = VOICE_SQUARE_2_ALT(60, 0, 2, 0, 2, 6, 6),
    [TUBA]                  = VOICE_KEYSPLIT(voicegroup_tuba, KEYSPLITTABLE_TUBA_PTR),
    [FRENCH_HORN]           = VOICE_KEYSPLIT(voicegroup_french_horn, KEYSPLITTABLE_FRENCH_HORN_PTR),
    [FLUTE]                 = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sc88pro_flute, 255, 0, 255, 165),
    [PAN_FLUTE]             = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sd90_enhanced_delay_shaku, 255, 191, 97, 165),
    [WHISTLE]               = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sd90_classical_whistle, 255, 0, 255, 127),
    [PAD_5_BOWED]           = VOICE_PROGRAMMABLE_WAVE_ALT(60, 0, ProgrammableWaveData_5, 0, 7, 15, 0),
    [APPLAUSE]              = VOICE_NOISE_ALT(60, 0, 0, 0, 1, 9, 0),
    [GUNSHOT]               = VOICE_NOISE_ALT(60, 0, 0, 0, 1, 6, 1)
};

