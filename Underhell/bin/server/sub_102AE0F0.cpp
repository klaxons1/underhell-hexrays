int __thiscall sub_102AE0F0(int *this)
{
  unsigned int v2; // ecx
  int *v3; // eax
  unsigned int v4; // ecx
  int v5; // eax
  bool v6; // sf

  *this = (int)&CAntlionTemplateMaker::`vftable';
  v2 = this[249];
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
  v6 = this[253] < 0;
  this[254] = 0;
  if ( !v6 )
  {
    if ( this[251] )
    {
      (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, this[251]);
      this[251] = 0;
    }
    this[252] = 0;
  }
  this[255] = this[251];
  sub_1010BB10(this + 264);
  sub_102375F0(this + 251);
  sub_1010BB10(this + 221);
  sub_1010BB10(this + 215);
  sub_1010BB10(this + 209);
  sub_1010BB10(this + 203);
  return sub_100DF1D0(this);
}
