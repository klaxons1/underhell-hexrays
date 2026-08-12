void __thiscall sub_1039F750(int this, int a2, int a3, int a4)
{
  unsigned int v5; // eax
  double v6; // st7
  double v7; // st6
  float v8; // edx
  int v9[20]; // [esp+8h] [ebp-5Ch] BYREF
  float v10; // [esp+58h] [ebp-Ch]
  float v11; // [esp+5Ch] [ebp-8h]
  float v12; // [esp+60h] [ebp-4h]

  if ( (*(_BYTE *)(a2 + 64) & 0x82) != 0 )
  {
    sub_1001E4E0(v9, a2);
    if ( *(_DWORD *)(this + 3832)
      && (v5 = *(_DWORD *)(this + 3812), v5 != -1)
      && off_1061BE18[4 * (*(_DWORD *)(this + 3812) & 0xFFF) + 2] == v5 >> 12
      && off_1061BE18[4 * (*(_DWORD *)(this + 3812) & 0xFFF) + 1] )
    {
      v10 = *(float *)(a2 + 4);
      v6 = v10;
      v7 = 40.0;
    }
    else
    {
      v10 = *(float *)(a2 + 4);
      v6 = v10;
      v7 = 20.0;
    }
    v8 = *(float *)(a2 + 12);
    v11 = *(float *)(a2 + 8);
    v12 = v8;
    *(float *)&v9[1] = v6 * v7;
    *(float *)&v9[2] = v11 * v7;
    *(float *)&v9[3] = v7 * v8;
    sub_100360A0((_BYTE *)this, (int)v9, a3, a4);
  }
  else
  {
    sub_100360A0((_BYTE *)this, a2, a3, a4);
  }
}
