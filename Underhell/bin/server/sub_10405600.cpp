int __thiscall sub_10405600(_DWORD *this)
{
  unsigned int v2; // eax
  int *v3; // ecx
  unsigned int v4; // eax
  int v5; // ecx
  unsigned int v6; // ecx
  int *v7; // eax
  unsigned int v8; // ecx

  *this = &CWeaponRPG::`vftable';
  v2 = this[352];
  if ( v2 != -1 )
  {
    v3 = &off_1061BE18[4 * (this[352] & 0xFFF) + 1];
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
        this[352] = -1;
      }
    }
  }
  v6 = this[355];
  if ( v6 != -1 )
  {
    v7 = &off_1061BE18[4 * (this[355] & 0xFFF) + 1];
    v8 = v6 >> 12;
    if ( off_1061BE18[4 * (this[355] & 0xFFF) + 2] == v8 )
    {
      if ( *v7 )
      {
        if ( off_1061BE18[4 * (this[355] & 0xFFF) + 2] == v8 )
        {
          sub_1025FAC0(*v7);
          return sub_100D0C40(this);
        }
        sub_1025FAC0(0);
      }
    }
  }
  return sub_100D0C40(this);
}
