void __thiscall sub_101C7D80(int this, int a2, float *a3)
{
  double v4; // st7
  _DWORD *v5; // edi
  double v6; // st6
  float v7; // edx
  float v8[3]; // [esp+8h] [ebp-Ch] BYREF

  if ( *(float *)(a2 + 32) > 0.7 )
  {
    if ( (*(_DWORD *)(this + 252) & 0x1000) != 0 )
      sub_100DAFD0(this);
    *a3 = *(float *)(this + 464) + *(float *)(this + 476);
    a3[1] = *(float *)(this + 480) + *(float *)(this + 468);
    v4 = *(float *)(this + 484) + *(float *)(this + 472);
    a3[2] = v4;
    v5 = *(_DWORD **)(a2 + 76);
    v6 = *(float *)(this + 552);
    if ( 0.0 == v6 )
      v6 = 1.0;
    if ( v6 * *(float *)(dword_106B6F0C + 44) * *(float *)(dword_106B31C8 + 16) > v4 )
    {
      if ( (*(_DWORD *)(this + 252) & 0x1000) != 0 )
        sub_100DAFD0(this);
      v7 = *(float *)(this + 480);
      v8[0] = *(float *)(this + 476);
      v8[2] = 0.0;
      v8[1] = v7;
      sub_100DD660(this, v8);
    }
    if ( sub_100E9830(v5) )
      sub_101C73D0((unsigned int *)this, (int)v5);
  }
}
