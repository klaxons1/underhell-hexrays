int __thiscall sub_1025DAD0(int this, const char *a2)
{
  const char *v2; // ebp
  _DWORD *v3; // esi
  unsigned int v4; // ebx
  int *v5; // esi
  int v6; // edi
  int v7; // eax
  int v8; // ecx
  signed int v9; // eax
  bool v10; // zf
  _BYTE *v11; // eax
  int v12; // edi
  int v13; // eax
  _DWORD *v14; // esi
  int v15; // ecx
  signed int v16; // eax
  _BYTE *v17; // eax
  int result; // eax
  int v19; // eax

  v2 = a2;
  v3 = (_DWORD *)this;
  *(_BYTE *)(this + 32) |= 4u;
  v4 = 0;
  if ( !a2 )
    v2 = Locale;
  if ( *(int *)(this + 16) > 0 )
    *(_DWORD *)(this + 16) = 0;
  if ( strlen(v2) )
  {
    v5 = v3 + 1;
    do
    {
      v6 = v5[3];
      v7 = v5[1];
      if ( v6 + 1 > v7 )
        sub_1001A460(v5, v6 - v7 + 1);
      ++v5[3];
      v8 = *v5;
      v9 = v5[3] - v6 - 1;
      v10 = v5[3] - v6 == 1;
      v5[4] = *v5;
      if ( v9 >= 0 && !v10 )
        memcpy((void *)(v6 + v8 + 1), (const void *)(v6 + v8), v9);
      v11 = (_BYTE *)(v6 + *v5);
      if ( v11 )
        *v11 = v2[v4];
      ++v4;
    }
    while ( v4 < strlen(v2) );
    v3 = (_DWORD *)this;
  }
  v12 = v3[4];
  v13 = v3[2];
  v14 = v3 + 1;
  if ( v12 + 1 > v13 )
    sub_1001A460(v14, v12 - v13 + 1);
  ++v14[3];
  v15 = *v14;
  v16 = v14[3] - v12 - 1;
  v10 = v14[3] - v12 == 1;
  v14[4] = *v14;
  if ( v16 >= 0 && !v10 )
    memcpy((void *)(v12 + v15 + 1), (const void *)(v12 + v15), v16);
  v17 = (_BYTE *)(v12 + *v14);
  if ( v17 )
    *v17 = 0;
  result = sub_10237C80(dword_103FD3B0);
  if ( result )
  {
    v19 = sub_10237C80(dword_103FD3B0);
    return (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v19 + 768))(v19, *v14);
  }
  return result;
}
