int __thiscall sub_1005E400(int this)
{
  int result; // eax
  float v3; // [esp+0h] [ebp-Ch]

  if ( *(_BYTE *)(this + 804) )
  {
    sub_100EC3F0((int)sub_1005D9F0, 0.0, 0);
    v3 = *(float *)(dword_106B31C8 + 12) + 0.30000001;
    result = sub_100EC4A0(v3, 0);
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      result = sub_100DAE60(this);
    *(float *)(this + 808) = *(float *)(this + 580);
    *(float *)(this + 812) = *(float *)(this + 584);
    *(float *)(this + 816) = *(float *)(this + 588);
    *(float *)(this + 820) = 60.0;
  }
  return result;
}
