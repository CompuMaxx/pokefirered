
const union VoiceGroup voicegroup186[] =
{
    VOICEGROUP_FILLER(ACOUSTIC_GRAND_PIANO,GUNSHOT),

    [BRIGHT_ACOUSTIC_PIANO] = VOICE_KEYSPLIT(voicegroup_piano1, KEYSPLITTABLE_PIANO1_PTR),
    [LEAD_2_SAWTOOTH]       = VOICE_SQUARE_2_ALT(60, 0, 3, 0, 0, 15, 0),
    [GUNSHOT]               = VOICE_NOISE_ALT(60, 0, 0, 0, 2, 6, 0)
};

