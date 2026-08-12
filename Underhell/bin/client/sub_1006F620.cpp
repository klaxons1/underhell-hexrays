void __thiscall sub_1006F620(float *this, int a2, int a3)
{
  int v4; // eax
  double v5; // st7
  double v6; // st7
  float v7[3]; // [esp+14h] [ebp-18h] BYREF
  float v8; // [esp+20h] [ebp-Ch] BYREF
  float v9; // [esp+24h] [ebp-8h]

  v4 = (*(int (__thiscall **)(float *, const char *))(*((_DWORD *)this - 497) + 140))(this - 497, "vehicle_driver_eyes");
  sub_10026820((_DWORD *)this - 498, v4, v7, (int)&v8);
  v5 = *(float *)(a3 + 16);
  sub_101F0610(*(float *)(a3 + 16), v9);
  if ( v5 <= this[46] )
  {
    if ( v5 < this[45] )
      v5 = this[45];
  }
  else
  {
    v5 = this[46];
  }
  *(float *)(a3 + 16) = v5 + v9;
  v6 = *(float *)(a3 + 12);
  sub_101F0610(*(float *)(a3 + 12), v8);
  if ( v6 <= this[48] )
  {
    if ( v6 < this[47] )
      v6 = this[47];
    *(float *)(a3 + 12) = v6 + v8;
  }
  else
  {
    *(float *)(a3 + 12) = this[48] + v8;
  }
}
