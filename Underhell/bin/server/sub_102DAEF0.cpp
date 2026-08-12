char __thiscall sub_102DAEF0(float *this, int a2)
{
  double v3; // st7
  char result; // al

  if ( this[1406] >= (double)*(float *)(dword_106B31C8 + 12) )
    return 0;
  v3 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
         dword_106B31E4,
         3.0,
         5.0);
  result = 1;
  this[1406] = v3 + *(float *)(dword_106B31C8 + 12);
  return result;
}
