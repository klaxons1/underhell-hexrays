int __thiscall sub_102AD580(_DWORD *this)
{
  _DWORD *v2; // eax

  if ( *this != 17 )
  {
    sub_102AD010(this);
    *this = 17;
    v2 = (_DWORD *)sub_102AAF30(dword_103FEFFC);
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
