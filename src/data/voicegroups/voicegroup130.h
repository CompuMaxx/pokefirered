
const union VoiceGroup voicegroup130[] =
{
    VOICEGROUP_FILLER(DRUMKIT_STANDARD,GUNSHOT),

    [DRUMKIT_STANDARD]  = VOICE_KEYSPLIT_ALL(VOICE_DRUMKIT_001),
    [ACCORDION]         = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sc88pro_accordion_duplicate, 255, 249, 25, 248),
    [GUNSHOT]           = VOICE_NOISE_ALT(60, 0, 0, 0, 1, 7, 1)
};

