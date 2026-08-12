void __thiscall sub_1040F290(_DWORD *this)
{
  _DWORD *v1; // esi
  int v2; // edi
  int *v3; // eax
  int v4; // ecx
  int v5; // eax
  int v6; // eax

  v1 = this + 536;
  v2 = 3;
  do
  {
    if ( *v1 != -1 )
    {
      v3 = &off_1061BE18[4 * (*v1 & 0xFFF) + 1];
      v4 = *v1 >> 12;
      if ( off_1061BE18[4 * (*v1 & 0xFFF) + 2] == v4 )
      {
        if ( *v3 )
        {
          if ( off_1061BE18[4 * (*v1 & 0xFFF) + 2] == v4 )
            v5 = *v3;
          else
            v5 = 0;
          sub_10284F90(v5, 0);
          if ( *v1 == -1 || off_1061BE18[4 * (*v1 & 0xFFF) + 2] != *v1 >> 12 )
            v6 = 0;
          else
            v6 = off_1061BE18[4 * (*v1 & 0xFFF) + 1];
          sub_1025FAC0(v6);
          *v1 = -1;
        }
      }
    }
    ++v1;
    --v2;
  }
  while ( v2 );
}
