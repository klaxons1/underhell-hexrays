void __thiscall sub_10180B10(_DWORD *this, char *Source, char *a3)
{
  _DWORD *v3; // edi
  unsigned int v4; // esi
  char *v5; // ebx
  int v6; // eax
  char **v7; // ebx
  unsigned int v8; // kr00_4
  char *v9; // edi
  _DWORD *v10; // esi
  int v11; // edi
  int v12; // eax
  int v13; // ecx
  int v14; // eax
  char ***v15; // edi

  v3 = this;
  if ( this[70] && Source && *Source )
  {
    v4 = strlen(Source) + 1;
    v5 = (char *)sub_100DDA40(v4);
    sub_102282F0(v5, Source, v4);
    *(_DWORD *)v3[70] = v5;
    v6 = v3[70];
    if ( v6 )
      sub_10180180((_DWORD *)(v6 + 84));
    if ( a3 )
    {
      v7 = (char **)sub_100DDA40(8);
      if ( v7 )
      {
        *v7 = 0;
        v7[1] = 0;
        v8 = strlen(a3);
        v9 = (char *)sub_100DDA40(v8 + 1);
        sub_102282F0(v9, a3, v8 + 1);
        *v7 = v9;
        v7[1] = 0;
        v10 = (_DWORD *)this[70];
        v11 = v10[24];
        v12 = v10[22];
        if ( v11 + 1 > v12 )
          sub_1010AFF0(v10 + 21, v11 - v12 + 1);
        ++v10[24];
        v13 = v10[21];
        v14 = v10[24] - v11 - 1;
        v10[25] = v13;
        if ( v14 > 0 )
          memcpy((void *)(v13 + 4 * v11 + 4), (const void *)(v13 + 4 * v11), 4 * v14);
        v15 = (char ***)(v10[21] + 4 * v11);
        if ( v15 )
          *v15 = v7;
        v3 = this;
      }
    }
    *((_BYTE *)v3 + 312) = 1;
  }
}
