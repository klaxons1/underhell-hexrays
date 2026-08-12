int __thiscall sub_1020E610(int *this)
{
  unsigned int v2; // ecx
  int *v3; // eax
  unsigned int v4; // ecx

  *this = (int)&CPropDoorRotating::`vftable';
  this[280] = (int)&CPropDoorRotating::`vftable';
  this[281] = (int)&CPropDoorRotating::`vftable';
  this[361] = (int)&CPropDoorRotating::`vftable';
  v2 = this[513];
  if ( v2 != -1 )
  {
    v3 = &off_1061BE18[4 * (v2 & 0xFFF) + 1];
    v4 = v2 >> 12;
    if ( v3[1] == v4 )
    {
      if ( *v3 )
      {
        if ( v3[1] == v4 )
        {
          sub_1025FAC0(*v3);
          return sub_1020E360(this);
        }
        sub_1025FAC0(0);
      }
    }
  }
  return sub_1020E360(this);
}
