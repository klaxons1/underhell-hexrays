void __thiscall sub_1019F8A0(_DWORD *this, int a2, int a3)
{
  int v4; // eax
  double v5; // st7
  double v6; // st7
  double v7; // st6
  float v8[3]; // [esp+10h] [ebp-18h] BYREF
  float v9; // [esp+1Ch] [ebp-Ch] BYREF
  float v10; // [esp+20h] [ebp-8h]

  v4 = (*(int (__thiscall **)(_DWORD *, const char *))(*(this - 491) + 140))(this - 491, "vehicle_driver_eyes");
  sub_10026820(this - 492, v4, v8, (int)&v9);
  v5 = *(float *)(a3 + 16);
  sub_101F0610(*(float *)(a3 + 16), v10);
  if ( v5 <= 60.0 )
  {
    if ( v5 < -60.0 )
      v5 = -60.0;
  }
  else
  {
    v5 = 60.0;
  }
  *(float *)(a3 + 16) = v5 + v10;
  v6 = *(float *)(a3 + 12);
  sub_101F0610(*(float *)(a3 + 12), v9);
  v7 = 38.0;
  if ( v6 <= 38.0 && (v7 = -90.0, v6 >= -90.0) )
    *(float *)(a3 + 12) = v6 + v9;
  else
    *(float *)(a3 + 12) = v7 + v9;
}
