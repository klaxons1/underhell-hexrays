void __thiscall sub_102284D0(int this, int a2, char a3)
{
  const char *v4; // eax
  int v5; // ebx
  int i; // edi
  unsigned int v7; // eax
  int v8; // ecx
  int *v9; // ecx
  int *v10; // ecx
  double v11; // st7
  int *v12; // ecx
  int j; // ebx
  _BYTE *v14; // eax
  int v15; // edi
  _DWORD *v16; // eax
  __int64 v17; // [esp+0h] [ebp-1Ch]
  __int64 v18; // [esp+4h] [ebp-18h]

  if ( *(_DWORD *)(this + 976) )
  {
    v4 = *(const char **)(this + 804);
    if ( !v4 )
      v4 = String;
    sub_1022F660("%s : %8.2f:  finished\n", (char)v4);
    v5 = *(_DWORD *)(this + 1472);
    for ( i = 0; i < v5; ++i )
    {
      v7 = *(_DWORD *)(*(_DWORD *)(this + 1460) + 4 * i);
      if ( v7 != -1 && off_1061BE18[4 * (*(_DWORD *)(*(_DWORD *)(this + 1460) + 4 * i) & 0xFFF) + 2] == v7 >> 12 )
      {
        v8 = off_1061BE18[4 * (*(_DWORD *)(*(_DWORD *)(this + 1460) + 4 * i) & 0xFFF) + 1];
        if ( v8 )
          (*(void (__thiscall **)(int, int))(*(_DWORD *)v8 + 748))(v8, this);
      }
    }
    *(_DWORD *)(this + 1472) = 0;
    sub_1041E210(1, 0.0, 0.0);
    if ( *(_BYTE *)(this + 884) )
    {
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
      }
      else
      {
        v9 = *(int **)(this + 24);
        if ( v9 )
          sub_100194B0(v9, 884);
      }
      *(_BYTE *)(this + 884) = 0;
    }
    if ( *(_BYTE *)(this + 885) )
    {
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
      }
      else
      {
        v10 = *(int **)(this + 24);
        if ( v10 )
          sub_100194B0(v10, 885);
      }
      *(_BYTE *)(this + 885) = 0;
    }
    v11 = 0.0;
    *(float *)(this + 892) = 0.0;
    if ( *(_DWORD *)(dword_106B31C8 + 20) == 1 && *(_DWORD *)(this + 888) != COERCE_INT(0.0) )
    {
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
        *(float *)(this + 888) = 0.0;
      }
      else
      {
        v12 = *(int **)(this + 24);
        if ( v12 )
        {
          sub_100194B0(v12, 888);
          v11 = 0.0;
        }
        *(float *)(this + 888) = v11;
      }
    }
    (*(void (__thiscall **)(int))(*(_DWORD *)this + 736))(this);
    if ( a3 && !*(_BYTE *)(this + 1456) )
    {
      HIDWORD(v17) = this;
      LODWORD(v17) = this;
      sub_1010DD80((_DWORD *)(this + 1012), v17, 0.0);
    }
    HIDWORD(v18) = a2;
    LODWORD(v18) = *(_DWORD *)(this + 976);
    sub_10223D20((_DWORD *)this, v18);
    for ( j = 0; j < sub_1041CB40(*(_DWORD *)(this + 976)); ++j )
    {
      v14 = (_BYTE *)(*(int (__thiscall **)(int, int))(*(_DWORD *)this + 896))(this, j);
      v15 = (int)v14;
      if ( v14 )
      {
        sub_100EEF90(v14, *(_DWORD *)(this + 976), a2);
        if ( *(_BYTE *)(this + 927) )
        {
          v16 = (_DWORD *)sub_10226440();
          sub_10226FA0(v16, v15, 0);
        }
      }
    }
  }
}
