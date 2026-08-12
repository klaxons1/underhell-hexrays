bool __thiscall sub_100A2940(int this, char *String1, int a3, int a4)
{
  double v7; // st7
  __int16 v8; // ax
  char v9; // cl
  int v10; // edx
  const char *v11; // eax
  const char *v12; // eax
  const char *v13; // eax
  const char *v14; // eax
  char *v15; // [esp+8h] [ebp-8h] BYREF
  int v16; // [esp+1Ch] [ebp+Ch]

  if ( (*(_BYTE *)(a3 + 8) & 1) == 0 )
    return 0;
  v7 = atof(String1);
  *(float *)&v16 = v7;
  if ( *String1 == 91 )
  {
    v15 = String1;
    v8 = sub_1009D560((_WORD *)(this + 88), (int)&v15);
    if ( v8 == -1 )
      v7 = 0.0;
    else
      v7 = *(float *)(16 * v8 + *(_DWORD *)(this + 92) + 12);
    *(float *)&v16 = v7;
  }
  v9 = *(_BYTE *)(a3 + 8);
  v10 = 0;
  if ( (v9 & 8) != 0 )
  {
    if ( (v9 & 0x10) != 0 )
    {
      if ( v7 < *(float *)(a3 + 4) )
        return 0;
    }
    else if ( v7 <= *(float *)(a3 + 4) )
    {
      return 0;
    }
    v10 = 1;
  }
  if ( (v9 & 0x20) != 0 )
  {
    if ( (v9 & 0x40) != 0 )
    {
      if ( v7 > *(float *)a3 )
        return 0;
    }
    else if ( v7 >= *(float *)a3 )
    {
      return 0;
    }
    ++v10;
  }
  if ( v10 >= 1 )
    return 1;
  if ( (v9 & 4) != 0 )
  {
    if ( (v9 & 2) != 0 )
    {
      v11 = sub_1009A6C0(a3);
      if ( *(float *)&v16 == atof(v11) )
        return 0;
    }
    else
    {
      v12 = sub_1009A6C0(a3);
      if ( !_stricmp(String1, v12) )
        return 0;
    }
    return 1;
  }
  if ( (v9 & 2) != 0 )
  {
    if ( !*String1 )
      return 0;
    v13 = sub_1009A6C0(a3);
    return *(float *)&v16 == atof(v13);
  }
  else
  {
    v14 = sub_1009A6C0(a3);
    return _stricmp(String1, v14) == 0;
  }
}
