int __thiscall sub_10011990(float *this, float a2)
{
  int result; // eax

  result = *((_DWORD *)this + 839);
  if ( result != LODWORD(a2) )
    this[839] = a2;
  return result;
}
