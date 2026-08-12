bool __thiscall sub_1032E100(int this, int a2)
{
  bool result; // al

  result = 0;
  if ( (*(_DWORD *)(this + 256) & 0x8000000) == 0 && (*(_BYTE *)(a2 + 64) & 8) != 0 )
  {
    *(float *)(this + 3788) = *(float *)(a2 + 52) + *(float *)(this + 3788);
    *(float *)(this + 3792) = *(float *)(dword_106B31C8 + 12) + 5.0;
    if ( (double)*(int *)(this + 216) * 0.1 <= *(float *)(this + 3788) )
      return 1;
  }
  return result;
}
