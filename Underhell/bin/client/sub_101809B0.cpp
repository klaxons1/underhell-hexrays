void __thiscall sub_101809B0(_DWORD *this, int a2)
{
  int v2; // eax
  int v3; // edi
  int i; // esi
  const char *v5; // eax
  _DWORD *v6; // esi
  int v7; // ebx
  int v8; // eax
  int v9; // ecx
  int v10; // eax
  int *v11; // ebx
  int v12; // eax
  int v13; // edx
  int v14; // ecx
  _DWORD *v15; // eax

  if ( a2 )
  {
    v2 = sub_100DDA40(20);
    v3 = v2;
    if ( v2 )
    {
      *(_DWORD *)v2 = 0;
      *(_DWORD *)(v2 + 4) = 0;
      *(_DWORD *)(v2 + 8) = 0;
      *(_DWORD *)(v2 + 12) = 0;
      *(_BYTE *)(v2 + 16) = 0;
      *(_DWORD *)v2 = sub_1012D330(a2, "name", 0);
      *(_DWORD *)(v3 + 4) = sub_1012D330(a2, "sequence", 0);
      *(_DWORD *)(v3 + 8) = sub_1012D330(a2, "activity", 0);
      *(_BYTE *)(v3 + 16) = sub_1022A800("default", 0) == 1;
      for ( i = sub_10229C90(a2); i; i = sub_1021F0F0(i) )
      {
        v5 = (const char *)sub_10229A00(i);
        if ( !_stricmp(v5, "pose_parameters") )
          *(_DWORD *)(v3 + 12) = sub_1022AD00(i);
      }
      v6 = (_DWORD *)this[70];
      v7 = v6[19];
      v8 = v6[17];
      if ( v7 + 1 > v8 )
        sub_1010AFF0(v6 + 16, v7 - v8 + 1);
      ++v6[19];
      v9 = v6[16];
      v10 = v6[19] - v7 - 1;
      v6[20] = v9;
      if ( v10 > 0 )
        memcpy((void *)(v9 + 4 * v7 + 4), (const void *)(v9 + 4 * v7), 4 * v10);
      v11 = (int *)(v6[16] + 4 * v7);
      if ( v11 )
        *v11 = v3;
      if ( *(_BYTE *)(v3 + 16) )
      {
        v12 = this[70];
        v13 = *(_DWORD *)(v12 + 76);
        v14 = 0;
        if ( v13 <= 0 )
        {
LABEL_18:
          v14 = -1;
        }
        else
        {
          v15 = *(_DWORD **)(v12 + 64);
          while ( *v15 != v3 )
          {
            ++v14;
            ++v15;
            if ( v14 >= v13 )
              goto LABEL_18;
          }
        }
        this[79] = v14;
      }
    }
  }
}
