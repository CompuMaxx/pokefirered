#ifndef GUARD_VOICE_GROUPS_H
#define GUARD_VOICE_GROUPS_H

#include "gba/m4a_internal.h"

union VoiceGroup;

struct VoiceSquare
{
    u8 type;
    u8 key;
    u8 pan;
    u8 sweep;
    u32 duty_cycle;
    u8 attack;
    u8 decay;
    u8 sustain;
    u8 release;
};

struct VoiceNoise
{
    u8 type;
    u8 key;
    u8 pan;
    u8 unk3;
    u32 period;
    u8 attack;
    u8 decay;
    u8 sustain;
    u8 release;
};

struct VoiceKeySplit
{
    u8 type;
    u8 key;
    u8 length;
    u8 pan_sweep;
    union VoiceGroup *voiceGroup;
    u8 * keysplit_table_ptr;
};

union VoiceGroup
{
    struct ToneData toneData;
    struct VoiceSquare square;
    struct VoiceNoise noise;
    struct VoiceKeySplit keySplit;
};

#define VOICE_DIRECTSOUND(base_midi_key,pan,sample_data_pointer,attack,decay,sustain,release)       \
    {.toneData = {0, base_midi_key, 0,(pan)?(0x80|pan):0, (struct WaveData*)&sample_data_pointer,   \
    attack, decay, sustain, release}}                                                               \

#define VOICE_DIRECTSOUND_NO_RESAMPLE(base_midi_key,pan,sample_data_pointer,attack,decay,sustain,release) \
    {.toneData = {8, base_midi_key, 0,(pan)?(0x80|pan):0, (struct WaveData*)&sample_data_pointer,         \
    attack, decay, sustain, release}}                                                                     \

#define VOICE_DIRECTSOUND_ALT(base_midi_key,pan,sample_data_pointer,attack,decay,sustain,release)  \
    {.toneData = {16, base_midi_key, 0,(pan)?(0x80|pan):0, (struct WaveData*)&sample_data_pointer, \
    attack, decay, sustain, release}}                                                              \

#define VOICE_SQUARE_1(base_midi_key,pan,sweep,duty_cycle,attack,decay,sustain,release) \
    {.square = {1, base_midi_key, (pan)?(0x80|pan):0, sweep, (duty_cycle & 3),          \
     (attack & 7), (decay & 7), (sustain & 15), (release & 7)}}                         \

#define VOICE_SQUARE_1_ALT(base_midi_key,pan,sweep,duty_cycle,attack,decay,sustain,release) \
    {.square = {9, base_midi_key, (pan)?(0x80|pan):0, sweep, (duty_cycle & 3),              \
     (attack & 7), (decay & 7), (sustain & 15), (release & 7)}}                             \

#define VOICE_SQUARE_2(base_midi_key,pan,duty_cycle,attack,decay,sustain,release)   \
    {.square = {2, base_midi_key, (pan)?(0x80|pan):0, 0, (duty_cycle & 3),          \
     (attack & 7), (decay & 7), (sustain & 15), (release & 7)}}                     \

#define VOICE_SQUARE_2_ALT(base_midi_key,pan,duty_cycle,attack,decay,sustain,release)   \
    {.square = {10, base_midi_key, (pan)?(0x80|pan):0, 0, (duty_cycle & 3),             \
     (attack & 7), (decay & 7), (sustain & 15), (release & 7)}}                         \

#define VOICE_PROGRAMMABLE_WAVE(base_midi_key,pan,wave_samples_pointer,attack,decay,sustain,release) \
    {.toneData = {3, base_midi_key, (pan)?(0x80|pan):0, 0, (struct WaveData*)&wave_samples_pointer,  \
     (attack & 7), (decay & 7), (sustain & 15), (release & 7)}}                                      \

#define VOICE_PROGRAMMABLE_WAVE_ALT(base_midi_key,pan,wave_samples_pointer,attack,decay,sustain,release) \
    {.toneData = {11, base_midi_key, (pan)?(0x80|pan):0, 0, (struct WaveData*)&wave_samples_pointer,     \
     (attack & 7), (decay & 7), (sustain & 15), (release & 7)}}                                          \

