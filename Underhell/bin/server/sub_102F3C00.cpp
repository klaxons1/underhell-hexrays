char __thiscall sub_102F3C00(_DWORD *this)
{
  int v2; // eax
  _DWORD *v3; // eax

  v2 = sub_100CF460(this);
  if ( v2 )
  {
    v3 = (_DWORD *)sub_100CF460(this);
    LOBYTE(v2) = sub_100EAB80(v3, 32);
  }
  return v2;
}
