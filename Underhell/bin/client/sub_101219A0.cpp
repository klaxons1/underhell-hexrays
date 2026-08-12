void __thiscall sub_101219A0(int this, float a2, float a3)
{
  double v3; // st7
  float v4; // [esp+0h] [ebp-8h]

  v3 = 1.0;
  *(_DWORD *)(this + 60) |= 1u;
  if ( a2 <= 1.0 )
    v3 = a2;
  v4 = v3;
  sub_10121910((float *)(this + 16), v4, a3);
}