#define VOICE_NOISE(base_midi_key,pan,period,attack,decay,sustain,release)      \
    {.noise = {4, base_midi_key, (pan)?(0x80|pan):0, 0, (period & 1),           \
     (attack & 7), (decay & 7), (sustain & 15), (release & 7)}}                 \

#define VOICE_NOISE_ALT(base_midi_key,pan,period,attack,decay,sustain,release)  \
    {.noise = {12, base_midi_key, (pan)?(0x80|pan):0, 0, (period & 1),          \
     (attack & 7), (decay & 7), (sustain & 15), (release & 7)}}                 \

#define VOICE_KEYSPLIT(voice_group_pointer, keysplit_table_pointer)         \
    {.keySplit = {64, 0, 0, 0, (union VoiceGroup *)&voice_group_pointer,    \
     (u8*)keysplit_table_pointer}}                                          \

#define VOICE_KEYSPLIT_ALL(voice_group_pointer)                                 \
    {.keySplit = {128, 0, 0, 0, (union VoiceGroup*)&voice_group_pointer, 0}}    \

#define CRY(sample)                                             \
    {32, 60, 0, 0, (struct WaveData*)&sample, 255, 0, 255, 0}   \

#define CRY_REVERSE(sample)                                     \
    {48, 60, 0, 0, (struct WaveData*)&sample, 255, 0, 255, 0}   \

extern const union VoiceGroup voicegroup000[];
extern const union VoiceGroup voicegroup001[];
extern const union VoiceGroup voicegroup002[];
extern const union VoiceGroup voicegroup003[];
extern const union VoiceGroup voicegroup004[];
extern const union VoiceGroup voicegroup005[];
extern const union VoiceGroup voicegroup006[];
extern const union VoiceGroup voicegroup007[];
extern const union VoiceGroup voicegroup008[];
extern const union VoiceGroup voicegroup009[];
extern const union VoiceGroup voicegroup010[];
extern const union VoiceGroup voicegroup011[];
extern const union VoiceGroup voicegroup012[];
extern const union VoiceGroup voicegroup127[];
extern const union VoiceGroup voicegroup128[];
extern const union VoiceGroup voicegroup129[];
extern const union VoiceGroup voicegroup130[];
extern const union VoiceGroup voicegroup131[];
extern const union VoiceGroup voicegroup132[];
extern const union VoiceGroup voicegroup133[];
extern const union VoiceGroup voicegroup134[];
extern const union VoiceGroup voicegroup135[];
extern const union VoiceGroup voicegroup136[];
extern const union VoiceGroup voicegroup137[];
extern const union VoiceGroup voicegroup138[];
extern const union VoiceGroup voicegroup139[];
extern const union VoiceGroup voicegroup140[];
extern const union VoiceGroup voicegroup141[];
extern const union VoiceGroup voicegroup142[];
extern const union VoiceGroup voicegroup143[];
extern const union VoiceGroup voicegroup144[];
extern const union VoiceGroup voicegroup145[];
extern const union VoiceGroup voicegroup146[];
extern const union VoiceGroup voicegroup147[];
extern const union VoiceGroup voicegroup148[];
extern const union VoiceGroup voicegroup149[];
extern const union VoiceGroup voicegroup150[];
extern const union VoiceGroup voicegroup151[];
extern const union VoiceGroup voicegroup152[];
extern const union VoiceGroup voicegroup153[];
extern const union VoiceGroup voicegroup154[];
extern const union VoiceGroup voicegroup155[];
extern const union VoiceGroup voicegroup156[];
extern const union VoiceGroup voicegroup157[];
extern const union VoiceGroup voicegroup158[];
extern const union VoiceGroup voicegroup159[];
extern const union VoiceGroup voicegroup160[];
extern const union VoiceGroup voicegroup161[];
extern const union VoiceGroup voicegroup162[];
extern const union VoiceGroup voicegroup163[];
extern const union VoiceGroup voicegroup164[];
extern const union VoiceGroup voicegroup165[];
extern const union VoiceGroup voicegroup166[];
extern const union VoiceGroup voicegroup167[];
extern const union VoiceGroup voicegroup168[];
extern const union VoiceGroup voicegroup169[];
extern const union VoiceGroup voicegroup170[];
extern const union VoiceGroup voicegroup171[];
extern const union VoiceGroup voicegroup172[];
extern const union VoiceGroup voicegroup173[];
extern const union VoiceGroup voicegroup174[];
extern const union VoiceGroup voicegroup175[];
extern const union VoiceGroup voicegroup176[];
extern const union VoiceGroup voicegroup177[];
extern const union VoiceGroup voicegroup178[];
extern const union VoiceGroup voicegroup179[];
extern const union VoiceGroup voicegroup180[];
extern const union VoiceGroup voicegroup181[];
extern const union VoiceGroup voicegroup182[];
extern const union VoiceGroup voicegroup183[];
extern const union VoiceGroup voicegroup184[];
extern const union VoiceGroup voicegroup185[];
extern const union VoiceGroup voicegroup186[];
extern const union VoiceGroup voicegroup187[];
extern const union VoiceGroup voicegroup188[];
extern const union VoiceGroup voicegroup189[];
extern const union VoiceGroup voicegroup190[];

