void __thiscall sub_101E3A00(char *this, int a2)
{
  _DWORD ***v2; // esi
  char *v3; // edi
  int v4; // eax
  int v5; // ecx
  int v6; // edx
  int v7; // esi
  int v8; // ecx
  float v9; // ebp
  int v10; // ebx
  int v11; // eax
  int v12; // [esp+8h] [ebp-20h]
  float v14; // [esp+14h] [ebp-14h]
  __int16 v15; // [esp+18h] [ebp-10h]
  __int16 v16; // [esp+24h] [ebp-4h]
  int v17; // [esp+2Ch] [ebp+4h]

  v2 = (_DWORD ***)this;
  v3 = &this[20 * a2];
  v4 = *((_DWORD *)v3 + 7);
  if ( v4 > 0 )
  {
    v5 = 1;
    v6 = 0;
    v12 = 1;
    do
    {
      v17 = v5;
      if ( v5 < v4 )
      {
        v7 = v6 + 10;
        do
        {
          v8 = *((_DWORD *)v3 + 4);
          v9 = *(float *)(v6 + v8 + 4);
          v10 = *(_DWORD *)(v6 + v8);
          v16 = *(_WORD *)(v6 + v8 + 8);
          v14 = *(float *)(v7 + v8 + 4);
          v15 = *(_WORD *)(v7 + v8 + 8);
          if ( v14 < (double)v9 )
          {
            *(_DWORD *)(v6 + v8) = *(_DWORD *)(v7 + v8);
            *(float *)(v6 + v8 + 4) = v14;
            *(_WORD *)(v6 + v8 + 8) = v15;
            v11 = v7 + *((_DWORD *)v3 + 4);
            *(_DWORD *)v11 = v10;
            *(float *)(v11 + 4) = v9;
            *(_WORD *)(v11 + 8) = v16;
          }
          v7 += 10;
          ++v17;
        }
        while ( v17 < *((_DWORD *)v3 + 7) );
        v5 = v12;
        v2 = (_DWORD ***)this;
      }
      v4 = *((_DWORD *)v3 + 7);
      ++v5;
      v6 += 10;
      v12 = v5;
    }
    while ( v5 - 1 < v4 );
  }
  sub_101E33E0(v2, 0);
  sub_101E33E0(v2, 1);
}
