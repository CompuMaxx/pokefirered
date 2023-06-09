
const union VoiceGroup voicegroup175[] =
{
    VOICEGROUP_FILLER(DRUMKIT_STANDARD,SYNTH_STRINGS_2),

    [DRUMKIT_STANDARD]      = VOICE_KEYSPLIT_ALL(VOICE_DRUMKIT_177),
    [XYLOPHONE]             = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sc88pro_xylophone, 255, 235, 0, 204),
    [ACOUSTIC_GUITAR_NYLON] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sc88pro_nylon_str_guitar, 85, 165, 154, 127),
    [SYNTH_STRINGS_2]       = VOICE_SQUARE_1(60, 0, 0, 2, 0, 0, 15, 0)
};

