
const union VoiceGroup voicegroup176[] =
{
    VOICEGROUP_FILLER(ACOUSTIC_GRAND_PIANO,TIMPANI),

    [ELECTRIC_GUITAR_MUTED] = VOICE_SQUARE_1_ALT(60, 0, 0, 2, 0, 2, 7, 1),
    [OVERDRIVEN_GUITAR]     = VOICE_SQUARE_2_ALT(60, 0, 2, 0, 2, 9, 1),
    [FRETLESS_BASS]         = VOICE_PROGRAMMABLE_WAVE_ALT(60, 0, ProgrammableWaveData_1, 0, 7, 15, 0),
    [TIMPANI]               = VOICE_SQUARE_1(60, 0, 0, 2, 0, 0, 15, 0)
};

