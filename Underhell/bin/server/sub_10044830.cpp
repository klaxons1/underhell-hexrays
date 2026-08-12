void __thiscall sub_10044830(_DWORD *this, float a2)
{
  unsigned int v3; // ecx

  v3 = this[722];
  if ( v3 != -1 && off_1061BE18[4 * (v3 & 0xFFF) + 2] == v3 >> 12 && off_1061BE18[4 * (v3 & 0xFFF) + 1] )
  {
    if ( (unsigned __int8)sub_10070540(this) )
      sub_10070510(a2);
    this[722] = -1;
  }
}
