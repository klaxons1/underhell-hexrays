int __thiscall sub_1021CCD0(int (__thiscall ****this)(_DWORD, _DWORD, _DWORD, _DWORD), int a2, int a3, float *a4)
{
  int result; // eax

  if ( this[1] )
    return (**this[1])(this[1], a2, a3, a4);
  result = (int)a4;
  *a4 = 0.0;
  a4[1] = 0.0;
  a4[2] = 0.0;
  return result;
}
