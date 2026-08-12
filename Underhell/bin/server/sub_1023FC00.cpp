char *__thiscall sub_1023FC00(int this)
{
  char *v2; // eax
  _DWORD *v3; // eax
  int v4; // eax
  unsigned int v5; // ecx
  int *v6; // eax
  unsigned int v7; // ecx
  int v8; // eax
  unsigned int v9; // edi
  _DWORD *v10; // eax
  unsigned int v11; // ecx
  int v12; // ecx
  unsigned int v13; // ecx
  int v14; // ecx
  unsigned int v15; // ecx
  int v16; // ecx
  unsigned int v17; // ecx
  int v18; // ecx
  const char *v20; // eax

  v2 = *(char **)(this + 900);
  if ( v2 )
  {
    v3 = sub_1012BF20(&dword_1069E3E0, 0, v2, 0, 0, 0, 0);
    if ( v3 )
    {
      v4 = __RTDynamicCast(
             (int)v3,
             0,
             (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
             (int)&CEnvSoundscape `RTTI Type Descriptor',
             0);
      if ( v4 )
        *(_DWORD *)(this + 868) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v4 + 8))(v4);
      else
        *(_DWORD *)(this + 868) = -1;
    }
  }
  v5 = *(_DWORD *)(this + 868);
  if ( v5 != -1
    && (v6 = &off_1061BE18[4 * (*(_DWORD *)(this + 868) & 0xFFF) + 1],
        v7 = v5 >> 12,
        off_1061BE18[4 * (*(_DWORD *)(this + 868) & 0xFFF) + 2] == v7)
    && *v6 )
  {
    if ( off_1061BE18[4 * (*(_DWORD *)(this + 868) & 0xFFF) + 2] == v7 )
      v8 = *v6;
    else
      v8 = 0;
    *(_DWORD *)(this + 832) = *(_DWORD *)(v8 + 832);
    v9 = 840;
    v10 = (_DWORD *)(this + 840);
    do
    {
      v11 = *(_DWORD *)(this + 868);
      if ( v11 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 868) & 0xFFF) + 2] != v11 >> 12 )
        v12 = 0;
      else
        v12 = off_1061BE18[4 * (*(_DWORD *)(this + 868) & 0xFFF) + 1];
      *(v10 - 1) = *(_DWORD *)((char *)v10 + v12 - this - 4);
      v13 = *(_DWORD *)(this + 868);
      if ( v13 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 868) & 0xFFF) + 2] != v13 >> 12 )
        v14 = 0;
      else
        v14 = off_1061BE18[4 * (*(_DWORD *)(this + 868) & 0xFFF) + 1];
      *v10 = *(_DWORD *)(v9 + v14);
      v15 = *(_DWORD *)(this + 868);
      if ( v15 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 868) & 0xFFF) + 2] != v15 >> 12 )
        v16 = 0;
      else
        v16 = off_1061BE18[4 * (*(_DWORD *)(this + 868) & 0xFFF) + 1];
      v10[1] = *(_DWORD *)((char *)v10 + 4 - this + v16);
      v17 = *(_DWORD *)(this + 868);
      if ( v17 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 868) & 0xFFF) + 2] != v17 >> 12 )
        v18 = 0;
      else
        v18 = off_1061BE18[4 * (*(_DWORD *)(this + 868) & 0xFFF) + 1];
      v10[2] = *(_DWORD *)((char *)v10 + 8 - this + v18);
      v9 += 16;
      v10 += 4;
    }
    while ( v9 < 0x368 );
    return sub_100E38F0((float *)this);
  }
  else
  {
    v20 = *(const char **)(this + 900);
    if ( !v20 )
      v20 = String;
    Warning("env_soundscape_proxy can't find target soundscape: '%s'\n", v20);
    return sub_100E38F0((float *)this);
  }
}
