int __thiscall sub_1022A910(_DWORD *this, char *Str, int a3)
{
  _DWORD *v3; // eax

  v3 = sub_1022A6A0(this, Str, 0);
  if ( !v3 )
    return a3;
  if ( *((_BYTE *)v3 + 16) == 4 )
    return v3[3];
  return 0;
}
