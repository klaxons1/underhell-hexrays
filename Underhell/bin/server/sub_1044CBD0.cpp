int __thiscall sub_1044CBD0(_DWORD *this)
{
  _DWORD *v2; // eax

  if ( *this != 21 )
  {
    sub_1044C560(this);
    *this = 21;
    v2 = (_DWORD *)sub_104498A0(dword_1068FF3C);
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
