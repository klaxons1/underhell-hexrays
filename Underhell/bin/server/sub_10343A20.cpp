int __thiscall sub_10343A20(_DWORD *this)
{
  unsigned int v2; // eax
  int *v3; // ecx
  unsigned int v4; // eax
  int v5; // ecx
  _DWORD *v6; // esi
  int v7; // edi
  int *v8; // eax
  int v9; // ecx
  int v10; // eax

  v2 = this[911];
  if ( v2 != -1 )
  {
    v3 = &off_1061BE18[4 * (this[911] & 0xFFF) + 1];
    v4 = v2 >> 12;
    if ( v3[1] == v4 )
    {
      if ( *v3 )
      {
        if ( v3[1] == v4 )
          v5 = *v3;
        else
          v5 = 0;
        sub_1025FAC0(v5);
        this[911] = -1;
      }
    }
  }
  v6 = this + 912;
  v7 = 4;
  do
  {
    if ( *v6 != -1 )
    {
      v8 = &off_1061BE18[4 * (*v6 & 0xFFF) + 1];
      v9 = *v6 >> 12;
      if ( off_1061BE18[4 * (*v6 & 0xFFF) + 2] == v9 )
      {
        if ( *v8 )
        {
          if ( off_1061BE18[4 * (*v6 & 0xFFF) + 2] == v9 )
            v10 = *v8;
          else
            v10 = 0;
          sub_1025FAC0(v10);
          *v6 = -1;
        }
      }
    }
    ++v6;
    --v7;
  }
  while ( v7 );
  return sub_10021F20(this);
}
