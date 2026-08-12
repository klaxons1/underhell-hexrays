int __thiscall sub_100AC0F0(int this)
{
  int result; // eax

  if ( (*(_BYTE *)(this + 108) & 1) == 0 )
    result = sub_100AC080(this, (int)*(float *)(this + 8));
  if ( (*(_BYTE *)(this + 108) & 2) == 0 )
    return sub_100AAFE0((_DWORD *)this);
  return result;
}
