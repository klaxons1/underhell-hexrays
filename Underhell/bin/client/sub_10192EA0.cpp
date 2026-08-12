int __thiscall sub_10192EA0(_DWORD *this)
{
  _DWORD *v2; // eax

  *this = &C_InfoTeleporterCountdown::`vftable';
  this[1] = &C_InfoTeleporterCountdown::`vftable';
  this[2] = &C_InfoTeleporterCountdown::`vftable';
  this[3] = &C_InfoTeleporterCountdown::`vftable';
  v2 = (_DWORD *)dword_103EADCC;
  if ( dword_103EADCC )
  {
    while ( (_DWORD *)*v2 != this )
    {
      v2 = (_DWORD *)v2[2];
      if ( !v2 )
        return sub_1003D350((int)this);
    }
    sub_10192D90(&dword_103EADC0, (unsigned int)v2);
  }
  return sub_1003D350((int)this);
}
