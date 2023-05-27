
const union VoiceGroup voicegroup180[] =
{
    VOICEGROUP_FILLER(ACOUSTIC_GRAND_PIANO,GUNSHOT),

    [BRIGHT_ACOUSTIC_PIANO] = VOICE_KEYSPLIT(voicegroup_piano1, KEYSPLITTABLE_PIANO1_PTR),
    [ELECTRIC_PIANO_1]      = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sd90_classical_detuned_ep1_low, 64, 249, 0, 188),
    [ELECTRIC_PIANO_2]      = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sd90_classical_detuned_ep1_low, 255, 249, 0, 165),
    [LEAD_1_SQUARE]         = VOICE_SQUARE_1_ALT(60, 0, 0, 2, 0, 2, 3, 1),
    [LEAD_2_SAWTOOTH]       = VOICE_SQUARE_2_ALT(60, 0, 2, 0, 2, 3, 1),
    [PAD_5_BOWED]           = VOICE_PROGRAMMABLE_WAVE_ALT(60, 0, ProgrammableWaveData_5, 0, 7, 15, 0),
    [APPLAUSE]              = VOICE_DIRECTSOUND_NO_RESAMPLE(60, 0, DirectSoundWaveData_sc88pro_tr909_hand_clap, 255, 255, 255, 127),
    [GUNSHOT]               = VOICE_NOISE_ALT(60, 0, 0, 0, 1, 0, 0)
};

