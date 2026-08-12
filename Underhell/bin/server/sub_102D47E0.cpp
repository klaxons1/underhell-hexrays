int __thiscall sub_102D47E0(_DWORD *this)
{
  int v2; // eax
  int *v3; // ecx

  *this = &CBugBaitSensor::`vftable';
  v2 = dword_106DE6E4;
  v3 = &dword_106DE6E4;
  if ( dword_106DE6E4 )
  {
    while ( (_DWORD *)v2 != this )
    {
      v3 = (int *)(v2 + 832);
      v2 = *(_DWORD *)(v2 + 832);
      if ( !v2 )
        goto LABEL_6;
    }
    *v3 = *(_DWORD *)(v2 + 832);
  }
LABEL_6:
  sub_1010BB10(this + 202);
  return sub_100DF1D0(this);
}
