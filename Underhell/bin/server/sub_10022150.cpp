_DWORD *__thiscall sub_10022150(void *this)
{
  _DWORD *result; // eax

  result = (_DWORD *)(*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 4))(g_pMemAlloc, 20);
  *result = 0;
  result[1] = 0;
  result[2] = 0;
  result[3] = 0;
  result[4] = 0;
  if ( !result )
    return 0;
  result[1] = this;
  *result = &CAI_TacticalServices::`vftable';
  result[2] = 0;
  *((_BYTE *)result + 16) = 1;
  return result;
}
