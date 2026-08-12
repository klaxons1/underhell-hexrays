_DWORD *__thiscall sub_100A3F10(_DWORD *this, char a2)
{
  int v3; // eax
  int *v4; // ecx

  *this = &CFleckParticles::`vftable';
  v3 = dword_1042E094;
  v4 = &dword_1042E094;
  if ( dword_1042E094 )
  {
    while ( (_DWORD *)v3 != this )
    {
      v4 = (int *)(v3 + 376);
      v3 = *(_DWORD *)(v3 + 376);
      if ( !v3 )
        goto LABEL_6;
    }
    *v4 = *(_DWORD *)(v3 + 376);
  }
LABEL_6:
  sub_100F2BE0(this);
  if ( (a2 & 1) != 0 )
    sub_10034930((int)this);
  return this;
}
