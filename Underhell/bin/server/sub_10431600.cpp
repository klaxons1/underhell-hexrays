int __thiscall sub_10431600(unsigned __int16 *this)
{
  int result; // eax

  sub_101C5390(this);
  if ( *((_DWORD *)this + 10) )
    (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *((_DWORD *)this + 10));
  result = sub_101C56D0(this + 6);
  if ( *((int *)this + 5) >= 0 )
  {
    result = *((_DWORD *)this + 3);
    if ( result )
    {
      result = (*(int (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *((_DWORD *)this + 3));
      *((_DWORD *)this + 3) = 0;
    }
    *((_DWORD *)this + 4) = 0;
  }
  if ( *((int *)this + 2) >= 0 )
  {
    result = *(_DWORD *)this;
    if ( *(_DWORD *)this )
    {
      result = (*(int (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *(_DWORD *)this);
      *(_DWORD *)this = 0;
    }
    *((_DWORD *)this + 1) = 0;
  }
  return result;
}
