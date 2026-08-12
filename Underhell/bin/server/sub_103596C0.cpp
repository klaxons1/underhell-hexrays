int __thiscall sub_103596C0(int this)
{
  const char *v2; // edi
  const char *v3; // eax
  bool v4; // zf
  signed int v5; // eax
  bool v7; // zf
  signed int v8; // eax
  _BYTE v9[4]; // [esp+Ch] [ebp-4h] BYREF

  v2 = *(const char **)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)this + 28))(this, v9);
  if ( !v2 )
    v2 = String;
  if ( !_stricmp(v2, "models/combine_super_soldier.mdl") )
  {
    *(_BYTE *)(this + 5012) = 0;
    *(_BYTE *)(this + 4960) = 1;
  }
  else
  {
    *(_BYTE *)(this + 4960) = 0;
  }
  if ( !_stricmp(v2, "models/combine_soldier_prisonguard.mdl") )
  {
    *(_BYTE *)(this + 4976) = 1;
  }
  else if ( !_stricmp(v2, "models/pmc.mdl") )
  {
    *(_BYTE *)(this + 4977) = 1;
  }
  if ( !*(_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)this + 28))(this, v9) )
  {
    *(_DWORD *)(this + 460) = "models/combine_soldier.mdl";
    sub_100D8500((_DWORD *)this);
  }
  v3 = *(const char **)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)this + 28))(this, v9);
  if ( !v3 )
    v3 = String;
  sub_100E8220((int)String, v3);
  sub_100E8220((int)String, "models/gibs/bodyparts/soldier/leftarm.mdl");
  sub_100E8220((int)String, "models/gibs/bodyparts/soldier/rightarm.mdl");
  sub_100E8220((int)String, "models/gibs/bodyparts/soldier/leftleg.mdl");
  sub_100E8220((int)String, "models/gibs/bodyparts/soldier/leftleg2.mdl");
  sub_100E8220((int)String, "models/gibs/bodyparts/soldier/rightleg.mdl");
  sub_100E8220((int)String, "models/gibs/bodyparts/soldier/rightleg2.mdl");
  sub_10260680("item_healthvial", 0);
  sub_10260680("weapon_frag", 0);
  sub_10260680("item_ammo_ar2_altfire", 0);
  if ( *(_BYTE *)(this + 4976) )
  {
    sub_100E8220((int)String, "models/gibs/bodyparts/soldier_prisonguard/leftarm.mdl");
    sub_100E8220((int)String, "models/gibs/bodyparts/soldier_prisonguard/rightarm.mdl");
    sub_100E8220((int)String, "models/gibs/bodyparts/soldier_prisonguard/leftleg.mdl");
    sub_100E8220((int)String, "models/gibs/bodyparts/soldier_prisonguard/rightleg.mdl");
    *(_DWORD *)(this + 812) = String;
    *(_DWORD *)(this + 816) = "models/gibs/bodyparts/soldier_prisonguard/leftarm.mdl";
    *(_DWORD *)(this + 820) = "models/gibs/bodyparts/soldier_prisonguard/rightarm.mdl";
    v5 = sub_10219A30() & 0x80000001;
    v4 = v5 == 0;
    if ( v5 < 0 )
      v4 = (((_BYTE)v5 - 1) | 0xFFFFFFFE) == -1;
    if ( v4 )
    {
      *(_DWORD *)(this + 5008) = 4;
      *(_DWORD *)(this + 824) = "models/gibs/bodyparts/soldier/leftleg2.mdl";
      *(_DWORD *)(this + 828) = "models/gibs/bodyparts/soldier/rightleg2.mdl";
      *(_DWORD *)(this + 1728) *= 2;
      *(_DWORD *)(this + 1732) *= 2;
    }
    else
    {
      *(_DWORD *)(this + 5008) = 0;
      *(_DWORD *)(this + 824) = "models/gibs/bodyparts/soldier_prisonguard/leftleg.mdl";
      *(_DWORD *)(this + 828) = "models/gibs/bodyparts/soldier_prisonguard/rightleg.mdl";
    }
    return sub_1033CB80((_DWORD *)this, (int)String);
  }
  if ( !*(_BYTE *)(this + 4977) )
  {
    *(_DWORD *)(this + 812) = String;
    *(_DWORD *)(this + 816) = "models/gibs/bodyparts/soldier/leftarm.mdl";
    *(_DWORD *)(this + 820) = "models/gibs/bodyparts/soldier/rightarm.mdl";
    v8 = sub_10219A30() & 0x80000001;
    v7 = v8 == 0;
    if ( v8 < 0 )
      v7 = (((_BYTE)v8 - 1) | 0xFFFFFFFE) == -1;
    if ( v7 )
    {
      *(_DWORD *)(this + 5008) = 4;
      *(_DWORD *)(this + 824) = "models/gibs/bodyparts/soldier/leftleg2.mdl";
      *(_DWORD *)(this + 828) = "models/gibs/bodyparts/soldier/rightleg2.mdl";
      *(_DWORD *)(this + 1728) *= 2;
      *(_DWORD *)(this + 1732) *= 2;
    }
    else
    {
      *(_DWORD *)(this + 5008) = 0;
      *(_DWORD *)(this + 824) = "models/gibs/bodyparts/soldier/leftleg.mdl";
      *(_DWORD *)(this + 828) = "models/gibs/bodyparts/soldier/rightleg.mdl";
    }
    return sub_1033CB80((_DWORD *)this, (int)String);
  }
  sub_100E8220((int)String, "models/gibs/bodyparts/pmc/pmc_leftarm.mdl");
  sub_100E8220((int)String, "models/gibs/bodyparts/pmc/pmc_rightarm.mdl");
  sub_100E8220((int)String, "models/gibs/bodyparts/pmc/pmc_leftleg.mdl");
  sub_100E8220((int)String, "models/gibs/bodyparts/pmc/pmc_rightleg.mdl");
  *(_DWORD *)(this + 812) = String;
  *(_DWORD *)(this + 816) = "models/gibs/bodyparts/pmc/pmc_leftarm.mdl";
  *(_DWORD *)(this + 820) = "models/gibs/bodyparts/pmc/pmc_rightarm.mdl";
  *(_DWORD *)(this + 824) = "models/gibs/bodyparts/pmc/pmc_leftleg.mdl";
  *(_DWORD *)(this + 828) = "models/gibs/bodyparts/pmc/pmc_rightleg.mdl";
  return sub_1033CB80((_DWORD *)this, (int)String);
}
