int __thiscall sub_10226130(_DWORD *this)
{
  int v2; // esi
  _DWORD *v3; // edi

  v2 = 0;
  v3 = this + 221;
  do
  {
    if ( *v3 != -1 && off_1061BE18[4 * (*v3 & 0xFFF) + 2] == *v3 >> 12 && off_1061BE18[4 * (*v3 & 0xFFF) + 1] )
      sub_10226190(v2);
    ++v2;
    ++v3;
  }
  while ( v2 < 16 );
  return sub_1025FAC0(this);
}
