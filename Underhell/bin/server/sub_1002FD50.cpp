void __thiscall sub_1002FD50(_DWORD *this, char a2)
{
  unsigned int v2; // eax
  int *v3; // esi
  unsigned int v4; // edi
  int v5; // eax

  if ( this[581] == 4 )
  {
    v2 = this[672];
    if ( v2 != -1 )
    {
      v3 = &off_1061BE18[4 * (this[672] & 0xFFF) + 1];
      v4 = v2 >> 12;
      if ( off_1061BE18[4 * (this[672] & 0xFFF) + 2] == this[672] >> 12 )
      {
        if ( *v3 )
        {
          if ( a2 || (v5 = this[671], v5 != 4) && v5 != 5 && v5 != 6 && !*(_BYTE *)(sub_1026A890(this + 672) + 890) )
          {
            if ( v3[1] == v4 )
              sub_10231CC0(*v3, 1);
            else
              sub_10231CC0(0, 1);
          }
        }
      }
    }
  }
}
