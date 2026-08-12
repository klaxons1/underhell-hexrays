int __thiscall sub_101523B0(_DWORD *this, int *a2)
{
  int *v2; // edi
  int v3; // eax
  char **v4; // esi
  int v5; // ebx
  int *v6; // ecx
  char *v7; // eax
  _DWORD *v8; // edi
  int v9; // esi
  const char *v10; // esi
  const char *v11; // eax
  const char *v12; // ecx
  int result; // eax
  unsigned int v14; // eax
  _DWORD *v15; // edi
  int *v16; // ecx
  int v17; // ecx
  int *v18; // eax
  int *v19; // esi
  int v20; // ebx
  _DWORD *v21; // eax
  _DWORD *v22; // eax
  int v23; // eax
  _DWORD *v24; // eax
  int v25; // eax
  unsigned int *v26; // eax
  int v27; // eax
  const char *v28; // ecx

  v2 = a2;
  v3 = a2[6];
  v4 = (char **)(a2 + 2);
  v5 = (int)this;
  if ( v3 == 2 )
  {
    v6 = a2 + 2;
  }
  else
  {
    a2 = 0;
    v6 = (int *)&a2;
  }
  if ( *v6 )
  {
    if ( v3 == 2 )
    {
      v7 = *v4;
      if ( !*v4 )
        v7 = (char *)String;
    }
    else
    {
      v7 = (char *)sub_1010D460((int)v4);
    }
    v8 = sub_1012BF20(&dword_1069E3E0, 0, v7, v5, *v2, v2[1], 0);
    if ( v8 && (*(unsigned __int8 (__thiscall **)(_DWORD *))(*v8 + 320))(v8) )
    {
      v9 = (*(unsigned __int8 (__thiscall **)(_DWORD *))(*v8 + 320))(v8) != 0 ? (unsigned int)v8 : 0;
LABEL_25:
      v14 = *(_DWORD *)(v5 + 1248);
      v15 = (_DWORD *)(v5 + 1248);
      if ( v14 == -1
        || (v16 = &off_1061BE18[4 * (*(_DWORD *)(v5 + 1248) & 0xFFF) + 1],
            result = v14 >> 12,
            off_1061BE18[4 * (*(_DWORD *)(v5 + 1248) & 0xFFF) + 2] != result)
        || !*v16
        || (off_1061BE18[4 * (*(_DWORD *)(v5 + 1248) & 0xFFF) + 2] != result ? (v17 = 0) : (v17 = *v16), v9 == v17) )
      {
        if ( v9 )
          *v15 = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v9 + 8))(v9);
        else
          *v15 = -1;
        sub_1010DD80((_DWORD *)(v5 + 808), __SPAIR64__(v5, v9), 0.0);
        result = sub_100EC4A0((int *)v5, *(float *)(dword_106B31C8 + 12), 0);
        if ( (*(_BYTE *)(v5 + 248) & 0x20) != 0 )
        {
          v18 = (int *)sub_1026A890(v5 + 1248);
          result = sub_100EA940(v18, 64);
        }
        if ( (*(_BYTE *)(v5 + 248) & 0x40) != 0 )
        {
          v19 = (int *)(sub_1026A890(v5 + 1248) + 2252);
          v20 = *v19 | 1;
          if ( *v19 != v20 )
          {
            (*(void (__thiscall **)(int *, int *))*(v19 - 15))(v19 - 15, v19);
            *v19 = v20;
          }
          v21 = (_DWORD *)sub_1026A890(v15);
          result = sub_100CF460(v21);
          if ( result )
          {
            v22 = (_DWORD *)sub_1026A890(v15);
            v23 = sub_100CF460(v22);
            sub_10019680(this + 201, v23);
            v24 = (_DWORD *)sub_1026A890(v15);
            v25 = sub_100CF460(v24);
            (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v25 + 996))(v25, 0);
            v26 = (unsigned int *)sub_1026A890(v15);
            sub_100CD300(v26, 0);
            v27 = sub_1026A890(v15);
            result = sub_101E9A70(v27);
          }
          v5 = (int)this;
        }
        *(_BYTE *)(v5 + 1240) = 1;
      }
      return result;
    }
    if ( v4[4] == (char *)2 )
    {
      v10 = *v4;
      if ( v10 )
        v11 = v10;
      else
        v11 = String;
    }
    else
    {
      v11 = sub_1010D460((int)v4);
    }
    v12 = *(const char **)(v5 + 260);
    if ( !v12 )
      v12 = String;
    return Warning("%s InputActivate: entity %s not found or is not a player!\n", v12, v11);
  }
  else
  {
    if ( *v2 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)*v2 + 320))(*v2) )
    {
      v9 = *v2;
      if ( !*v2 || !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v9 + 320))(*v2) )
        v9 = 0;
      goto LABEL_25;
    }
    if ( v4[4] != (char *)2 )
      sub_1010D460((int)v4);
    v28 = *(const char **)(v5 + 260);
    if ( !v28 )
      v28 = String;
    return Warning("%s InputActivate: invalid or missing !activator!\n", v28);
  }
}
