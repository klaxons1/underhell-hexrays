_DWORD *__thiscall sub_10427950(_DWORD *this, int a2, int a3)
{
  *this = 0;
  this[1] = a3;
  this[2] = a2;
  if ( a3 )
    *this = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 4))(g_pMemAlloc, 4 * a3);
  this[4] = *this;
  this[3] = 0;
  return this;
}
