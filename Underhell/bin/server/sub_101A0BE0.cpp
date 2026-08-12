void __cdecl sub_101A0BE0(float *a1, float *a2, char a3, char a4)
{
  int v4; // esi
  _BYTE v5[44]; // [esp+4h] [ebp-54h] BYREF
  float v6; // [esp+30h] [ebp-28h]
  char v7; // [esp+3Bh] [ebp-1Dh]
  int savedregs; // [esp+58h] [ebp+0h] BYREF

  v4 = sub_101A0B80();
  *(float *)v4 = *a1;
  *(float *)(v4 + 4) = a1[1];
  *(float *)(v4 + 8) = a1[2];
  *(float *)(v4 + 12) = *a2;
  *(float *)(v4 + 16) = a2[1];
  *(float *)(v4 + 20) = a2[2];
  *(_BYTE *)(v4 + 36) = a3;
  *(_BYTE *)(v4 + 37) = 1;
  if ( a4
    && ((sub_1002A5F0((int)&savedregs, v4, (float *)v4, (float *)(v4 + 12), 16449, 0, 0, (int)v5), v7) || v6 < 1.0) )
  {
    *(_DWORD *)(v4 + 24) = 255;
    *(_DWORD *)(v4 + 28) = 0;
    *(_DWORD *)(v4 + 32) = 0;
  }
  else
  {
    *(_DWORD *)(v4 + 24) = 255;
    *(_DWORD *)(v4 + 28) = 255;
    *(_DWORD *)(v4 + 32) = 255;
  }
}
