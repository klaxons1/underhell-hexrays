int __thiscall sub_102DA4A0(int this)
{
  int result; // eax

  sub_102366B0((_DWORD *)this);
  *(_DWORD *)this = &CHalfLife2::`vftable';
  if ( *(_BYTE *)(this + 12) )
  {
    sub_1015E340();
    *(_BYTE *)(this + 12) = 0;
  }
  result = this;
  *(float *)(this + 16) = 0.0;
  *(float *)(this + 20) = 0.0;
  return result;
}
