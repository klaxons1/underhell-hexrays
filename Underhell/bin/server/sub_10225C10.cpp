int __thiscall sub_10225C10(_DWORD *this, char *String1, int a3, int a4, char a5, const char *a6)
{
  char *v6; // edi
  unsigned int v8; // eax
  int result; // eax
  _DWORD *v11; // esi
  float *v12; // eax
  float *v13; // esi
  int v14; // eax
  _DWORD *v15; // esi
  _DWORD *v16; // eax
  int v17; // eax
  _DWORD *v18; // esi
  int i; // ebx
  float *v20; // [esp+30h] [ebp+Ch]

  v6 = String1;
  if ( !_stricmp(String1, "!activator") )
  {
    v8 = this[378];
    if ( v8 != -1 && off_1061BE18[4 * (this[378] & 0xFFF) + 2] == v8 >> 12 )
      return off_1061BE18[4 * (this[378] & 0xFFF) + 1];
    return 0;
  }
  if ( !_stricmp(String1, "Player") || !_stricmp(String1, "!player") )
  {
    if ( *(_DWORD *)(dword_106B31C8 + 20) == 1 )
      return sub_10261B20();
    return 0;
  }
  if ( !_stricmp(String1, "!target1") )
  {
    v6 = (char *)this[205];
    goto LABEL_21;
  }
  if ( !_stricmp(String1, "!target2") )
  {
    v6 = (char *)this[206];
    goto LABEL_21;
  }
  if ( !_stricmp(String1, "!target3") )
  {
    v6 = (char *)this[207];
    goto LABEL_21;
  }
  if ( !_stricmp(String1, "!target4") )
  {
    v6 = (char *)this[208];
    goto LABEL_21;
  }
  if ( !_stricmp(String1, "!target5") )
  {
    v6 = (char *)this[209];
    goto LABEL_21;
  }
  if ( !_stricmp(String1, "!target6") )
  {
    v6 = (char *)this[210];
    goto LABEL_21;
  }
  if ( !_stricmp(String1, "!target7") )
  {
    v6 = (char *)this[211];
LABEL_21:
    if ( !v6 )
      v6 = (char *)String;
  }
  if ( a3 && sub_100D7680(a3) )
  {
    if ( !a6
      || !strlen(a6)
      || (v11 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, const char *, int, _DWORD, _DWORD, _DWORD))(*this + 904))(
                            this,
                            a6,
                            a3,
                            0,
                            0,
                            0)) == 0
      || ((v20 = (float *)sub_10184390(52)) == 0
        ? (v13 = 0)
        : (v12 = (float *)sub_10019640(v11), v13 = sub_10225660(v20, a3, v12, 56755.84)),
          (v14 = sub_100D7680(a3),
           (result = (*(int (__thiscall **)(int, char *, float *))(*(_DWORD *)v14 + 2000))(v14, v6, v13)) == 0)
       && (!v13 || (result = (*(int (__thiscall **)(float *))(*(_DWORD *)v13 + 4))(v13)) == 0)) )
    {
      v15 = 0;
      if ( a5 )
      {
        v16 = (_DWORD *)sub_10184390(12);
        if ( v16 )
        {
          *v16 = &CSceneFindMarkFilter::`vftable';
          v16[1] = -1;
          v16[2] = -1;
          v15 = v16;
        }
        else
        {
          v15 = 0;
        }
        sub_10225630(v15, a3);
      }
      v17 = sub_100D7680(a3);
      result = (*(int (__thiscall **)(int, char *, _DWORD *))(*(_DWORD *)v17 + 2000))(v17, v6, v15);
      if ( !result && v15 )
        return (*(int (__thiscall **)(_DWORD *))(*v15 + 4))(v15);
    }
  }
  else
  {
    v18 = 0;
    for ( i = 0; i < 32; ++i )
    {
      v18 = sub_1012BF20(&dword_1069E3E0, (int)v18, v6, 0, a3, 0, 0);
      if ( v18 )
        RandomInt(0, i);
    }
    return 0;
  }
  return result;
}
