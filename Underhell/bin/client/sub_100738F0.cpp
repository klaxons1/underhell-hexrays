_DWORD *sub_100738F0()
{
  _DWORD *result; // eax
  _DWORD *v1; // esi

  result = sub_10034900(0x5E0u);
  v1 = result;
  if ( result )
  {
    result = (_DWORD *)sub_1003D000((int)result);
    *v1 = &C_World::`vftable';
    v1[1] = &C_World::`vftable';
    v1[2] = &C_World::`vftable';
    v1[3] = &C_World::`vftable';
    dword_10412D4C = (int)v1;
  }
  else
  {
    dword_10412D4C = 0;
  }
  return result;
}