extern const s8 DirectSoundWaveData_sc88pro_glockenspiel[];
extern const s8 DirectSoundWaveData_sc88pro_organ2[];
extern const s8 DirectSoundWaveData_sc88pro_fretless_bass[];
extern const s8 DirectSoundWaveData_sc88pro_slap_bass[];
extern const s8 DirectSoundWaveData_sc88pro_synth_bass[];
extern const s8 DirectSoundWaveData_sc88pro_timpani[];
extern const s8 DirectSoundWaveData_classical_choir_voice_ahhs[];
extern const s8 DirectSoundWaveData_sd90_classical_oboe[];
extern const s8 DirectSoundWaveData_unused_sd90_oboe[];
extern const s8 DirectSoundWaveData_unused_guitar_separates_power_chord[];
extern const s8 DirectSoundWaveData_unused_sc88pro_unison_slap[];
extern const s8 DirectSoundWaveData_unknown_snare[];
extern const s8 DirectSoundWaveData_ethnic_flavours_ohtsuzumi[];
extern const s8 DirectSoundWaveData_ethnic_flavours_hyoushigi[];
extern const s8 DirectSoundWaveData_sc88pro_rnd_kick[];
extern const s8 DirectSoundWaveData_sc88pro_rnd_snare[];
extern const s8 DirectSoundWaveData_sc88pro_tr909_hand_clap[];
extern const s8 DirectSoundWaveData_sc88pro_orchestra_snare[];
extern const s8 DirectSoundWaveData_sc88pro_tambourine[];
extern const s8 DirectSoundWaveData_trinity_cymbal_crash[];
extern const s8 DirectSoundWaveData_sc88pro_orchestra_cymbal_crash[];
extern const s8 DirectSoundWaveData_sc88pro_mute_high_conga[];
extern const s8 DirectSoundWaveData_sc88pro_open_low_conga[];
extern const s8 DirectSoundWaveData_drum_and_percussion_kick[];
extern const s8 DirectSoundWaveData_sd90_solo_snare[];
extern const s8 DirectSoundWaveData_sd90_ambient_tom[];
extern const s8 DirectSoundWaveData_dance_drums_ride_bell[];
extern const s8 DirectSoundWaveData_sd90_cowbell[];
extern const s8 DirectSoundWaveData_unused_heart_of_asia_indian_drum[];
extern const s8 DirectSoundWaveData_sd90_open_triangle[];
extern const s8 DirectSoundWaveData_sc88pro_jingle_bell[];
extern const s8 DirectSoundWaveData_ethnic_flavours_atarigane[];
extern const s8 DirectSoundWaveData_sc88pro_taiko[];
extern const s8 DirectSoundWaveData_ethnic_flavours_kotsuzumi[];
extern const s8 DirectSoundWaveData_sc88pro_piano1_48[];
extern const s8 DirectSoundWaveData_sc88pro_piano1_60[];
extern const s8 DirectSoundWaveData_sc88pro_piano1_72[];
extern const s8 DirectSoundWaveData_sc88pro_piano1_84[];
extern const s8 DirectSoundWaveData_sc88pro_string_ensemble_60[];
extern const s8 DirectSoundWaveData_sc88pro_string_ensemble_72[];
extern const s8 DirectSoundWaveData_sc88pro_string_ensemble_84[];
extern const s8 DirectSoundWaveData_sc88pro_trumpet_60[];
extern const s8 DirectSoundWaveData_sc88pro_trumpet_72[];
extern const s8 DirectSoundWaveData_sc88pro_trumpet_84[];
extern const s8 DirectSoundWaveData_sc88pro_tuba_39[];
extern const s8 DirectSoundWaveData_sc88pro_tuba_51[];
extern const s8 DirectSoundWaveData_sc88pro_french_horn_60[];
extern const s8 DirectSoundWaveData_sc88pro_french_horn_72[];
extern const s8 DirectSoundWaveData_sc88pro_flute[];
extern const s8 DirectSoundWaveData_sc88pro_fingered_bass[];
extern const s8 DirectSoundWaveData_sc88pro_timpani_with_snare[];
extern const s8 DirectSoundWaveData_unknown_synth_snare[];
extern const s8 DirectSoundWaveData_sc88pro_square_wave[];
extern const s8 DirectSoundWaveData_bicycle_bell[];
extern const s8 DirectSoundWaveData_wave_54[];
extern const s8 DirectSoundWaveData_sc88pro_pizzicato_strings[];
extern const s8 DirectSoundWaveData_wave_56[];
extern const s8 DirectSoundWaveData_wave_57[];
extern const s8 DirectSoundWaveData_wave_58[];
extern const s8 DirectSoundWaveData_sc88pro_wind[];
extern const s8 DirectSoundWaveData_sc88pro_bubbles[];
extern const s8 DirectSoundWaveData_wave_61[];
extern const s8 DirectSoundWaveData_wave_62[];
extern const s8 DirectSoundWaveData_trinity_30303_mega_bass[];
extern const s8 DirectSoundWaveData_wave_64[];
extern const s8 DirectSoundWaveData_wave_65[];
extern const s8 DirectSoundWaveData_sc88pro_tubular_bell[];
extern const s8 DirectSoundWaveData_unknown_close_hihat[];
extern const s8 DirectSoundWaveData_wave_68[];
extern const s8 DirectSoundWaveData_trinity_big_boned[];
extern const s8 DirectSoundWaveData_sc88pro_harp[];
extern const s8 DirectSoundWaveData_sc88pro_xylophone[];
extern const s8 DirectSoundWaveData_wave_72[];
extern const s8 DirectSoundWaveData_wave_73[];
extern const s8 DirectSoundWaveData_sc88pro_accordion[];
extern const s8 DirectSoundWaveData_unused_sc55_tom[];

