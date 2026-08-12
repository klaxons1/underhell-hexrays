int __thiscall sub_1044CC90(_DWORD *this)
{
  _DWORD *v2; // eax

  if ( *this != 24 )
  {
    sub_1044C560(this);
    *this = 24;
    v2 = (_DWORD *)sub_104498A0(dword_1068FF48);
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
