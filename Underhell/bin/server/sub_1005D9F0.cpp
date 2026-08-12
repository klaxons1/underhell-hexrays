int __thiscall sub_1005D9F0(int this)
{
  float v3; // [esp+0h] [ebp-10h]

  if ( sub_1004FBE0((float *)(this + 808), this) )
  {
    sub_1005D1D0((void *)this);
    if ( this )
    {
      if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
        sub_100DAE60(this);
      *(float *)(this + 808) = *(float *)(this + 580);
      *(float *)(this + 812) = *(float *)(this + 584);
      *(float *)(this + 816) = *(float *)(this + 588);
      *(float *)(this + 820) = 60.0;
    }
  }
  v3 = *(float *)(dword_106B31C8 + 12) + 0.30000001;
  return sub_100EC4A0(v3, 0);
}
