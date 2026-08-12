int __thiscall sub_102AD840(_DWORD *this)
{
  _DWORD *v2; // eax

  if ( *this != 28 )
  {
    sub_102AD010(this);
    *this = 28;
    v2 = (_DWORD *)sub_102AAF30(dword_103FF028);
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
