int __thiscall sub_103BD3D0(int this)
{
  int result; // eax

  result = *(_DWORD *)(this + 248) >> 7;
  if ( (*(_DWORD *)(this + 248) & 0x80) != 0 )
    *(float *)(this + 3636) = 3.4028235e38;
  else
    *(float *)(this + 3636) = *(float *)(dword_106B31C8 + 12) + 5.0;
  return result;
}
