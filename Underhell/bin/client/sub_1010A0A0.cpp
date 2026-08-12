int __thiscall sub_1010A0A0(_DWORD *this, int a2, float *a3, int a4, int a5)
{
  int result; // eax

  result = this[13];
  if ( result == this[6] )
    return sub_10109E10((int)this, "vector (%f %f %f)", *a3, a3[1], a3[2]);
  return result;
}
