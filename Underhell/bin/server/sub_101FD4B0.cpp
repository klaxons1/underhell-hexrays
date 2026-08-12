_DWORD *__thiscall sub_101FD4B0(_DWORD *this, char a2)
{
  int v3; // eax
  int *v4; // ecx

  *this = &CPointCamera::`vftable';
  v3 = dword_106C0F80;
  v4 = &dword_106C0F80;
  if ( dword_106C0F80 )
  {
    while ( (_DWORD *)v3 != this )
    {
      v4 = (int *)(v3 + 848);
      v3 = *(_DWORD *)(v3 + 848);
      if ( !v3 )
        goto LABEL_6;
    }
    *v4 = *(_DWORD *)(v3 + 848);
  }
LABEL_6:
  sub_100DF1D0(this);
  if ( (a2 & 1) != 0 )
    sub_100D6360((int)this);
  return this;
}
