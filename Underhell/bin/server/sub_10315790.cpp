void __thiscall sub_10315790(_DWORD *this)
{
  int v1; // esi
  _DWORD *v2; // edi
  int v3; // eax

  v1 = this[1042] - 1;
  if ( v1 >= 0 )
  {
    v2 = &this[v1 + 1037];
    do
    {
      if ( *v2 == -1 || off_1061BE18[4 * (*v2 & 0xFFF) + 2] != *v2 >> 12 )
        v3 = 0;
      else
        v3 = off_1061BE18[4 * (*v2 & 0xFFF) + 1];
      sub_1025FAC0(v3);
      *v2-- = -1;
      --v1;
    }
    while ( v1 >= 0 );
  }
}
