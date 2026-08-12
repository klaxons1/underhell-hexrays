int __thiscall sub_101F58E0(_BYTE *this, char a2)
{
  _BYTE *v3; // eax

  if ( (this[1060] & 1) == 0 )
    return 0;
  v3 = this + 284;
  if ( !a2 )
    v3 = this + 280;
  return *(_DWORD *)v3;
}
