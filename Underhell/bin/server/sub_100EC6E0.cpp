void __thiscall sub_100EC6E0(int this, int a2)
{
  unsigned int v3; // eax
  const char *v4; // edi
  const char *v5; // eax
  int v6; // edx
  int v7; // eax
  const char *v8; // eax
  int i; // esi
  double v10; // st7
  float v11[3]; // [esp+18h] [ebp-24h] BYREF
  _DWORD v12[3]; // [esp+24h] [ebp-18h] BYREF
  float v13; // [esp+30h] [ebp-Ch] BYREF
  float v14; // [esp+34h] [ebp-8h]
  float v15; // [esp+38h] [ebp-4h]

  if ( *(_BYTE *)(this + 306) == 6 )
  {
    v3 = *(_DWORD *)(this + 308);
    if ( v3 != -1
      && off_1061BE18[4 * (*(_DWORD *)(this + 308) & 0xFFF) + 2] == v3 >> 12
      && off_1061BE18[4 * (*(_DWORD *)(this + 308) & 0xFFF) + 1] )
    {
      v4 = *(const char **)(this + 92);
      if ( !v4 )
        v4 = String;
      DevWarning("Updating physics on object in hierarchy %s!\n", v4);
    }
    else
    {
      (*(void (__thiscall **)(int, float *, float *))(*(_DWORD *)a2 + 188))(a2, v11, &v13);
      if ( (LODWORD(v13) & 0x7F800000) == 0x7F800000
        || (LODWORD(v14) & 0x7F800000) == 0x7F800000
        || (LODWORD(v13) & 0x7F800000) == 0x7F800000 )
      {
        v5 = sub_100D6390((_DWORD *)this);
        Msg("Infinite angles from vphysics! (entity %s)\n", v5);
        v13 = flt_106F1CB4;
        v14 = flt_106F1CB8;
        v15 = flt_106F1CBC;
      }
      if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
        sub_100DAE60(this);
      v6 = *(_DWORD *)(this + 580);
      v7 = *(_DWORD *)(this + 584);
      v12[2] = *(_DWORD *)(this + 588);
      v12[0] = v6;
      v12[1] = v7;
      if ( sub_100D5BE0(v11) )
      {
        sub_100E0D20(this, v11);
      }
      else
      {
        v8 = sub_100D6390((_DWORD *)this);
        Msg("Infinite origin from vphysics! (entity %s)\n", v8);
      }
      for ( i = 0; i < 3; ++i )
      {
        v10 = *(&v13 + i);
        sub_10424CA0(*(&v13 + i));
        *(&v13 + i) = v10;
      }
      sub_100E0EA0(this, &v13);
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2) && *(_DWORD *)(this + 420) == 3 )
        sub_100EBE30(this, 1);
      sub_100DCB50((void *)this, (int)v12);
      sub_100E0270((_DWORD *)this, *(float *)(dword_106B31C8 + 16));
    }
  }
  else if ( *(_BYTE *)(this + 306) == 7 )
  {
    sub_100E2260((float *)this, a2);
  }
}
