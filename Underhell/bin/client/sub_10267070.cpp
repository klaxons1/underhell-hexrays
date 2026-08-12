unsigned __int8 __thiscall sub_10267070(int *this, unsigned __int8 a2)
{
  unsigned __int8 v3; // bl
  _DWORD *v4; // eax

  v3 = sub_10263C60(this, 0);
  sub_10266570((int)this, a2, v3);
  v4 = (_DWORD *)(*this + 72 * v3);
  if ( v4 )
  {
    v4[7] = 0;
    v4[8] = 0;
    v4[9] = 0;
    v4[10] = 0;
    v4[11] = -1;
    v4[13] = -1;
    v4[12] = 0;
    v4[14] = -1;
    v4[15] = v4[8];
  }
  return v3;
}
