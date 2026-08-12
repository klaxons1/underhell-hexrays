int __thiscall sub_102AD740(_DWORD *this)
{
  _DWORD *v2; // eax

  if ( *this != 24 )
  {
    sub_102AD010(this);
    *this = 24;
    v2 = (_DWORD *)sub_102AAF30(dword_103FF018);
    this[2] = v2;
    if ( v2 )
    {
      *v2 = 0;
      v2[1] = 0;
      v2[2] = 0;
      v2[3] = 0;
      v2[4] = 0;
    }
  }
  return this[2];
}
