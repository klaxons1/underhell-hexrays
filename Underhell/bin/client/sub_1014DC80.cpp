char *__thiscall sub_1014DC80(int this, int a2, char *Source)
{
  char *v4; // eax
  char *v5; // eax
  char *v6; // eax
  char *v7; // eax
  char *v8; // eax
  char *v9; // eax
  char *v10; // eax
  char *v11; // eax
  int v12; // eax
  int v13; // eax
  unsigned int i; // ebx
  int v15; // eax
  char *v16; // eax
  int *v17; // eax
  char *v18; // eax
  int *v19; // eax
  char *v20; // esi
  char *result; // eax
  char **v22; // edi
  int v23; // [esp+0h] [ebp-10h]
  int v24; // [esp+0h] [ebp-10h]

  *(_BYTE *)(this + 4) = 1;
  sub_102282F0((char *)(this + 104), Source, 0x50u);
  v4 = (char *)sub_1022B4C0("printname", (int)"!!! Missing printname on weapon");
  sub_102282F0((char *)(this + 184), v4, 0x50u);
  v5 = (char *)sub_1022B4C0("viewmodel", (int)Locale);
  sub_102282F0((char *)(this + 264), v5, 0x50u);
  v6 = (char *)sub_1022B4C0("playermodel", (int)Locale);
  sub_102282F0((char *)(this + 344), v6, 0x50u);
  v7 = (char *)sub_1022B4C0("anim_prefix", (int)Locale);
  sub_102282F0((char *)(this + 424), v7, 0x10u);
  *(_DWORD *)(this + 440) = sub_1022A800("bucket", 0);
  *(_DWORD *)(this + 444) = sub_1022A800("bucket_position", 0);
  *(_BYTE *)(this + 80) = sub_1022A800("OneHanded", 0) != 0;
  sub_1022A940("MeleeDelayedFire", 0.0);
  *(float *)(this + 88) = 0.0;
  sub_1022A940("MeleeRoF", 0.0);
  *(float *)(this + 92) = 0.0;
  sub_1022A940("MeleeRange", 32.0);
  *(float *)(this + 96) = 32.0;
  sub_1022A940("StaminaToDrain", 15.0);
  *(float *)(this + 100) = 15.0;
  v8 = (char *)sub_1022B4C0("PunchPitch", (int)Locale);
  *(_QWORD *)(this + 8) = sub_100DA3C0(v8);
  v9 = (char *)sub_1022B4C0("PunchYaw", (int)Locale);
  *(_QWORD *)(this + 16) = sub_100DA3C0(v9);
  v10 = (char *)sub_1022B4C0("SnapPitch", (int)Locale);
  *(_QWORD *)(this + 24) = sub_100DA3C0(v10);
  v11 = (char *)sub_1022B4C0("SnapYaw", (int)Locale);
  *(_QWORD *)(this + 32) = sub_100DA3C0(v11);
  sub_1022A940("CrouchRecoilMult", 1.0);
  *(float *)(this + 40) = 1.0;
  sub_1022A940("CrouchAccuracyMult", 1.0);
  *(float *)(this + 44) = 1.0;
  sub_1022A940("RunAccuracyMult", 1.0);
  *(float *)(this + 48) = 1.0;
  if ( sub_1022A6A0("ExpOffset", 0) )
  {
    sub_1022A940("x", 0.0);
    *(float *)(this + 56) = 0.0;
    sub_1022A940("y", 0.0);
    *(float *)(this + 60) = 0.0;
    sub_1022A940("z", 0.0);
    *(float *)(this + 64) = 0.0;
    sub_1022A940("xori", 0.0);
    *(float *)(this + 68) = 0.0;
    sub_1022A940("yori", 0.0);
    *(float *)(this + 72) = 0.0;
    sub_1022A940("zori", 0.0);
    *(float *)(this + 76) = 0.0;
    sub_1022A940("accuracy", 1.0);
    *(float *)(this + 84) = 1.0;
  }
  else
  {
    *(float *)(this + 56) = flt_10459240;
    *(_QWORD *)(this + 60) = qword_10459244;
    *(float *)(this + 68) = 0.0;
    *(float *)(this + 72) = 0.0;
    *(float *)(this + 76) = 0.0;
  }
  if ( sub_1022A6A0("UH_Weapon_Special", 0) )
    *(_DWORD *)(this + 52) = sub_1022A800("Penetration", 0);
  if ( *(_DWORD *)(dword_1043CA1C + 48) == 2 )
  {
    *(_DWORD *)(this + 440) = sub_1022A800("bucket_360", *(_DWORD *)(this + 440));
    *(_DWORD *)(this + 444) = sub_1022A800("bucket_position_360", *(_DWORD *)(this + 444));
  }
  *(_DWORD *)(this + 448) = sub_1022A800("clip_size", -1);
  v12 = sub_1022A800("clip2_size", -1);
  v23 = *(_DWORD *)(this + 448);
  *(_DWORD *)(this + 452) = v12;
  v13 = sub_1022A800("default_clip", v23);
  v24 = *(_DWORD *)(this + 452);
  *(_DWORD *)(this + 456) = v13;
  *(_DWORD *)(this + 460) = sub_1022A800("default_clip2", v24);
  *(_DWORD *)(this + 464) = sub_1022A800("weight", 0);
  *(_DWORD *)(this + 468) = sub_1022A800("rumble", -1);
  *(_DWORD *)(this + 476) = sub_1022A800("item_flags", 8);
  for ( i = 0; i < 16; i += 2 )
  {
    v15 = sub_1022A800((&off_103E83A0)[i], -1);
    if ( v15 )
    {
      if ( v15 == 1 )
        *(_DWORD *)(this + 476) |= dword_103E83A4[i];
    }
    else
    {
      *(_DWORD *)(this + 476) &= ~dword_103E83A4[i];
    }
  }
  *(_BYTE *)(this + 1876) = sub_1022A800("showusagehint", 0) != 0;
  *(_BYTE *)(this + 472) = sub_1022A800("autoswitchto", 1) != 0;
  *(_BYTE *)(this + 473) = sub_1022A800("autoswitchfrom", 1) != 0;
  *(_BYTE *)(this + 1833) = sub_1022A800("BuiltRightHanded", 1) != 0;
  *(_BYTE *)(this + 1834) = sub_1022A800("AllowFlipping", 1) != 0;
  *(_BYTE *)(this + 1832) = sub_1022A800("MeleeWeapon", 0) != 0;
  v16 = (char *)sub_1022B4C0("primary_ammo", (int)"None");
  if ( !strcmp("None", v16) )
    sub_102282F0((char *)(this + 480), (char *)Locale, 0x20u);
  else
    sub_102282F0((char *)(this + 480), v16, 0x20u);
  v17 = (int *)sub_101AB1E0();
  *(_DWORD *)(this + 1824) = sub_10007E50(v17, (char *)(this + 480));
  v18 = (char *)sub_1022B4C0("secondary_ammo", (int)"None");
  if ( !strcmp("None", v18) )
    sub_102282F0((char *)(this + 512), (char *)Locale, 0x20u);
  else
    sub_102282F0((char *)(this + 512), v18, 0x20u);
  v19 = (int *)sub_101AB1E0();
  *(_DWORD *)(this + 1828) = sub_10007E50(v19, (char *)(this + 512));
  v20 = (char *)(this + 544);
  memset(v20, 0, 0x500u);
  result = (char *)sub_1022A6A0("SoundData", 0);
  if ( result )
  {
    v22 = off_103E8360;
    do
    {
      result = (char *)sub_1022B4C0(*v22, (int)Locale);
      if ( result )
      {
        if ( *result )
          result = (char *)sub_102282F0(v20, result, 0x50u);
      }
      ++v22;
      v20 += 80;
    }
    while ( (int)v22 < (int)&off_103E83A0 );
  }
  return result;
}
