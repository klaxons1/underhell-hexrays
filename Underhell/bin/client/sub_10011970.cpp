int __thiscall sub_10011970(float *this, float a2)
{
  int result; // eax

  result = *((_DWORD *)this + 843);
  if ( result != LODWORD(a2) )
    this[843] = a2;
  return result;
}
