int __thiscall sub_1000CBA0(float *this, float a2)
{
  int result; // eax

  result = *((_DWORD *)this + 495);
  if ( result != LODWORD(a2) )
    this[495] = a2;
  return result;
}
