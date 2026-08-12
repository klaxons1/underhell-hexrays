void __thiscall sub_100F9160(int this, int a2, float *a3)
{
  double v4; // st7
  _BYTE *v5; // edi
  double v6; // st6
  float v7; // eax
  float v8[3]; // [esp+8h] [ebp-Ch] BYREF

  if ( *(float *)(a2 + 32) > 0.7 )
  {
    sub_10038150(this);
    *a3 = *(float *)(this + 244) + *(float *)(this + 284);
    a3[1] = *(float *)(this + 248) + *(float *)(this + 288);
    v4 = *(float *)(this + 252) + *(float *)(this + 292);
    a3[2] = v4;
    v5 = *(_BYTE **)(a2 + 76);
    v6 = *(float *)(this + 296);
    if ( 0.0 == v6 )
      v6 = 1.0;
    if ( v6 * *(float *)(dword_10434644 + 44) * *((float *)off_103DC81C + 4) > v4 )
    {
      sub_10038150(this);
      v7 = *(float *)(this + 248);
      v8[0] = *(float *)(this + 244);
      v8[2] = 0.0;
      v8[1] = v7;
      sub_100399E0(this, v8);
    }
    if ( sub_1000EA80((int)v5, (int)v5) )
      sub_100F8AA0((_DWORD *)this, v5);
  }
}
