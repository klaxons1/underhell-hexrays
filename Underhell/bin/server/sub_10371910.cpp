char __thiscall sub_10371910(float *this, int a2)
{
  char result; // al
  double v4; // st7

  if ( *(float *)(a2 + 52) < 45.0
    || *(float *)(a2 + 52) < 180.0 && (*(float *)(dword_106B31C8 + 12) - this[1054] <= -0.001 || !sub_1001F7D0(a2)) )
  {
    return 0;
  }
  v4 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
         dword_106B31E4,
         15.0,
         25.0);
  result = 1;
  this[1054] = v4 + *(float *)(dword_106B31C8 + 12);
  return result;
}
