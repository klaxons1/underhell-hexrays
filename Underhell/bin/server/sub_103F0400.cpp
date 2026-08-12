int __thiscall sub_103F0400(_DWORD *this)
{
  _DWORD *v2; // esi
  int v3; // edi
  int *v4; // eax
  int v5; // ecx
  int v6; // eax

  v2 = this + 520;
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
        }
      }
    }
    ++v2;
    --v3;
  }
  while ( v3 );
  return sub_100EC3F0(this, 0, *(float *)(dword_106B31C8 + 12), (int)"HazardBlink");
}
