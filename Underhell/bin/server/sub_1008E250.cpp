unsigned __int16 *__thiscall sub_1008E250(unsigned __int16 *this, int a2)
{
  int v3; // eax
  int v4; // eax
  void *v5; // eax

  *this = a2;
  v3 = (a2 + 31) / 32;
  this[1] = v3;
  *((_DWORD *)this + 2) = 0;
  if ( (_WORD)v3 )
  {
    if ( (unsigned __int16)v3 == 1 )
      v4 = (int)(this + 2);
    else
      v4 = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 4))(g_pMemAlloc, 4 * (unsigned __int16)v3);
    *((_DWORD *)this + 2) = v4;
  }
  v5 = (void *)*((_DWORD *)this + 2);
  if ( v5 )
    memset(v5, 0, 4 * this[1]);
  return this;
}
