int __thiscall sub_101AEA10(int this)
{
  int v2; // ecx
  unsigned int v3; // ecx
  int *v4; // eax
  unsigned int v5; // ecx
  int v6; // edi
  char *v7; // eax
  int v9; // eax
  const char *v10; // eax
  int v11; // eax

  sub_100E38F0((float *)this);
  v2 = *(_DWORD *)(this + 828);
  if ( v2 )
    return (*(int (__thiscall **)(int, int))(*(_DWORD *)v2 + 4))(v2, this + 800);
  v3 = *(_DWORD *)(this + 836);
  if ( v3 != -1
    && (v4 = &off_1061BE18[4 * (*(_DWORD *)(this + 836) & 0xFFF) + 1],
        v5 = v3 >> 12,
        off_1061BE18[4 * (*(_DWORD *)(this + 836) & 0xFFF) + 2] == v5)
    && *v4 )
  {
    if ( off_1061BE18[4 * (*(_DWORD *)(this + 836) & 0xFFF) + 2] == v5 )
      v6 = *(_DWORD *)(*v4 + 424);
    else
      v6 = MEMORY[0x1A8];
  }
  else
  {
    v7 = *(char **)(this + 832);
    if ( !v7 )
      v7 = (char *)String;
    v6 = sub_101B60F0(v7, this);
  }
  if ( !v6 )
    return sub_1025FAC0(this);
  if ( 150.0 == *(float *)(this + 840) )
  {
    v9 = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 68))(v6);
    if ( v9 )
    {
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)v9 + 340))(v9) )
      {
        v10 = *(const char **)(dword_106B31C8 + 60);
        if ( !v10 )
          v10 = String;
        if ( sub_10429530(v10, "d2_coast_01") )
          *(_BYTE *)(this + 845) = 1;
      }
    }
  }
  v11 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106BAFF4 + 116))(dword_106BAFF4, this + 800);
  *(_DWORD *)(this + 828) = v11;
  return (*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v11 + 8))(v11, v6, 0);
}
