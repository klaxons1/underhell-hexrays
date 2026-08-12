_DWORD *__thiscall sub_10236A60(_DWORD *this, char a2)
{
  int v3; // eax
  int *v4; // ecx

  *this = &CSkyCamera::`vftable';
  v3 = dword_106C4AE8;
  v4 = &dword_106C4AE8;
  if ( dword_106C4AE8 )
  {
    while ( (_DWORD *)v3 != this )
    {
      v4 = (int *)(v3 + 896);
      v3 = *(_DWORD *)(v3 + 896);
      if ( !v3 )
        goto LABEL_6;
    }
    *v4 = *(_DWORD *)(v3 + 896);
  }
LABEL_6:
  sub_100DF1D0(this);
  if ( (a2 & 1) != 0 )
    sub_100D6360((int)this);
  return this;
}
