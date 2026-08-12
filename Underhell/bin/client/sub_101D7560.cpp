char __stdcall sub_101D7560(unsigned int *a1, int a2)
{
  int v2; // ecx
  unsigned int v3; // eax
  _BYTE *v4; // ebx
  int v5; // edi
  char v6; // dl
  unsigned int v7; // eax
  unsigned int v8; // eax
  unsigned int v9; // eax
  _BYTE v11[8]; // [esp+8h] [ebp-Ch] BYREF

  sub_101D7130((int)v11, (unsigned __int8 *)a2);
  if ( v11[0] == v11[1] )
  {
    LOBYTE(v2) = v11[0];
    BYTE1(v2) = v11[0];
    v3 = v2 << 16;
    LOWORD(v3) = v2;
    *a1 = v3;
    a1[1] = v3;
    a1[2] = v3;
    a1[3] = v3;
  }
  else
  {
    v4 = (char *)a1 + 3;
    v5 = 1;
    v6 = -13;
    do
    {
      if ( v5 - 1 >= 5 )
      {
        if ( v5 - 1 <= 5 )
          v7 = (*(_DWORD *)a2 >> 31) | (2 * (*(_DWORD *)(a2 + 4) & 3));
        else
          v7 = (*(_DWORD *)(a2 + 4) & (unsigned int)(7 << (v6 - 3))) >> (v6 - 3);
      }
      else
      {
        v7 = (*(_DWORD *)a2 & (unsigned int)(7 << (v6 + 29))) >> (v6 + 29);
      }
      *((_BYTE *)a1 + v5 - 1) = v11[v7];
      if ( v5 >= 5 )
      {
        if ( v5 <= 5 )
          v8 = (*(_DWORD *)a2 >> 31) | (2 * (*(_DWORD *)(a2 + 4) & 3));
        else
          v8 = (*(_DWORD *)(a2 + 4) & (unsigned int)(7 << v6)) >> v6;
      }
      else
      {
        v8 = (*(_DWORD *)a2 & (unsigned int)(7 << (v6 + 32))) >> (v6 + 32);
      }
      *((_BYTE *)a1 + v5) = v11[v8];
      if ( v5 + 1 >= 5 )
      {
        if ( v5 + 1 <= 5 )
          v9 = (*(_DWORD *)a2 >> 31) | (2 * (*(_DWORD *)(a2 + 4) & 3));
        else
          v9 = (*(_DWORD *)(a2 + 4) & (unsigned int)(7 << (v6 + 3))) >> (v6 + 3);
      }
      else
      {
        v9 = (*(_DWORD *)a2 & (unsigned int)(7 << (v6 + 35))) >> (v6 + 35);
      }
      *(v4 - 1) = v11[v9];
      if ( v5 + 2 >= 5 )
      {
        if ( v5 + 2 <= 5 )
          v3 = (*(_DWORD *)a2 >> 31) | (2 * (*(_DWORD *)(a2 + 4) & 3));
        else
          v3 = (*(_DWORD *)(a2 + 4) & (unsigned int)(7 << (v6 + 6))) >> (v6 + 6);
      }
      else
      {
        v3 = (*(_DWORD *)a2 & (unsigned int)(7 << (v6 + 38))) >> (v6 + 38);
      }
      LOBYTE(v3) = v11[v3];
      v5 += 4;
      *v4 = v3;
      v6 += 12;
      v4 += 4;
    }
    while ( v5 - 1 < 16 );
  }
  return v3;
}
