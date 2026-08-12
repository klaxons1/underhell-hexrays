int __thiscall sub_10403FF0(_DWORD *this)
{
  _DWORD *v1; // eax
  int *v2; // edx

  *this = &CAPCMissile::`vftable';
  v1 = (_DWORD *)dword_106F04B0;
  v2 = &dword_106F04B0;
  if ( dword_106F04B0 )
  {
    while ( v1 != this )
    {
      v2 = v1 + 533;
      v1 = (_DWORD *)v1[533];
      if ( !v1 )
        goto LABEL_6;
    }
    *v2 = v1[533];
  }
LABEL_6:
  *this = &CMissile::`vftable';
  return sub_100CF2B0(this);
}
