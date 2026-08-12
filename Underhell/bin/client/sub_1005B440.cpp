unsigned __int16 __thiscall sub_1005B440(_DWORD *this)
{
  int v2; // eax
  unsigned __int16 v3; // di
  int v4; // eax
  int v5; // ecx
  int v6; // ecx

  v2 = *((unsigned __int16 *)this + 22);
  if ( (_WORD)v2 == 0xFFFF )
  {
    if ( *((unsigned __int16 *)this + 24) == this[1] )
    {
      sub_1011AFE0(1);
      this[13] = *this;
    }
    v3 = *((_WORD *)this + 24);
    *((_WORD *)this + 24) = v3 + 1;
  }
  else
  {
    v3 = *((_WORD *)this + 22);
    *((_WORD *)this + 22) = *(_WORD *)(*this + 40 * v2 + 38);
  }
  v4 = 40 * v3;
  *(_WORD *)(v4 + *this + 36) = v3;
  *(_WORD *)(v4 + *this + 38) = v3;
  v5 = *this;
  ++*((_WORD *)this + 23);
  v6 = v4 + v5;
  if ( v6 )
    sub_1005A940(v6);
  return v3;
}