extern const s8 Cry_Bulbasaur[];
extern const s8 Cry_Ivysaur[];
extern const s8 Cry_Venusaur[];
extern const s8 Cry_Charmander[];
extern const s8 Cry_Charmeleon[];
extern const s8 Cry_Charizard[];
extern const s8 Cry_Squirtle[];
extern const s8 Cry_Wartortle[];
extern const s8 Cry_Blastoise[];
extern const s8 Cry_Caterpie[];
extern const s8 Cry_Metapod[];
extern const s8 Cry_Butterfree[];
extern const s8 Cry_Weedle[];
extern const s8 Cry_Kakuna[];
extern const s8 Cry_Beedrill[];
extern const s8 Cry_Pidgey[];
extern const s8 Cry_Pidgeotto[];
extern const s8 Cry_Pidgeot[];
extern const s8 Cry_Rattata[];
extern const s8 Cry_Raticate[];
extern const s8 Cry_Spearow[];
extern const s8 Cry_Fearow[];
extern const s8 Cry_Ekans[];
extern const s8 Cry_Arbok[];
extern const s8 Cry_Pikachu[];
extern const s8 Cry_Raichu[];
extern const s8 Cry_Sandshrew[];
extern const s8 Cry_Sandslash[];
extern const s8 Cry_NidoranF[];
extern const s8 Cry_Nidorina[];
extern const s8 Cry_Nidoqueen[];
extern const s8 Cry_NidoranM[];
extern const s8 Cry_Nidorino[];
extern const s8 Cry_Nidoking[];
extern const s8 Cry_Clefairy[];
extern const s8 Cry_Clefable[];
extern const s8 Cry_Vulpix[];
extern const s8 Cry_Ninetales[];
extern const s8 Cry_Jigglypuff[];
extern const s8 Cry_Wigglytuff[];
extern const s8 Cry_Zubat[];
extern const s8 Cry_Golbat[];
extern const s8 Cry_Oddish[];
extern const s8 Cry_Gloom[];
extern const s8 Cry_Vileplume[];
extern const s8 Cry_Paras[];
extern const s8 Cry_Parasect[];
extern const s8 Cry_Venonat[];
extern const s8 Cry_Venomoth[];
extern const s8 Cry_Diglett[];
extern const s8 Cry_Dugtrio[];
extern const s8 Cry_Meowth[];
extern const s8 Cry_Persian[];
extern const s8 Cry_Psyduck[];
extern const s8 Cry_Golduck[];
extern const s8 Cry_Mankey[];
extern const s8 Cry_Primeape[];
extern const s8 Cry_Growlithe[];
extern const s8 Cry_Arcanine[];
extern const s8 Cry_Poliwag[];
extern const s8 Cry_Poliwhirl[];
extern const s8 Cry_Poliwrath[];
extern const s8 Cry_Abra[];
extern const s8 Cry_Kadabra[];
extern const s8 Cry_Alakazam[];
extern const s8 Cry_Machop[];
extern const s8 Cry_Machoke[];
extern const s8 Cry_Machamp[];
extern const s8 Cry_Bellsprout[];
extern const s8 Cry_Weepinbell[];
extern const s8 Cry_Victreebel[];
extern const s8 Cry_Tentacool[];
extern const s8 Cry_Tentacruel[];
extern const s8 Cry_Geodude[];
extern const s8 Cry_Graveler[];
extern const s8 Cry_Golem[];
extern const s8 Cry_Ponyta[];
extern const s8 Cry_Rapidash[];
extern const s8 Cry_Slowpoke[];
extern const s8 Cry_Slowbro[];
extern const s8 Cry_Magnemite[];
extern const s8 Cry_Magneton[];
extern const s8 Cry_Farfetchd[];
extern const s8 Cry_Doduo[];
extern const s8 Cry_Dodrio[];
extern const s8 Cry_Seel[];
extern const s8 Cry_Dewgong[];
extern const s8 Cry_Grimer[];
extern const s8 Cry_Muk[];
extern const s8 Cry_Shellder[];
extern const s8 Cry_Cloyster[];
extern const s8 Cry_Gastly[];
extern const s8 Cry_Haunter[];
extern const s8 Cry_Gengar[];
extern const s8 Cry_Onix[];
extern const s8 Cry_Drowzee[];
extern const s8 Cry_Hypno[];
extern const s8 Cry_Krabby[];
extern const s8 Cry_Kingler[];
extern const s8 Cry_Voltorb[];
extern const s8 Cry_Electrode[];
extern const s8 Cry_Exeggcute[];
extern const s8 Cry_Exeggutor[];
extern const s8 Cry_Cubone[];
extern const s8 Cry_Marowak[];
extern const s8 Cry_Hitmonlee[];
extern const s8 Cry_Hitmonchan[];
extern const s8 Cry_Lickitung[];
extern const s8 Cry_Koffing[];
extern const s8 Cry_Weezing[];
extern const s8 Cry_Rhyhorn[];
extern const s8 Cry_Rhydon[];
extern const s8 Cry_Chansey[];
extern const s8 Cry_Tangela[];
extern const s8 Cry_Kangaskhan[];
extern const s8 Cry_Horsea[];
extern const s8 Cry_Seadra[];
extern const s8 Cry_Goldeen[];
extern const s8 Cry_Seaking[];
extern const s8 Cry_Staryu[];
extern const s8 Cry_Starmie[];
extern const s8 Cry_MrMime[];
extern const s8 Cry_Scyther[];
extern const s8 Cry_Jynx[];
extern const s8 Cry_Electabuzz[];
extern const s8 Cry_Magmar[];
extern const s8 Cry_Pinsir[];
extern const s8 Cry_Tauros[];
extern const s8 Cry_Magikarp[];
extern const s8 Cry_Gyarados[];
extern const s8 Cry_Lapras[];
extern const s8 Cry_Ditto[];
extern const s8 Cry_Eevee[];
extern const s8 Cry_Vaporeon[];
extern const s8 Cry_Jolteon[];
extern const s8 Cry_Flareon[];
extern const s8 Cry_Porygon[];
extern const s8 Cry_Omanyte[];
extern const s8 Cry_Omastar[];
extern const s8 Cry_Kabuto[];
extern const s8 Cry_Kabutops[];
extern const s8 Cry_Aerodactyl[];
extern const s8 Cry_Snorlax[];
extern const s8 Cry_Articuno[];
extern const s8 Cry_Zapdos[];
extern const s8 Cry_Moltres[];
extern const s8 Cry_Dratini[];
extern const s8 Cry_Dragonair[];
extern const s8 Cry_Dragonite[];
extern const s8 Cry_Mewtwo[];
extern const s8 Cry_Mew[];
extern const s8 Cry_Chikorita[];
extern const s8 Cry_Bayleef[];
extern const s8 Cry_Meganium[];
extern const s8 Cry_Cyndaquil[];
extern const s8 Cry_Quilava[];
extern const s8 Cry_Typhlosion[];
extern const s8 Cry_Totodile[];
extern const s8 Cry_Croconaw[];
extern const s8 Cry_Feraligatr[];
extern const s8 Cry_Sentret[];
extern const s8 Cry_Furret[];
extern const s8 Cry_Hoothoot[];
extern const s8 Cry_Noctowl[];
extern const s8 Cry_Ledyba[];
extern const s8 Cry_Ledian[];
extern const s8 Cry_Spinarak[];
extern const s8 Cry_Ariados[];
extern const s8 Cry_Crobat[];
extern const s8 Cry_Chinchou[];
extern const s8 Cry_Lanturn[];
extern const s8 Cry_Pichu[];
extern const s8 Cry_Cleffa[];
extern const s8 Cry_Igglybuff[];
extern const s8 Cry_Togepi[];
extern const s8 Cry_Togetic[];
extern const s8 Cry_Natu[];
extern const s8 Cry_Xatu[];
extern const s8 Cry_Mareep[];
extern const s8 Cry_Flaaffy[];
extern const s8 Cry_Ampharos[];
extern const s8 Cry_Bellossom[];
extern const s8 Cry_Marill[];
extern const s8 Cry_Azumarill[];
extern const s8 Cry_Sudowoodo[];
extern const s8 Cry_Politoed[];
extern const s8 Cry_Hoppip[];
extern const s8 Cry_Skiploom[];
extern const s8 Cry_Jumpluff[];
extern const s8 Cry_Aipom[];
extern const s8 Cry_Sunkern[];
extern const s8 Cry_Sunflora[];
extern const s8 Cry_Yanma[];
extern const s8 Cry_Wooper[];
extern const s8 Cry_Quagsire[];
extern const s8 Cry_Espeon[];
extern const s8 Cry_Umbreon[];
extern const s8 Cry_Murkrow[];
extern const s8 Cry_Slowking[];
extern const s8 Cry_Misdreavus[];
extern const s8 Cry_Unown[];
extern const s8 Cry_Wobbuffet[];
extern const s8 Cry_Girafarig[];
extern const s8 Cry_Pineco[];
extern const s8 Cry_Forretress[];
extern const s8 Cry_Dunsparce[];
extern const s8 Cry_Gligar[];
extern const s8 Cry_Steelix[];
extern const s8 Cry_Snubbull[];
extern const s8 Cry_Granbull[];
extern const s8 Cry_Qwilfish[];
extern const s8 Cry_Scizor[];
extern const s8 Cry_Shuckle[];
extern const s8 Cry_Heracross[];
extern const s8 Cry_Sneasel[];
extern const s8 Cry_Teddiursa[];
extern const s8 Cry_Ursaring[];
extern const s8 Cry_Slugma[];
extern const s8 Cry_Magcargo[];
extern const s8 Cry_Swinub[];
extern const s8 Cry_Piloswine[];
extern const s8 Cry_Corsola[];
extern const s8 Cry_Remoraid[];
extern const s8 Cry_Octillery[];
extern const s8 Cry_Delibird[];
extern const s8 Cry_Mantine[];
extern const s8 Cry_Skarmory[];
extern const s8 Cry_Houndour[];
extern const s8 Cry_Houndoom[];
extern const s8 Cry_Kingdra[];
extern const s8 Cry_Phanpy[];
extern const s8 Cry_Donphan[];
extern const s8 Cry_Porygon2[];
extern const s8 Cry_Stantler[];
extern const s8 Cry_Smeargle[];
extern const s8 Cry_Tyrogue[];
extern const s8 Cry_Hitmontop[];
extern const s8 Cry_Smoochum[];
extern const s8 Cry_Elekid[];
extern const s8 Cry_Magby[];
extern const s8 Cry_Miltank[];
extern const s8 Cry_Blissey[];
extern const s8 Cry_Raikou[];
extern const s8 Cry_Entei[];
extern const s8 Cry_Suicune[];
extern const s8 Cry_Larvitar[];
extern const s8 Cry_Pupitar[];
extern const s8 Cry_Tyranitar[];
extern const s8 Cry_Lugia[];
extern const s8 Cry_HoOh[];
extern const s8 Cry_Celebi[];
extern const s8 Cry_Kecleon[];
extern const s8 Cry_Roselia[];
extern const s8 Cry_Torkoal[];
extern const s8 Cry_Electrike[];
extern const s8 Cry_Manectric[];
extern const s8 Cry_Duskull[];
extern const s8 Cry_Latias[];
extern const s8 Cry_Wynaut[];
extern const s8 Cry_Seviper[];
extern const s8 Cry_Sharpedo[];
extern const s8 Cry_Zangoose[];
extern const s8 Cry_Azurill[];
extern const s8 Cry_Swablu[];
extern const s8 Cry_Altaria[];
extern const s8 Cry_Unused265[];
extern const s8 Cry_Taillow[];
extern const s8 Cry_Swellow[];
extern const s8 Cry_Unused268[];
extern const s8 Cry_Spinda[];
extern const s8 Cry_Torchic[];
extern const s8 Cry_Combusken[];
extern const s8 Cry_Blaziken[];
extern const s8 Cry_Treecko[];
extern const s8 Cry_Grovyle[];
extern const s8 Cry_Sceptile[];
extern const s8 Cry_Mudkip[];
extern const s8 Cry_Marshtomp[];
extern const s8 Cry_Swampert[];
extern const s8 Cry_Pelipper[];
extern const s8 Cry_Wingull[];
extern const s8 Cry_Banette[];
extern const s8 Cry_Shuppet[];
extern const s8 Cry_Lotad[];
extern const s8 Cry_Lombre[];
extern const s8 Cry_Ludicolo[];
extern const s8 Cry_Seedot[];
extern const s8 Cry_Nuzleaf[];
extern const s8 Cry_Shiftry[];
extern const s8 Cry_Carvanha[];
extern const s8 Cry_Wurmple[];
extern const s8 Cry_Silcoon[];
extern const s8 Cry_Beautifly[];
extern const s8 Cry_Cascoon[];
extern const s8 Cry_Dustox[];
extern const s8 Cry_Ralts[];
extern const s8 Cry_Kirlia[];
extern const s8 Cry_Gardevoir[];
extern const s8 Cry_Slakoth[];
extern const s8 Cry_Vigoroth[];
extern const s8 Cry_Slaking[];
extern const s8 Cry_Nincada[];
extern const s8 Cry_Ninjask[];
extern const s8 Cry_Shedinja[];
extern const s8 Cry_Makuhita[];
extern const s8 Cry_Hariyama[];
extern const s8 Cry_Nosepass[];
extern const s8 Cry_Glalie[];
extern const s8 Cry_Plusle[];
extern const s8 Cry_Minun[];
extern const s8 Cry_Surskit[];
extern const s8 Cry_Masquerain[];
extern const s8 Cry_Skitty[];
extern const s8 Cry_Delcatty[];
extern const s8 Cry_Gulpin[];
extern const s8 Cry_Swalot[];
extern const s8 Cry_Numel[];
extern const s8 Cry_Camerupt[];
extern const s8 Cry_Barboach[];
extern const s8 Cry_Whiscash[];
extern const s8 Cry_Corphish[];
extern const s8 Cry_Crawdaunt[];
extern const s8 Cry_Spoink[];
extern const s8 Cry_Grumpig[];
extern const s8 Cry_Trapinch[];
extern const s8 Cry_Vibrava[];
extern const s8 Cry_Flygon[];
extern const s8 Cry_Cacnea[];
extern const s8 Cry_Cacturne[];
extern const s8 Cry_Baltoy[];
extern const s8 Cry_Claydol[];
extern const s8 Cry_Lunatone[];
extern const s8 Cry_Solrock[];
extern const s8 Cry_Feebas[];
extern const s8 Cry_Milotic[];
extern const s8 Cry_Absol[];
extern const s8 Cry_Meditite[];
extern const s8 Cry_Medicham[];
extern const s8 Cry_Spheal[];
extern const s8 Cry_Sealeo[];
extern const s8 Cry_Walrein[];
extern const s8 Cry_Clamperl[];
extern const s8 Cry_Huntail[];
extern const s8 Cry_Gorebyss[];
extern const s8 Cry_Lileep[];
extern const s8 Cry_Cradily[];
extern const s8 Cry_Anorith[];
extern const s8 Cry_Armaldo[];
extern const s8 Cry_Beldum[];
extern const s8 Cry_Metang[];
extern const s8 Cry_Metagross[];
extern const s8 Cry_Bagon[];
extern const s8 Cry_Shelgon[];
extern const s8 Cry_Regirock[];
extern const s8 Cry_Regice[];
extern const s8 Cry_Registeel[];
extern const s8 Cry_Castform[];
extern const s8 Cry_Volbeat[];
extern const s8 Cry_Illumise[];
extern const s8 Cry_Poochyena[];
extern const s8 Cry_Mightyena[];
extern const s8 Cry_Dusclops[];
extern const s8 Cry_Sableye[];
extern const s8 Cry_Mawile[];
extern const s8 Cry_Aron[];
extern const s8 Cry_Lairon[];
extern const s8 Cry_Aggron[];
extern const s8 Cry_Relicanth[];
extern const s8 Cry_Luvdisc[];
extern const s8 Cry_Groudon[];
extern const s8 Cry_Kyogre[];
extern const s8 Cry_Rayquaza[];
extern const s8 Cry_Salamence[];
extern const s8 Cry_Breloom[];
extern const s8 Cry_Shroomish[];
extern const s8 Cry_Linoone[];
extern const s8 Cry_Tropius[];
extern const s8 Cry_Wailmer[];
extern const s8 Cry_Zigzagoon[];
extern const s8 Cry_Exploud[];
extern const s8 Cry_Loudred[];
extern const s8 Cry_Wailord[];
extern const s8 Cry_Whismur[];
extern const s8 Cry_Snorunt[];
extern const s8 Cry_Latios[];
extern const s8 Cry_Jirachi[];
extern const s8 Cry_Deoxys[];
extern const s8 Cry_Chimecho[];

