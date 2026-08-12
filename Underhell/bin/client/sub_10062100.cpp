int __thiscall sub_10062100(_DWORD *this, float a2)
{
  int i; // eax
  _DWORD *v4; // edx
  char v5; // cl
  int result; // eax

  for ( i = 0; i < this[476]; *v4 &= ~(1 << v5) )
  {
    v4 = &this[(i >> 5) + 298];
    v5 = i++ & 0x1F;
  }
  sub_10116650((int)(this + 314), a2);
  result = 0;
  for ( this[299] = 0; result < this[476]; ++result )
  {
    if ( ((1 << (result & 0x1F)) & this[(result >> 5) + 298]) != 0 )
      ++this[299];
  }
  return result;
}
