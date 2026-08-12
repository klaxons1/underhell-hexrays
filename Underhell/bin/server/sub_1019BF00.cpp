int __thiscall sub_1019BF00(_DWORD *this, char a2)
{
  int v3; // eax
  char *v4; // eax
  int *v5; // eax
  int *v6; // edi
  float v7; // ecx
  int v8; // edx
  int v9; // eax
  int v11[3]; // [esp+2Ch] [ebp-18h] BYREF
  int v12; // [esp+38h] [ebp-Ch] BYREF
  float v13; // [esp+3Ch] [ebp-8h]
  int v14; // [esp+40h] [ebp-4h] BYREF

  v3 = (*(int (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)dword_106B31F8 + 24))(
         dword_106B31F8,
         "nav_generate",
         0);
  if ( v3 )
    (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)dword_106B31F8 + 28))(dword_106B31F8, v3, 0);
  (*(void (__thiscall **)(int, const char *))(*(_DWORD *)dword_106B31D0 + 144))(dword_106B31D0, "bot_kick\n");
  if ( a2 )
    sub_10110F90(&dword_106B83D8);
  flt_106B82B4 = 0.0;
  this[309] = 0;
  this[312] = 0;
  this[310] = (a2 != 0) + 1;
  sub_1019F0B0(a2);
  this[267] = 0;
  if ( !a2 )
    sub_1019BE60();
  v4 = (char *)this[313];
  if ( !v4 )
    v4 = "info_player_start";
  v5 = sub_1012BC90(&dword_1069E3E0, 0, v4);
  v6 = v5;
  if ( !v5 || a2 )
  {
    this[298] = 0;
  }
  else
  {
    if ( (v5[63] & 0x800) != 0 )
      sub_100DAE60((int)v5);
    v7 = *((float *)v6 + 146);
    v8 = v6[147];
    v12 = v6[145];
    v13 = v7;
    v14 = v8;
    *(float *)&v12 = sub_10192230(*(float *)&v12, 0);
    v13 = sub_10192230(v13, 0);
    if ( (unsigned __int8)sub_1019DEA0(&v12, &v14, v11) )
    {
      v9 = sub_10184390(72);
      if ( v9 )
        this[298] = sub_101A0980(v9, (int)&v12, (int)v11, 0);
      else
        this[298] = 0;
    }
  }
  if ( this[320] || this[298] )
  {
    this[323] = this[317];
    return Msg("Generating Navigation Mesh...\n");
  }
  else
  {
    this[310] = 0;
    return Msg("No valid walkable seed positions.  Cannot generate Navigation Mesh.\n");
  }
}
