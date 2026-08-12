int __stdcall sub_101D7700(int a1, int a2)
{
  int result; // eax
  int v3; // edi
  float *v4; // ebx
  char v5; // dl
  unsigned int v6; // eax
  unsigned int v7; // eax
  unsigned int v8; // eax
  unsigned int v9; // eax
  unsigned int v10; // eax
  unsigned int v11; // eax
  unsigned int v12; // eax
  unsigned int v13; // eax
  float v14[8]; // [esp+4h] [ebp-20h] BYREF

  sub_101D72A0(v14, (unsigned __int8 *)a2);
  if ( v14[1] == v14[0] )
  {
    result = LODWORD(v14[0]);
    *(float *)a1 = v14[0];
    *(_DWORD *)(a1 + 4) = result;
    *(_DWORD *)(a1 + 8) = result;
    *(_DWORD *)(a1 + 12) = result;
    *(_DWORD *)(a1 + 16) = result;
    *(_DWORD *)(a1 + 20) = result;
    *(_DWORD *)(a1 + 24) = result;
    *(_DWORD *)(a1 + 28) = result;
    *(_DWORD *)(a1 + 32) = result;
    *(_DWORD *)(a1 + 36) = result;
    *(_DWORD *)(a1 + 40) = result;
    *(_DWORD *)(a1 + 44) = result;
    *(_DWORD *)(a1 + 48) = result;
    *(_DWORD *)(a1 + 52) = result;
    *(_DWORD *)(a1 + 56) = result;
    *(_DWORD *)(a1 + 60) = result;
  }
  else
  {
    v3 = 2;
    v4 = (float *)(a1 + 8);
    v5 = -13;
    do
    {
      if ( v3 - 2 >= 5 )
      {
        if ( v3 - 2 <= 5 )
          v6 = (*(_DWORD *)a2 >> 31) | (2 * (*(_DWORD *)(a2 + 4) & 3));
        else
          v6 = (*(_DWORD *)(a2 + 4) & (unsigned int)(7 << (v5 - 3))) >> (v5 - 3);
      }
      else
      {
        v6 = (*(_DWORD *)a2 & (unsigned int)(7 << (v5 + 29))) >> (v5 + 29);
      }
      *(v4 - 2) = v14[v6];
      if ( v3 - 1 >= 5 )
      {
        if ( v3 - 1 <= 5 )
          v7 = (*(_DWORD *)a2 >> 31) | (2 * (*(_DWORD *)(a2 + 4) & 3));
        else
          v7 = (*(_DWORD *)(a2 + 4) & (unsigned int)(7 << v5)) >> v5;
      }
      else
      {
        v7 = (*(_DWORD *)a2 & (unsigned int)(7 << (v5 + 32))) >> (v5 + 32);
      }
      *(v4 - 1) = v14[v7];
      if ( v3 >= 5 )
      {
        if ( v3 <= 5 )
          v8 = (*(_DWORD *)a2 >> 31) | (2 * (*(_DWORD *)(a2 + 4) & 3));
        else
          v8 = (*(_DWORD *)(a2 + 4) & (unsigned int)(7 << (v5 + 3))) >> (v5 + 3);
      }
      else
      {
        v8 = (*(_DWORD *)a2 & (unsigned int)(7 << (v5 + 35))) >> (v5 + 35);
      }
      *v4 = v14[v8];
      if ( v3 + 1 >= 5 )
      {
        if ( v3 + 1 <= 5 )
          v9 = (*(_DWORD *)a2 >> 31) | (2 * (*(_DWORD *)(a2 + 4) & 3));
        else
          v9 = (*(_DWORD *)(a2 + 4) & (unsigned int)(7 << (v5 + 6))) >> (v5 + 6);
      }
      else
      {
        v9 = (*(_DWORD *)a2 & (unsigned int)(7 << (v5 + 38))) >> (v5 + 38);
      }
      v4[1] = v14[v9];
      if ( v3 + 2 >= 5 )
      {
        if ( v3 + 2 <= 5 )
          v10 = (*(_DWORD *)a2 >> 31) | (2 * (*(_DWORD *)(a2 + 4) & 3));
        else
          v10 = (*(_DWORD *)(a2 + 4) & (unsigned int)(7 << (v5 + 9))) >> (v5 + 9);
      }
      else
      {
        v10 = (*(_DWORD *)a2 & (unsigned int)(7 << (v5 + 41))) >> (v5 + 41);
      }
      v4[2] = v14[v10];
      if ( v3 + 3 >= 5 )
      {
        if ( v3 + 3 <= 5 )
          v11 = (*(_DWORD *)a2 >> 31) | (2 * (*(_DWORD *)(a2 + 4) & 3));
        else
          v11 = (*(_DWORD *)(a2 + 4) & (unsigned int)(7 << (v5 + 12))) >> (v5 + 12);
      }
      else
      {
        v11 = (*(_DWORD *)a2 & (unsigned int)(7 << (v5 + 44))) >> (v5 + 44);
      }
      v4[3] = v14[v11];
      if ( v3 + 4 >= 5 )
      {
        if ( v3 + 4 <= 5 )
          v12 = (*(_DWORD *)a2 >> 31) | (2 * (*(_DWORD *)(a2 + 4) & 3));
        else
          v12 = (*(_DWORD *)(a2 + 4) & (unsigned int)(7 << (v5 + 15))) >> (v5 + 15);
      }
      else
      {
        v12 = (*(_DWORD *)a2 & (unsigned int)(7 << (v5 + 47))) >> (v5 + 47);
      }
      v4[4] = v14[v12];
      if ( v3 + 5 >= 5 )
      {
        if ( v3 + 5 <= 5 )
          v13 = (*(_DWORD *)a2 >> 31) | (2 * (*(_DWORD *)(a2 + 4) & 3));
        else
          v13 = (*(_DWORD *)(a2 + 4) & (unsigned int)(7 << (v5 + 18))) >> (v5 + 18);
      }
      else
      {
        v13 = (*(_DWORD *)a2 & (unsigned int)(7 << (v5 + 50))) >> (v5 + 50);
      }
      v3 += 8;
      v4[5] = v14[v13];
      result = v3 - 2;
      v4 += 8;
      v5 += 24;
    }
    while ( v3 - 2 < 16 );
  }
  return result;
}
