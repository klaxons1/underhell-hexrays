int __thiscall sub_1044CD50(_DWORD *this)
{
  _DWORD *v2; // eax

  if ( *this != 27 )
  {
    sub_1044C560(this);
    *this = 27;
    v2 = (_DWORD *)sub_104498A0(dword_1068FF54);
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
