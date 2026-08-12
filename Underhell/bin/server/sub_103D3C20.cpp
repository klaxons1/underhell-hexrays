void __thiscall sub_103D3C20(_DWORD *this)
{
  unsigned int v1; // ecx
  int *v2; // eax
  unsigned int v3; // ecx

  v1 = this[292];
  if ( v1 != -1 )
  {
    v2 = &off_1061BE18[4 * (v1 & 0xFFF) + 1];
    v3 = v1 >> 12;
    if ( v2[1] == v3 )
    {
      if ( *v2 )
      {
        if ( v2[1] == v3 )
          sub_103D3960(*v2);
        else
          sub_103D3960(0);
      }
    }
  }
}