extern const s8 DirectSoundWaveData_register_noise[];
extern const s8 DirectSoundWaveData_wave_77[];
extern const s8 DirectSoundWaveData_sc88pro_nylon_str_guitar[];
extern const s8 DirectSoundWaveData_sd90_special_scream_drive[];
extern const s8 DirectSoundWaveData_sc88pro_accordion_duplicate[];
extern const s8 DirectSoundWaveData_steinway_b_piano[];
extern const s8 DirectSoundWaveData_sd90_classical_overdrive_guitar[];
extern const s8 DirectSoundWaveData_sd90_classical_distortion_guitar_high[];
extern const s8 DirectSoundWaveData_sd90_classical_distortion_guitar_low[];
extern const s8 DirectSoundWaveData_sd90_classical_whistle[];
extern const s8 DirectSoundWaveData_sd90_classical_detuned_ep1_low[];
extern const s8 DirectSoundWaveData_sd90_classical_detuned_ep1_high[];
extern const s8 DirectSoundWaveData_sd90_enhanced_delay_shaku[];

extern const s8 ProgrammableWaveData_1[];
extern const s8 ProgrammableWaveData_2[];
extern const s8 ProgrammableWaveData_3[];
extern const s8 ProgrammableWaveData_4[];
extern const s8 ProgrammableWaveData_5[];
extern const s8 ProgrammableWaveData_6[];
extern const s8 ProgrammableWaveData_7[];
extern const s8 ProgrammableWaveData_8[];
extern const s8 ProgrammableWaveData_9[];
extern const s8 ProgrammableWaveData_10[];
extern const s8 ProgrammableWaveData_11[];

#endif // GUARD_VOICE_GROUPS_H
