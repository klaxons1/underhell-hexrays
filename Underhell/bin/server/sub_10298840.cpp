bool __thiscall sub_10298840(int this)
{
  if ( *(_BYTE *)(this + 36) || *(_BYTE *)(this + 17) || *(_BYTE *)(this + 38) )
    return 1;
  if ( *(_BYTE *)(this + 16)
    && *(float *)(dword_106B31C8 + 12) >= (double)*(float *)(this + 88)
    && sub_10297830(this) <= 0
    && sub_10295EF0((_DWORD *)this) )
  {
    return *(float *)(dword_106B31C8 + 12) > (double)*(float *)(this + 40);
  }
  return 0;
}
