// This needs to be re-ordered when TAG_MAJOR_VERSION changes!
static const vector<spell_type> spellbook_templates[] =
{

{   // Book of Minor Magic
    SPELL_MAGIC_DART,
    SPELL_BLINK,
    SPELL_PASSWALL,
    SPELL_SLOW,
    SPELL_SUBLIMATION_OF_BLOOD,
    SPELL_CONJURE_FLAME,
},

#if TAG_MAJOR_VERSION == 34
{   // Book of Conjurations
    SPELL_SANDBLAST,
    SPELL_SEARING_RAY,
    SPELL_DISCHARGE,
    SPELL_THROW_ICICLE,
    SPELL_BATTLESPHERE,
},
#endif

{   // Book of Flames
    SPELL_FLAME_TONGUE,
    SPELL_SEARING_RAY,
    SPELL_CONJURE_FLAME,
    SPELL_INNER_FLAME,
    SPELL_STICKY_FLAME,
    SPELL_FIREBALL,
},

{   // Book of Frost
    SPELL_FREEZE,
    SPELL_THROW_FROST,
    SPELL_OZOCUBUS_ARMOUR,
    SPELL_THROW_ICICLE,
    SPELL_SUMMON_ICE_BEAST,
},

{   // Book of Summonings
    SPELL_RECALL,
    SPELL_AURA_OF_ABJURATION,
    SPELL_SUMMON_DEMON,
    SPELL_SUMMON_FOREST,
},

{   // Book of Fire
    SPELL_IGNITE_POISON,
    SPELL_FIREBALL,
    SPELL_BOLT_OF_FIRE,
    SPELL_RING_OF_FLAMES,
    SPELL_IGNITION,
},

{   // Book of Ice
    SPELL_ICE_FORM,
    SPELL_ENGLACIATION,
    SPELL_OZOCUBUS_REFRIGERATION,
    SPELL_FREEZING_CLOUD,
},

{   // Book of Spatial Translocations
    SPELL_BLINK,
    SPELL_BECKONING,
    SPELL_TELEPORT_OTHER,
    SPELL_GOLUBRIAS_PASSAGE,
},

{   // Book of Enchantments
    SPELL_CAUSE_FEAR,
    SPELL_SILENCE,
    SPELL_VIOLENT_UNRAVELLING,
    SPELL_DEFLECT_MISSILES,
    SPELL_DISCORD,
    SPELL_HASTE,
},

#if TAG_MAJOR_VERSION == 34
{   // Young Poisoner's Handbook
    SPELL_MEPHITIC_CLOUD,
    SPELL_OLGREBS_TOXIC_RADIANCE,
    SPELL_INTOXICATE,
},
#endif

{   // Book of the Tempests
    SPELL_DISCHARGE,
    SPELL_FULMINANT_PRISM,
    SPELL_IGNITION,
    SPELL_TORNADO,
    SPELL_SHATTER,
},

{   // Book of Death
    SPELL_SUBLIMATION_OF_BLOOD,
    SPELL_AGONY,
    SPELL_DISPEL_UNDEAD,
    SPELL_EXCRUCIATING_WOUNDS,
    SPELL_BOLT_OF_DRAINING,
},

{   // Book of Misfortune
    SPELL_CONFUSING_TOUCH,
    SPELL_CONFUSE,
    SPELL_GRAVITAS,
    SPELL_PETRIFY,
    SPELL_ENGLACIATION,
    SPELL_VIOLENT_UNRAVELLING,
},

{   // Book of Changes
    SPELL_BEASTLY_APPENDAGE,
    SPELL_STICKS_TO_SNAKES,
    SPELL_SPIDER_FORM,
    SPELL_ICE_FORM,
    SPELL_BLADE_HANDS,
},

{   // Book of Transfigurations
    SPELL_IRRADIATE,
    SPELL_STATUE_FORM,
    SPELL_HYDRA_FORM,
    SPELL_DRAGON_FORM,
},

{   // Fen Folio
    SPELL_LEDAS_LIQUEFACTION,
    SPELL_OLGREBS_TOXIC_RADIANCE,
    SPELL_SUMMON_FOREST,
    SPELL_HYDRA_FORM,
},

#if TAG_MAJOR_VERSION > 34
{   // Book of Battle
    SPELL_INFUSION,
    SPELL_SONG_OF_SLAYING,
    SPELL_REGENERATION,
    SPELL_OZOCUBUS_ARMOUR,
    SPELL_SPECTRAL_WEAPON,
},
#endif
{   // Book of Clouds
    SPELL_CONJURE_FLAME,
    SPELL_MEPHITIC_CLOUD,
    SPELL_FREEZING_CLOUD,
    SPELL_RING_OF_FLAMES,
},

{   // Book of Necromancy
    SPELL_PAIN,
    SPELL_VAMPIRIC_DRAINING,
    SPELL_REGENERATION,
    SPELL_ANIMATE_DEAD,
    SPELL_CONTROL_UNDEAD,
},

{   // Book of Callings
    SPELL_SUMMON_SMALL_MAMMAL,
    SPELL_CALL_IMP,
    SPELL_SUMMON_GUARDIAN_GOLEM,
    SPELL_SUMMON_ICE_BEAST,
},

{   // Book of Maledictions
    SPELL_CORONA,
    SPELL_HIBERNATION,
    SPELL_CONFUSE,
    SPELL_TUKIMAS_DANCE,
    SPELL_DAZZLING_SPRAY,
},

{   // Book of Air
    SPELL_MAGIC_DART,
    SPELL_SWIFTNESS,
    SPELL_REPEL_MISSILES,
    SPELL_DISCHARGE,
	SPELL_MEPHITIC_CLOUD,
    SPELL_FULMINANT_PRISM,
},

{   // Book of the Sky
    SPELL_AIRSTRIKE,
    SPELL_SILENCE,
    SPELL_DEFLECT_MISSILES,
    SPELL_CONJURE_BALL_LIGHTNING,
    SPELL_TORNADO,
},

{   // Book of the Warp
    SPELL_GRAVITAS,
    SPELL_FORCE_LANCE,
    SPELL_SUMMON_FOREST,
    SPELL_DISPERSAL,
    SPELL_CONTROLLED_BLINK,
    SPELL_DISJUNCTION,
},

#if TAG_MAJOR_VERSION == 34
{   // Book of Envenomations
    SPELL_SPIDER_FORM,
    SPELL_OLGREBS_TOXIC_RADIANCE,
    SPELL_INTOXICATE,
},
#endif

{   // Book of Unlife
    SPELL_RECALL,
    SPELL_ANIMATE_DEAD,
    SPELL_CONTROL_UNDEAD,
    SPELL_CIGOTUVIS_EMBRACE,
    SPELL_DEATH_CHANNEL,
},

#if TAG_MAJOR_VERSION == 34
{   // Book of Control
    SPELL_CONTROL_UNDEAD,
    SPELL_ENGLACIATION,
},

{   // Book of Battle (replacing Morphology)
    SPELL_INFUSION,
    SPELL_SONG_OF_SLAYING,
    SPELL_REGENERATION,
    SPELL_OZOCUBUS_ARMOUR,
    SPELL_SPECTRAL_WEAPON,
},
#endif

{   // Book of Geomancy
    SPELL_SANDBLAST,
    SPELL_PASSWALL,
    SPELL_FORCE_LANCE,
    SPELL_PETRIFY,
    SPELL_LRD,
},

{   // Book of Earth
    SPELL_LEDAS_LIQUEFACTION,
    SPELL_STATUE_FORM,
    SPELL_IRON_SHOT,
    SPELL_IOOD,
    SPELL_SHATTER,
},

#if TAG_MAJOR_VERSION == 34
{   // Book of Wizardry
    SPELL_FORCE_LANCE,
    SPELL_AGONY,
    SPELL_INVISIBILITY,
    SPELL_SPELLFORGED_SERVITOR,
    SPELL_HASTE,
},
#endif

{   // Book of Power
    SPELL_FULMINANT_PRISM,
    SPELL_BATTLESPHERE,
    SPELL_BOLT_OF_FIRE,
    SPELL_OZOCUBUS_REFRIGERATION,
    SPELL_IOOD,
    SPELL_SPELLFORGED_SERVITOR,
},

{   // Book of Cantrips
    SPELL_CONFUSING_TOUCH,
    SPELL_INFUSION,
    SPELL_SUMMON_SMALL_MAMMAL,
    SPELL_APPORTATION,
},

{   // Book of Party Tricks
    SPELL_APPORTATION,
    SPELL_BECKONING,
    SPELL_TUKIMAS_DANCE,
    SPELL_INTOXICATE,
    SPELL_INVISIBILITY
},

#if TAG_MAJOR_VERSION == 34
{   // Akashic Record
    SPELL_DISPERSAL,
    SPELL_MALIGN_GATEWAY,
    SPELL_DISJUNCTION,
    SPELL_CONTROLLED_BLINK,
},
#endif

{   // Book of Arcane Marksmanship
    SPELL_CORONA,
    SPELL_SLOW,
    SPELL_BLINK,
    SPELL_PORTAL_PROJECTILE,
    SPELL_CAUSE_FEAR,
    SPELL_LEDAS_LIQUEFACTION,
},

{   // Book of the Dragon
    SPELL_SEARING_RAY,
    SPELL_CAUSE_FEAR,
    SPELL_BOLT_OF_FIRE,
    SPELL_DRAGON_FORM,
    SPELL_DRAGON_CALL,
},

{   // Book of Burglary
    SPELL_SWIFTNESS,
    SPELL_PASSWALL,
    SPELL_GOLUBRIAS_PASSAGE,
    SPELL_LRD,
    SPELL_DARKNESS,
    SPELL_INVISIBILITY,
},

{   // Book of Dreams
    SPELL_HIBERNATION,
    SPELL_SILENCE,
    SPELL_DARKNESS,
},

{   // Book of Alchemy
    SPELL_SUBLIMATION_OF_BLOOD,
    SPELL_IGNITE_POISON,
    SPELL_PETRIFY,
    SPELL_INTOXICATE,
    SPELL_IRRADIATE,
},

{   // Book of Beasts
    SPELL_SUMMON_ICE_BEAST,
},

{   // Book of Annihilations
    SPELL_IOOD,
    SPELL_CHAIN_LIGHTNING,
    SPELL_GLACIATE,
    SPELL_FIRE_STORM,
},

{   // Grand Grimoire
    SPELL_SUMMON_GREATER_DEMON,
    SPELL_MALIGN_GATEWAY,
    SPELL_SUMMON_HORRIBLE_THINGS,
},

{   // Necronomicon
    SPELL_HAUNT,
    SPELL_BORGNJORS_REVIVIFICATION,
    SPELL_DEATHS_DOOR,
    SPELL_INFESTATION,
    SPELL_NECROMUTATION,
},

};

COMPILE_CHECK(ARRAYSZ(spellbook_templates) == 1 + MAX_FIXED_BOOK);
