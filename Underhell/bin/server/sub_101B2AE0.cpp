void __thiscall sub_101B2AE0(int this)
{
  double v2; // st6
  double v3; // st7
  int v4[3]; // [esp+8h] [ebp-Ch] BYREF

  if ( (*(_BYTE *)(this + 236) & 0x2C) != 0 )
  {
    v2 = 48.0 * *(float *)(this + 972);
    v3 = *(float *)(this + 968) * 48.0;
    *(float *)v4 = *(float *)(this + 964) * 48.0 + *(float *)(this + 952);
    *(float *)&v4[1] = v3 + *(float *)(this + 956);
    *(float *)&v4[2] = v2 + *(float *)(this + 960);
    sub_1011BC50((float *)(this + 952), (float *)v4, 0, 255, 0, 0, 0.0);
    if ( (*(_BYTE *)(this + 236) & 0x2C) != 0 )
      sub_101B0600(*(_DWORD *)(this + 800), this);
  }
  sub_100DF330((float *)this);
}
