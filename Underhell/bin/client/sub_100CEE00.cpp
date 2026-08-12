int __thiscall sub_100CEE00(_DWORD *this, int a2)
{
  _DWORD *v3; // esi
  int result; // eax

  v3 = (_DWORD *)(16 * a2 + *this);
  if ( (int)v3[2] >= 0 )
  {
    if ( *v3 )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *v3);
      *v3 = 0;
    }
    v3[1] = 0;
  }
  result = this[3] - a2 - 1;
  if ( result > 0 )
    result = (int)memcpy((void *)(16 * a2 + *this), (const void *)(16 * a2 + *this + 16), 16 * result);
  --this[3];
  return result;
}
