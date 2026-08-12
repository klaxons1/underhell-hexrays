void __thiscall sub_103E8AE0(_DWORD *this)
{
  _DWORD *v2; // esi
  int v3; // edi
  unsigned int v4; // ecx
  int *v5; // eax
  unsigned int v6; // ecx
  int v7; // eax
  int *v8; // eax
  int v9; // ecx
  int v10; // eax

  sub_100E20F0(this);
  v2 = this + 515;
  v3 = 2;
  do
  {
    v4 = *(v2 - 2);
    if ( v4 != -1 )
    {
      v5 = &off_1061BE18[4 * (*(v2 - 2) & 0xFFF) + 1];
      v6 = v4 >> 12;
      if ( off_1061BE18[4 * (*(v2 - 2) & 0xFFF) + 2] == v6 )
      {
        if ( *v5 )
        {
          if ( off_1061BE18[4 * (*(v2 - 2) & 0xFFF) + 2] == v6 )
            v7 = *v5;
          else
            v7 = 0;
          sub_1025FAC0(v7);
        }
      }
    }
    if ( *v2 != -1 )
    {
      v8 = &off_1061BE18[4 * (*v2 & 0xFFF) + 1];
      v9 = *v2 >> 12;
      if ( off_1061BE18[4 * (*v2 & 0xFFF) + 2] == v9 )
      {
        if ( *v8 )
        {
          if ( off_1061BE18[4 * (*v2 & 0xFFF) + 2] == v9 )
            v10 = *v8;
          else
            v10 = 0;
          sub_1025FAC0(v10);
        }
      }
    }
    ++v2;
    --v3;
  }
  while ( v3 );
}
