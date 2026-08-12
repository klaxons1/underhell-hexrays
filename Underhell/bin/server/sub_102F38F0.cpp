int __thiscall sub_102F38F0(float *this, int a2, int a3)
{
  int result; // eax

  result = 3;
  if ( a3 == 3 )
  {
    this[1433] = *(float *)(dword_106B31C8 + 12);
  }
  else if ( a2 == 3 )
  {
    result = dword_106B31C8;
    this[1434] = *(float *)(dword_106B31C8 + 12) + 2.0;
  }
  return result;
}
