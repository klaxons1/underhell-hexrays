void __thiscall sub_101078D0(int this)
{
  double v2; // st6
  double v3; // st7
  float v4; // [esp+0h] [ebp-18h]
  float v5[3]; // [esp+Ch] [ebp-Ch] BYREF

  v4 = *(float *)(dword_106B31C8 + 12) + 0.05;
  if ( *(_DWORD *)(dword_106984AC + 48) )
  {
    sub_100EC4A0((int *)this, v4, 0);
    v3 = *(float *)(this + 1216);
    v2 = *(float *)(this + 1220) * v3;
  }
  else
  {
    sub_100EC4A0((int *)this, v4, 0);
    v2 = *(float *)(this + 1220) * 2500.0;
    v3 = 2500.0;
  }
  v5[0] = v2;
  v5[1] = *(float *)(this + 1224) * v3;
  v5[2] = v3 * *(float *)(this + 1228);
  sub_100DD660(this, v5);
}
