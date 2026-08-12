int __thiscall sub_10021D80(int this)
{
  void *v2; // edi
  const char *v3; // eax
  _BYTE v5[4]; // [esp+8h] [ebp-4h] BYREF

  sub_10021CB0((_DWORD *)this);
  dword_10690428 = *(char **)sub_10162BE0(v5, "player_squad");
  v2 = *(void **)(this + 2900);
  if ( v2 && strcmp(*(const char **)(this + 2900), "0") )
    sub_10260680(v2, 0);
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)this + 1328))(this) )
  {
    sub_1023B8B0("AI_BaseNPC.SwishSound");
    sub_1023B8B0("AI_BaseNPC.BodyDrop_Heavy");
    sub_1023B8B0("AI_BaseNPC.BodyDrop_Light");
    sub_1023B8B0("AI_BaseNPC.SentenceStop");
    sub_1023B8B0("Player.Splat");
    sub_1023B8B0("Player.Headshot");
    sub_1023B8B0("Player.Helmet");
    sub_101543E0("blood_advisor_puncture_withdraw");
    sub_101543E0("impact_metal");
    sub_100E8220("models/gibs/headwound1.mdl");
    sub_101543E0("blood_zombie_split_spray");
    return sub_100CAEC0(this);
  }
  else
  {
    v3 = (const char *)sub_100D6390(this);
    DevMsg("ERROR: Rejecting spawn of %s as error in NPC's schedules.\n", v3);
    return sub_1025FAC0(this);
  }
}
