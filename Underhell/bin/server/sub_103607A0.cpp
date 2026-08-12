void __thiscall sub_103607A0(_DWORD *this)
{
  _DWORD *v1; // esi
  int v2; // edi
  int *v3; // eax
  int v4; // ecx
  int v5; // eax

  v1 = this + 1084;
  v2 = 4;
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
          sub_1025FAC0(v5);
          *v1 = -1;
        }
      }
    }
    ++v1;
    --v2;
  }
  while ( v2 );
}
