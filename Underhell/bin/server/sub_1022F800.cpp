int __thiscall sub_1022F800(int this)
{
  unsigned int v2; // eax
  int *v3; // ecx
  unsigned int v4; // eax
  _DWORD *v5; // ebx
  char *v6; // edx
  unsigned int v7; // eax
  int v8; // eax
  char *v9; // edx
  unsigned int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // edi
  int v14; // eax
  const char *v15; // eax
  unsigned int v16; // eax
  char *v17; // eax
  _DWORD *v18; // eax
  char *v19; // eax
  int result; // eax
  const char *v21; // edi
  const char *v22; // eax
  const char *v23; // [esp+18h] [ebp-1Ch]
  int v24; // [esp+2Ch] [ebp-8h]
  int v25; // [esp+30h] [ebp-4h]

  v2 = *(_DWORD *)(this + 896);
  v24 = 0;
  if ( v2 != -1 )
  {
    v3 = &off_1061BE18[4 * (*(_DWORD *)(this + 896) & 0xFFF) + 1];
    v4 = v2 >> 12;
    if ( v3[1] == v4 )
    {
      if ( *v3 )
      {
        v25 = 1;
        if ( v3[1] == v4 )
          v5 = (_DWORD *)*v3;
        else
          v5 = 0;
        goto LABEL_25;
      }
    }
  }
  v25 = 1;
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  v6 = *(char **)(this + 824);
  if ( !v6 )
    v6 = (char *)String;
  v7 = *(_DWORD *)(this + 892);
  if ( v7 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 892) & 0xFFF) + 2] != v7 >> 12 )
    v8 = 0;
  else
    v8 = off_1061BE18[4 * (*(_DWORD *)(this + 892) & 0xFFF) + 1];
  v5 = sub_1012C1F0(v8, v6, (float *)(this + 580), *(float *)(this + 840), 0, 0, 0, 0);
  if ( !v5 )
  {
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    v9 = *(char **)(this + 824);
    if ( !v9 )
      v9 = (char *)String;
    v10 = *(_DWORD *)(this + 892);
    if ( v10 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 892) & 0xFFF) + 2] != v10 >> 12 )
      v11 = 0;
    else
      v11 = off_1061BE18[4 * (*(_DWORD *)(this + 892) & 0xFFF) + 1];
    v5 = sub_1012C480(v11, v9, (float *)(this + 580), *(float *)(this + 840), 0);
    v25 = 0;
LABEL_25:
    if ( v5 )
      goto LABEL_26;
    return 0;
  }
  do
  {
LABEL_26:
    v12 = sub_100D7680((int)v5);
    v13 = v12;
    if ( v12 )
    {
      v14 = (*(int (__thiscall **)(int, bool, int))(*(_DWORD *)v12 + 1588))(
              v12,
              (*(_BYTE *)(this + 248) & 0x40) != 0,
              v25);
      if ( v14 == 1 )
        return v13;
      if ( v14 == 2 )
      {
        v24 = v13;
      }
      else if ( (*(_DWORD *)(this + 248) & 0x800) == 0 )
      {
        v15 = *(const char **)(this + 824);
        if ( !v15 )
          v15 = String;
        DevMsg("Found %s, but can't play!\n", v15);
      }
    }
    v16 = *(_DWORD *)(this + 896);
    if ( v16 != -1
      && off_1061BE18[4 * (*(_DWORD *)(this + 896) & 0xFFF) + 2] == v16 >> 12
      && off_1061BE18[4 * (*(_DWORD *)(this + 896) & 0xFFF) + 1] )
    {
      v21 = (const char *)v5[23];
      if ( !v21 )
        v21 = String;
      v23 = sub_100D6390((_DWORD *)this);
      v22 = sub_100D6390(v5);
      Warning("Code forced %s(%s), to be the target of scripted sequence %s, but it can't play it.\n", v21, v22, v23);
      sub_1025FAC0(this);
      return 0;
    }
    if ( v25 == 1 )
    {
      if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
        sub_100DAE60(this);
      v17 = *(char **)(this + 824);
      if ( !v17 )
        v17 = (char *)String;
      v18 = sub_1012C1F0((int)v5, v17, (float *)(this + 580), *(float *)(this + 840), 0, 0, 0, 0);
    }
    else
    {
      if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
        sub_100DAE60(this);
      v19 = *(char **)(this + 824);
      if ( !v19 )
        v19 = (char *)String;
      v18 = sub_1012C480((int)v5, v19, (float *)(this + 580), *(float *)(this + 840), 0);
    }
    v5 = v18;
  }
  while ( v18 );
  result = v24;
  if ( v24 )
    return result;
  return 0;
}
