void __thiscall sub_103E16B0(int this, int *a2)
{
  unsigned int v3; // eax
  int v4; // eax
  int v5; // edx
  double v6; // st7
  unsigned int v7; // eax
  int v8; // [esp-Ch] [ebp-80h]
  _DWORD v9[20]; // [esp+18h] [ebp-5Ch] BYREF
  _BYTE v10[4]; // [esp+68h] [ebp-Ch] BYREF
  float v11; // [esp+6Ch] [ebp-8h]
  char v12; // [esp+70h] [ebp-4h]

  sub_101C0960(a2, this, (int)v10);
  if ( v12 )
  {
    if ( *(float *)(dword_106EDF64 + 44) < (double)v11 && ((*(int (__thiscall **)(int *))(*a2 + 76))(a2) & 0x40) == 0 )
    {
      v3 = *(_DWORD *)(this + 1640);
      if ( v3 != -1
        && off_1061BE18[4 * (*(_DWORD *)(this + 1640) & 0xFFF) + 2] == v3 >> 12
        && off_1061BE18[4 * (*(_DWORD *)(this + 1640) & 0xFFF) + 1] )
      {
        v8 = sub_10280AC0();
        v4 = sub_10280AC0();
        sub_102487B0((int)v9, v4, v8, &flt_106F1CA8, &flt_106F1CA8, 1000.0, 1, 0, 0);
        v5 = *(_DWORD *)(this + 252) >> 11;
        v6 = -(*(float *)(dword_106B6F0C + 44) * v11 * *(float *)(dword_106B31C8 + 16));
        *(float *)&v9[1] = 0.0;
        *(float *)&v9[2] = 0.0;
        *(float *)&v9[3] = v6;
        if ( (v5 & 1) != 0 )
          sub_100DAE60(this);
        v7 = *(_DWORD *)(this + 1640);
        *(float *)&v9[4] = *(float *)(this + 580);
        *(float *)&v9[5] = *(float *)(this + 584);
        *(float *)&v9[6] = *(float *)(this + 588);
        if ( v7 == -1 || off_1061BE18[4 * (v7 & 0xFFF) + 2] != v7 >> 12 )
          sub_100D9E70(0, this, v9);
        else
          sub_100D9E70((int *)off_1061BE18[4 * (v7 & 0xFFF) + 1], this, v9);
      }
    }
  }
}
