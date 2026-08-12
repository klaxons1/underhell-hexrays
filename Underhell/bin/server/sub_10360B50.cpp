void __thiscall sub_10360B50(_DWORD *this)
{
  _DWORD *v2; // esi
  int v3; // edi
  int *v4; // eax
  int v5; // ecx
  int v6; // eax

  sub_103607A0(this);
  v2 = this + 1088;
  v3 = 4;
  do
  {
    if ( *v2 != -1 )
    {
      v4 = &off_1061BE18[4 * (*v2 & 0xFFF) + 1];
      v5 = *v2 >> 12;
      if ( off_1061BE18[4 * (*v2 & 0xFFF) + 2] == v5 )
      {
        if ( *v4 )
        {
          if ( off_1061BE18[4 * (*v2 & 0xFFF) + 2] == v5 )
            v6 = *v4;
          else
            v6 = 0;
          sub_1025FAC0(v6);
          *v2 = -1;
        }
      }
    }
    ++v2;
    --v3;
  }
  while ( v3 );
}
