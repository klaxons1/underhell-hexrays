_DWORD *sub_101AB6E0()
{
  _DWORD *result; // eax
  _DWORD *v1; // esi

  result = (_DWORD *)sub_100DDA40(16);
  v1 = result;
  if ( result )
  {
    result = sub_100AE000(result);
    *v1 = &C_HalfLife2::`vftable';
  }
  return result;
}
