_DWORD *__thiscall sub_100BA1F0(_DWORD *this, char a2)
{
  _DWORD *v3; // esi
  int v4; // edi

  *this = &CAmmoDef::`vftable';
  v3 = this + 15;
  v4 = 31;
  do
  {
    sub_10184660(*v3);
    v3 += 13;
    --v4;
  }
  while ( v4 );
  if ( (a2 & 1) != 0 )
    sub_10184660(this);
  return this;
}
