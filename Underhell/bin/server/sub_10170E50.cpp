_DWORD *__thiscall sub_10170E50(_DWORD *this, char a2)
{
  _DWORD *v3; // eax

  *this = &CInfoCameraLink::`vftable';
  v3 = (_DWORD *)dword_1062975C;
  if ( dword_1062975C )
  {
    while ( (_DWORD *)*v3 != this )
    {
      v3 = (_DWORD *)v3[2];
      if ( !v3 )
        goto LABEL_6;
    }
    sub_10170C40(&dword_10629750, (unsigned int)v3);
  }
LABEL_6:
  sub_100DF1D0(this);
  if ( (a2 & 1) != 0 )
    sub_100D6360((int)this);
  return this;
}
