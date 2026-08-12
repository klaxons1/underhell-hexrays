void __thiscall sub_10150E90(int this)
{
  __int64 v2; // [esp-4h] [ebp-10h]
  __int64 v3; // [esp-4h] [ebp-10h]
  float v4; // [esp+0h] [ebp-Ch]

  sub_100EC3F0((_DWORD *)this, (int)sub_10150DA0, 0.0, 0);
  v4 = *(float *)(dword_106B31C8 + 12) + 0.1;
  sub_100EC4A0((int *)this, v4, 0);
  sub_10246990(this);
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  if ( *(float *)(this + 580) == *(float *)(this + 828)
    && *(float *)(this + 584) == *(float *)(this + 832)
    && *(float *)(this + 588) == *(float *)(this + 836) )
  {
    HIDWORD(v2) = this;
    LODWORD(v2) = this;
    sub_1010DD80((_DWORD *)(this + 956), v2, 0.0);
  }
  else
  {
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    if ( *(float *)(this + 580) == *(float *)(this + 816)
      && *(float *)(this + 584) == *(float *)(this + 820)
      && *(float *)(this + 588) == *(float *)(this + 824) )
    {
      HIDWORD(v3) = this;
      LODWORD(v3) = this;
      sub_1010DD80((_DWORD *)(this + 980), v3, 0.0);
    }
  }
}
