int __thiscall sub_10123ED0(float *this, int a2, float a3)
{
  int result; // eax

  if ( *((_DWORD *)this + 307) != a2 )
    *((_DWORD *)this + 307) = a2;
  result = *((_DWORD *)this + 308);
  if ( result != LODWORD(a3) )
    this[308] = a3;
  return result;
}
