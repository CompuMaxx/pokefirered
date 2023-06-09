
const union VoiceGroup voicegroup001[] =
{
    VOICEGROUP_FILLER(NOTE_CN1,LOW_CONGA),

    [NOTE_GSN1]             = VOICE_SQUARE_1(60, 0, 0, 2, 0, 1, 6, 0),
    [NOTE_BN1]              = VOICE_PROGRAMMABLE_WAVE(60, 0, ProgrammableWaveData_1, 0, 7, 15, 1),
    [NOTE_FS0]              = VOICE_SQUARE_2(60, 0, 2, 0, 1, 6, 0),
    [NOTE_G0]               = VOICE_PROGRAMMABLE_WAVE(60, 0, ProgrammableWaveData_3, 0, 7, 15, 1),
    [NOTE_GS0]              = VOICE_SQUARE_1(60, 0, 0, 2, 0, 1, 6, 0),
    [NOTE_A0]               = VOICE_SQUARE_2(60, 0, 3, 0, 1, 6, 0),
    [NOTE_CS1]              = VOICE_SQUARE_1(60, 0, 0, 0, 0, 1, 6, 0),
    [SLAP_GM2]              = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_classical_choir_voice_ahhs, 255, 0, 255, 0),
    [SCRATCH_PUSH_GM2]      = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sd90_classical_oboe, 255, 165, 154, 127),
    [SCRATCH_PULL_GM2]      = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_unused_sd90_oboe, 255, 165, 154, 127),
    [STICKS_GM2]            = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_unused_guitar_separates_power_chord, 255, 165, 206, 127),
    [SQUARE_CLICK_GM2]      = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_unused_sc88pro_unison_slap, 255, 165, 206, 127),
    [METRONOME_CLICK_GM2]   = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_unknown_snare, 255, 0, 255, 0),
    [METRONOME_BELL_GM2]    = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_ethnic_flavours_ohtsuzumi, 255, 0, 255, 0),
    [BASS_DRUM_2]           = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_ethnic_flavours_hyoushigi, 255, 0, 255, 0),
    [BASS_DRUM_1]           = VOICE_DIRECTSOUND_NO_RESAMPLE(60, 64, DirectSoundWaveData_sc88pro_rnd_kick, 255, 0, 255, 242),
    [SNARE_DRUM_1]          = VOICE_DIRECTSOUND_NO_RESAMPLE(60, 64, DirectSoundWaveData_sc88pro_rnd_snare, 255, 0, 255, 242),
    [HAND_CLAP]             = VOICE_DIRECTSOUND_NO_RESAMPLE(60, 64, DirectSoundWaveData_sc88pro_tr909_hand_clap, 255, 255, 255, 127),
    [SNARE_DRUM_2]          = VOICE_DIRECTSOUND_NO_RESAMPLE(60, 64, DirectSoundWaveData_sc88pro_orchestra_snare, 255, 0, 255, 242),
    [TAMBOURINE]            = VOICE_DIRECTSOUND_NO_RESAMPLE(32, 34, DirectSoundWaveData_sc88pro_tambourine, 255, 127, 77, 204),
    [SPLASH_CYMBAL]         = VOICE_DIRECTSOUND_NO_RESAMPLE(60, 14, DirectSoundWaveData_trinity_cymbal_crash, 255, 235, 0, 165),
    [CRASH_CYMBAL_2]        = VOICE_DIRECTSOUND_NO_RESAMPLE(30, 54, DirectSoundWaveData_sc88pro_orchestra_cymbal_crash, 255, 246, 0, 216),
    [RIDE_CYMBAL_2]         = VOICE_DIRECTSOUND_NO_RESAMPLE(30, 54, DirectSoundWaveData_sc88pro_orchestra_cymbal_crash, 255, 246, 0, 216),
    [HIGH_BONGO]            = VOICE_DIRECTSOUND_NO_RESAMPLE(30, 64, DirectSoundWaveData_sc88pro_orchestra_cymbal_crash, 8, 0, 255, 216),
    [MUTE_HIGH_CONGA]       = VOICE_DIRECTSOUND_NO_RESAMPLE(72, 104, DirectSoundWaveData_sc88pro_mute_high_conga, 255, 0, 255, 0),
    [LOW_CONGA]             = VOICE_DIRECTSOUND_NO_RESAMPLE(72, 94, DirectSoundWaveData_sc88pro_open_low_conga, 255, 0, 255, 0),
};

