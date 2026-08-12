void __thiscall sub_103B38A0(_DWORD *this, float a2)
{
  unsigned int v2; // ecx
  int *v3; // eax
  unsigned int v4; // ecx

  v2 = this[982];
  if ( v2 != -1 )
  {
    v3 = &off_1061BE18[4 * (v2 & 0xFFF) + 1];
    v4 = v2 >> 12;
    if ( v3[1] == v4 )
    {
      if ( *v3 )
      {
        if ( v3[1] == v4 )
          sub_100F5880((int *)*v3, a2);
        else
          sub_100F5880(0, a2);
      }
    }
  }
}
