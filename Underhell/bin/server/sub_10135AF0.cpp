char __thiscall sub_10135AF0(int this, int a2)
{
  int v3; // eax
  _DWORD *v4; // esi
  unsigned int v5; // eax
  int v6; // ecx
  unsigned int v7; // ecx
  int *v8; // eax
  unsigned int v9; // ecx
  int v10; // eax
  int v11; // eax

  v3 = sub_10261B20();
  v4 = (_DWORD *)v3;
  if ( v3 )
  {
    v5 = *(_DWORD *)(v3 + 3512);
    if ( v5 == -1 || off_1061BE18[4 * (v4[878] & 0xFFF) + 2] != v5 >> 12 )
      v6 = 0;
    else
      v6 = off_1061BE18[4 * (v4[878] & 0xFFF) + 1];
    if ( v4 == (_DWORD *)v6 )
      sub_102DEE70(v4);
    v7 = v4[878];
    if ( v7 != -1 )
    {
      v8 = &off_1061BE18[4 * (v4[878] & 0xFFF) + 1];
      v9 = v7 >> 12;
      if ( off_1061BE18[4 * (v4[878] & 0xFFF) + 2] == v9 )
      {
        if ( *v8 )
        {
          v10 = off_1061BE18[4 * (v4[878] & 0xFFF) + 2] == v9 ? *v8 : 0;
          if ( *(char **)(v10 + 92) == "env_zoom" || sub_100D6240((_DWORD *)v10, "env_zoom") )
            sub_100F7FD0(v4);
        }
      }
    }
    LOBYTE(v3) = sub_100F8040((int)v4, this, *(_DWORD *)(this + 804), *(float *)(this + 800), 0);
    if ( *(int *)(this + 804) > 120 )
    {
      v3 = sub_101E7EA0(1);
      if ( v3 )
      {
        v3 = sub_100CF460(v4);
        if ( !v3 )
        {
          v11 = sub_101E7EA0(1);
          LOBYTE(v3) = (*(int (__thiscall **)(int, int))(*(_DWORD *)v11 + 860))(v11, 32);
          *(_BYTE *)(this + 808) = 1;
        }
      }
    }
  }
  return v3;
}
