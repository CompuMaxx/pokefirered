
const union VoiceGroup voicegroup000[] =
{
    VOICEGROUP_FILLER(DRUMKIT_STANDARD,BRASS_SECTION),

    [DRUMKIT_STANDARD]      = VOICE_KEYSPLIT_ALL(VOICE_DRUMKIT_001),
    [BRIGHT_ACOUSTIC_PIANO] = VOICE_KEYSPLIT(voicegroup_piano1, KEYSPLITTABLE_PIANO1_PTR),
    [HARPSICHORD]           = VOICE_SQUARE_2(NOTE_C4, 0, 2, 0, 0, 9, 2),
    [GLOCKENSPIEL]          = VOICE_DIRECTSOUND(NOTE_C4, 0, DirectSoundWaveData_sc88pro_glockenspiel, 255, 165, 51, 235),
    [PERCUSIVE_ORGAN]       = VOICE_DIRECTSOUND(NOTE_C4, 0, DirectSoundWaveData_sc88pro_organ2, 255, 0, 255, 127),
    [ACOUSTIC_BASS]         = VOICE_DIRECTSOUND(NOTE_C4, 0, DirectSoundWaveData_sc88pro_fretless_bass, 255, 253, 0, 149),
    [SLAP_BASS_1]           = VOICE_DIRECTSOUND(NOTE_C4, 0, DirectSoundWaveData_sc88pro_slap_bass, 255, 235, 128, 115),
    [SYNTH_BASS_1]          = VOICE_DIRECTSOUND(NOTE_C4, 0, DirectSoundWaveData_sc88pro_synth_bass, 255, 252, 0, 115),
    [TIMPANI]               = VOICE_DIRECTSOUND(NOTE_C4, 0, DirectSoundWaveData_sc88pro_timpani, 255, 204, 193, 239),
    [STRING_ENSEMBLE_1]     = VOICE_KEYSPLIT(voicegroup_string_ensemble, KEYSPLITTABLE_STRING_ENSEMBLE_PTR),
    [TRUMPET]               = VOICE_KEYSPLIT(voicegroup_trumpet, KEYSPLITTABLE_TRUMPET_PTR),
};

