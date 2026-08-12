__int16 __thiscall sub_1007A010(_DWORD *this)
{
  unsigned __int16 v2; // ax
  int v3; // edi
  _DWORD *v4; // eax

  v2 = sub_10079A50(this, 0);
  v3 = v2;
  sub_10079D60((int)this, 0xFFFFu, v2);
  v4 = (_DWORD *)(*this + 20 * v3);
  if ( v4 )
    *v4 = -1;
  return v3;
}
