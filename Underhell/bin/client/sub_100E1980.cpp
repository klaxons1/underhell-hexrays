char __thiscall sub_100E1980(int *this, int a2, float *a3)
{
  int v3; // ebx
  int v4; // edx
  _DWORD *v5; // eax
  int v6; // ebx
  int v7; // eax
  int *v8; // edi
  int v9; // ecx
  int v10; // eax
  int v11; // edx
  int v12; // ecx
  int v13; // eax
  int v14; // edi
  char result; // al

  v3 = this[4];
  v4 = 0;
  if ( v3 <= 0 )
  {
LABEL_5:
    v6 = this[4];
    v7 = this[2];
    v8 = this + 1;
    if ( v6 + 1 > v7 )
      sub_10186BC0(v6 - v7 + 1);
    ++v8[3];
    v9 = *v8;
    v10 = v8[3] - v6 - 1;
    v8[4] = *v8;
    if ( v10 > 0 )
      memcpy((void *)(96 * v6 + v9 + 96), (const void *)(96 * v6 + v9), 96 * v10);
    v11 = *v8;
    v12 = 96 * v6;
    *(float *)(v12 + v11 + 12) = *(float *)a2;
    v13 = 96 * v6 + v11 + 12;
    *(float *)(v13 + 4) = *(float *)(a2 + 4);
    *(float *)(v13 + 8) = *(float *)(a2 + 8);
    *(float *)(v13 + 12) = *(float *)(a2 + 12);
    *(float *)(v13 + 16) = *(float *)(a2 + 16);
    *(float *)(v13 + 20) = *(float *)(a2 + 20);
    *(float *)(v13 + 24) = *(float *)(a2 + 24);
    *(float *)(v13 + 28) = *(float *)(a2 + 28);
    *(float *)(v13 + 32) = *(float *)(a2 + 32);
    *(float *)(v13 + 36) = *(float *)(a2 + 36);
    *(_BYTE *)(v13 + 40) = *(_BYTE *)(a2 + 40);
    *(_BYTE *)(v13 + 41) = *(_BYTE *)(a2 + 41);
    *(_BYTE *)(v13 + 42) = *(_BYTE *)(a2 + 42);
    *(_BYTE *)(v13 + 43) = *(_BYTE *)(a2 + 43);
    *(float *)(v13 + 44) = *(float *)(a2 + 44);
    *(_DWORD *)(v13 + 48) = *(_DWORD *)(a2 + 48);
    *(_WORD *)(v13 + 52) = *(_WORD *)(a2 + 52);
    *(_BYTE *)(v13 + 54) = *(_BYTE *)(a2 + 54);
    *(_BYTE *)(v13 + 55) = *(_BYTE *)(a2 + 55);
    *(float *)(v13 + 56) = *(float *)(a2 + 56);
    *(_DWORD *)(v13 + 60) = *(_DWORD *)(a2 + 60);
    *(_DWORD *)(v13 + 64) = *(_DWORD *)(a2 + 64);
    *(_DWORD *)(v13 + 68) = *(_DWORD *)(a2 + 68);
    *(_WORD *)(v13 + 72) = *(_WORD *)(a2 + 72);
    *(_DWORD *)(v13 + 76) = *(_DWORD *)(a2 + 76);
    *(_DWORD *)(v13 + 80) = *(_DWORD *)(a2 + 80);
    v14 = *v8;
    *(float *)(v14 + v12) = *a3;
    *(float *)(v14 + v12 + 4) = a3[1];
    result = 1;
    *(float *)(v14 + v12 + 8) = a3[2];
  }
  else
  {
    v5 = (_DWORD *)(this[1] + 88);
    while ( *v5 != *(_DWORD *)(a2 + 76) )
    {
      ++v4;
      v5 += 24;
      if ( v4 >= v3 )
        goto LABEL_5;
    }
    return 0;
  }
  return result;
}
