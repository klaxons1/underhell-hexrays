int __thiscall sub_103A4D00(int this)
{
  int result; // eax
  long double v2; // st7

  if ( *(_BYTE *)(this + 3968) )
  {
    result = dword_106B31C8;
    v2 = sin((*(float *)(this + 3792) + *(float *)(dword_106B31C8 + 12)) * 2.5) * 0.1 + 1.0;
    *(float *)(this + 3624) = *(float *)(this + 3624) * v2;
    *(float *)(this + 3628) = v2 * *(float *)(this + 3628);
    *(float *)(this + 3632) = v2 * *(float *)(this + 3632);
  }
  return result;
}
