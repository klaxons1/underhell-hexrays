void __thiscall sub_102B0160(_DWORD *this, int a2, char a3)
{
  __int16 v3; // ax
  int v4; // ecx
  double v5; // st7
  double v6; // st7
  float v7[18]; // [esp+8h] [ebp-60h] BYREF
  __int16 v8; // [esp+50h] [ebp-18h]
  int v9; // [esp+58h] [ebp-10h]
  int v10; // [esp+5Ch] [ebp-Ch]

  if ( !sub_102B0060(this, (float *)a2, (float *)(a2 + 12))
    && *(_DWORD *)(a2 + 76)
    && sub_10262100(*(_DWORD *)(a2 + 76))
    && (*(_BYTE *)(a2 + 66) & 4) == 0
    && 1.0 != *(float *)(a2 + 44) )
  {
    sub_1001F130(v7);
    v7[0] = *(float *)(a2 + 12);
    v3 = *(_WORD *)(a2 + 64);
    v4 = *(_DWORD *)(a2 + 80);
    v7[1] = *(float *)(a2 + 16);
    v5 = *(float *)(a2 + 20);
    v8 = v3;
    v7[2] = v5;
    v9 = 128;
    v6 = *(float *)a2;
    v10 = v4;
    v7[3] = v6;
    v7[4] = *(float *)(a2 + 4);
    v7[5] = *(float *)(a2 + 8);
    if ( !a3 )
      LODWORD(v7[12]) = 1;
    sub_1028E890((int)"Impact", (int)v7);
  }
}
