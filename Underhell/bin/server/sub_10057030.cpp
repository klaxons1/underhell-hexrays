char __thiscall sub_10057030(void *this, int *a2, int a3)
{
  int v3; // eax
  int v4; // ebx
  char **v5; // ecx
  unsigned int *v6; // edi
  unsigned int v7; // eax
  void *v8; // ecx
  int v9; // esi
  int v10; // eax
  void *v11; // eax
  int v14; // [esp+8h] [ebp-4h] BYREF
  char **v15; // [esp+14h] [ebp+8h]

  LOBYTE(v3) = (_BYTE)a2;
  v4 = *a2;
  if ( *a2 && a2[1] )
  {
    v3 = a3;
    if ( a3 >= 0 )
    {
      if ( (unsigned int)a3 >= 9 )
        v3 = 8;
    }
    else
    {
      v3 = 0;
    }
    v5 = off_10603B84[v3];
    v15 = v5;
    if ( v5 != *(char ***)v4 )
    {
      v6 = *(unsigned int **)(v4 + 20);
      if ( v6 )
      {
        do
        {
          v7 = *v6;
          v6[1] = -1;
          if ( v7 == -1 || off_1061BE18[4 * (v7 & 0xFFF) + 2] != v7 >> 12 )
            v8 = 0;
          else
            v8 = (void *)off_1061BE18[4 * (v7 & 0xFFF) + 1];
          sub_10050D80(v8, &v14);
          v9 = v14;
          if ( v14 )
          {
            *(_DWORD *)(v14 + 224) = a3;
            *(float *)(v9 + 104) = -1.0;
            (*(void (__thiscall **)(int))(*(_DWORD *)v9 + 52))(v9);
            v10 = sub_1007DB30(100000);
            sub_10023CB0(*(char **)(v9 + 4), v10);
            *(_BYTE *)(v9 + 108) = 0;
          }
          v6 = (unsigned int *)v6[18];
        }
        while ( v6 );
        v5 = v15;
      }
      v11 = *(void **)(v4 + 56);
      if ( v11 )
      {
        memset(v11, 0, 4 * *(unsigned __int16 *)(v4 + 50));
        v5 = v15;
      }
      *(_DWORD *)v4 = v5;
      sub_10052D00((unsigned __int16 *)(v4 + 48), (int)v5[2], 0);
      LOBYTE(v3) = sub_10056CE0(this, (_DWORD *)v4);
    }
  }
  return v3;
}
