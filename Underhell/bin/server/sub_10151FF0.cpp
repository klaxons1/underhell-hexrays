int __thiscall sub_10151FF0(unsigned int this, unsigned int a2)
{
  unsigned int v3; // eax
  int *v4; // ecx
  unsigned int v5; // eax
  int v6; // ebx
  int *v7; // ecx
  int v8; // ecx
  unsigned int v9; // eax
  int v10; // esi
  int *v11; // edx
  unsigned int v12; // eax
  int v13; // ecx
  int v14; // edx
  int v15; // eax
  const char *v16; // ecx
  const char *v17; // eax

  v3 = *(_DWORD *)(this + 1248);
  if ( v3 != -1
    && (v4 = &off_1061BE18[4 * (*(_DWORD *)(this + 1248) & 0xFFF) + 1], v5 = v3 >> 12, v4[1] == v5)
    && (v6 = *v4) != 0 )
  {
    if ( (*(_BYTE *)(this + 248) & 0x20) != 0 )
    {
      if ( v4[1] == v5 )
        v7 = (int *)*v4;
      else
        v7 = 0;
      sub_100EA9A0(v7, 64);
    }
    if ( (*(_BYTE *)(this + 248) & 0x40) != 0 )
    {
      v8 = *(_DWORD *)(v6 + 2252);
      a2 = v8 & 0xFFFFFFFE;
      if ( v8 != (v8 & 0xFFFFFFFE) )
      {
        (**(void (__thiscall ***)(int, int))(v6 + 2192))(v6 + 2192, v6 + 2252);
        *(float *)(v6 + 2252) = *(float *)&a2;
      }
      v9 = *(_DWORD *)(this + 804);
      if ( v9 != -1 )
      {
        v10 = v9 >> 12;
        v11 = &off_1061BE18[4 * (*(_DWORD *)(this + 804) & 0xFFF) + 1];
        a2 = v9 >> 12;
        if ( off_1061BE18[4 * (v9 & 0xFFF) + 2] == v9 >> 12 )
        {
          if ( *v11 )
          {
            v12 = *(_DWORD *)(this + 1248);
            if ( v12 == -1 || (v10 = a2, off_1061BE18[4 * (*(_DWORD *)(this + 1248) & 0xFFF) + 2] != v12 >> 12) )
              v13 = 0;
            else
              v13 = off_1061BE18[4 * (*(_DWORD *)(this + 1248) & 0xFFF) + 1];
            if ( v11[1] == v10 )
              v14 = *v11;
            else
              v14 = 0;
            (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v13 + 964))(v13, v14, 0);
            *(_DWORD *)(this + 804) = -1;
          }
        }
      }
      if ( sub_100CF460((_DWORD *)v6) )
      {
        v15 = sub_100CF460((_DWORD *)v6);
        (*(void (__thiscall **)(int))(*(_DWORD *)v15 + 992))(v15);
      }
    }
    sub_1010DD80((_DWORD *)(this + 832), __SPAIR64__(this, v6), 0.0);
    *(float *)&a2 = 0.0;
    sub_1010C270((float *)(this + 1144), 1, (__int16 *)&a2);
    sub_1010DA50(
      (_DWORD *)(this + 1144),
      *(_DWORD *)(this + 1144),
      *(_DWORD *)(this + 1148),
      *(_DWORD *)(this + 1152),
      *(_DWORD *)(this + 1156),
      *(_DWORD *)(this + 1160),
      __SPAIR64__(this, v6),
      0.0);
    *(float *)&a2 = 0.0;
    sub_1010C270((float *)(this + 1168), 1, (__int16 *)&a2);
    sub_1010DA50(
      (_DWORD *)(this + 1168),
      *(_DWORD *)(this + 1168),
      *(_DWORD *)(this + 1172),
      *(_DWORD *)(this + 1176),
      *(_DWORD *)(this + 1180),
      *(_DWORD *)(this + 1184),
      __SPAIR64__(this, v6),
      0.0);
    *(float *)&a2 = 0.0;
    sub_1010C270((float *)(this + 1192), 1, (__int16 *)&a2);
    sub_1010DA50(
      (_DWORD *)(this + 1192),
      *(_DWORD *)(this + 1192),
      *(_DWORD *)(this + 1196),
      *(_DWORD *)(this + 1200),
      *(_DWORD *)(this + 1204),
      *(_DWORD *)(this + 1208),
      __SPAIR64__(this, v6),
      0.0);
    *(float *)&a2 = 0.0;
    sub_1010C270((float *)(this + 1216), 1, (__int16 *)&a2);
    sub_1010DA50(
      (_DWORD *)(this + 1216),
      *(_DWORD *)(this + 1216),
      *(_DWORD *)(this + 1220),
      *(_DWORD *)(this + 1224),
      *(_DWORD *)(this + 1228),
      *(_DWORD *)(this + 1232),
      __SPAIR64__(this, v6),
      0.0);
    *(_DWORD *)(this + 1244) = 0;
    *(_DWORD *)(this + 1248) = -1;
  }
  else
  {
    v16 = *(const char **)(a2 + 260);
    if ( !v16 )
      v16 = String;
    v17 = *(const char **)(this + 260);
    if ( !v17 )
      v17 = String;
    Warning("%s Deactivate(): I have no player when called by %s!\n", v17, v16);
  }
  return sub_100EC4A0((int *)this, -1.0, 0);
}
