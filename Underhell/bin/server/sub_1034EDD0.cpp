int __thiscall sub_1034EDD0(int *this)
{
  unsigned int v2; // ecx
  int *v3; // eax
  unsigned int v4; // ecx
  int v5; // eax

  *this = (int)&CNPC_CombineDropship::`vftable';
  this[526] = (int)&CNPC_CombineDropship::`vftable';
  v2 = this[1004];
  if ( v2 != -1 )
  {
    v3 = &off_1061BE18[4 * (v2 & 0xFFF) + 1];
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
      }
    }
  }
  sub_1010BB10(this + 1060);
  sub_1010BB10(this + 1054);
  sub_1010BB10(this + 1048);
  sub_1010BB10(this + 1042);
  sub_102375F0(this + 975);
  return sub_10037B80(this);
}
