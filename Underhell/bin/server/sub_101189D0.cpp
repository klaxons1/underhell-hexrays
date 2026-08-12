void __thiscall sub_101189D0(int this)
{
  int v2; // ebx
  int *v3; // ecx
  char *v4; // eax
  int v5; // eax
  unsigned int v6; // eax
  const char *v7; // eax
  const char *v8; // edi
  const char *v9; // eax
  char *v10; // eax
  int v11; // eax
  int v12; // ebx
  int *v13; // ecx
  unsigned int v14; // eax
  const char *v15; // eax
  const char *v16; // edi
  const char *v17; // eax
  const char *v18; // [esp-4h] [ebp-10h]
  const char *v19; // [esp-4h] [ebp-10h]

  v2 = dword_1069C018;
  if ( *(_DWORD *)(this + 1284) != dword_1069C018 )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v3 = *(int **)(this + 24);
      if ( v3 )
        sub_100194B0(v3, 1284);
    }
    *(_DWORD *)(this + 1284) = v2;
  }
  v4 = *(char **)(this + 1136);
  if ( v4 )
  {
    v5 = sub_1012BF20(0, v4, 0, 0, 0, 0);
    *(_DWORD *)(this + 1140) = v5 ? *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v5 + 8))(v5) : -1;
    v6 = *(_DWORD *)(this + 1140);
    if ( v6 == -1
      || off_1061BE18[4 * (*(_DWORD *)(this + 1140) & 0xFFF) + 2] != v6 >> 12
      || !off_1061BE18[4 * (*(_DWORD *)(this + 1140) & 0xFFF) + 1] )
    {
      v7 = *(const char **)(this + 1136);
      if ( !v7 )
        v7 = String;
      v8 = *(const char **)(this + 92);
      if ( !v8 )
        v8 = String;
      v18 = v7;
      v9 = sub_100D6390((_DWORD *)this);
      Warning("%s: %s could not find viewtarget %s.\n", v8, v9, v18);
    }
  }
  v10 = *(char **)(this + 1148);
  if ( v10 )
  {
    v11 = sub_1012BF20(0, v10, 0, 0, 0, 0);
    if ( v11 )
      v12 = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v11 + 8))(v11);
    else
      v12 = -1;
    if ( *(_DWORD *)(this + 1152) != v12 )
    {
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
      }
      else
      {
        v13 = *(int **)(this + 24);
        if ( v13 )
          sub_100194B0(v13, 1152);
      }
      *(_DWORD *)(this + 1152) = v12;
    }
    v14 = *(_DWORD *)(this + 1152);
    if ( v14 == -1
      || off_1061BE18[4 * (*(_DWORD *)(this + 1152) & 0xFFF) + 2] != v14 >> 12
      || !off_1061BE18[4 * (*(_DWORD *)(this + 1152) & 0xFFF) + 1] )
    {
      v15 = *(const char **)(this + 1148);
      if ( !v15 )
        v15 = String;
      v16 = *(const char **)(this + 92);
      if ( !v16 )
        v16 = String;
      v19 = v15;
      v17 = sub_100D6390((_DWORD *)this);
      Warning("%s: %s could not find viewposition %s.\n", v16, v17, v19);
    }
  }
  sub_100BDBA0(this);
}
