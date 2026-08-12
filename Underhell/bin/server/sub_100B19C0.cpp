void __thiscall sub_100B19C0(_DWORD *this, int a2)
{
  int v2; // esi
  _DWORD *v3; // edi
  int *v4; // eax
  int v5; // edx
  int v6; // eax

  v2 = 0;
  if ( (int)this[18] > 0 )
  {
    v3 = this + 2;
    do
    {
      if ( *v3 != -1 )
      {
        v4 = &off_1061BE18[4 * (*v3 & 0xFFF) + 1];
        v5 = *v3 >> 12;
        if ( off_1061BE18[4 * (*v3 & 0xFFF) + 2] == v5 )
        {
          if ( *v4 )
          {
            if ( off_1061BE18[4 * (*v3 & 0xFFF) + 2] == v5 )
              v6 = *v4;
            else
              v6 = 0;
            *(_DWORD *)(v6 + 2716) |= a2;
          }
        }
      }
      ++v2;
      ++v3;
    }
    while ( v2 < this[18] );
  }
}
