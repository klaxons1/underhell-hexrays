int __thiscall sub_1005B840(unsigned __int16 *this)
{
  int result; // eax

  sub_1005B560(this);
  if ( *((_DWORD *)this + 10) )
    (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *((_DWORD *)this + 10));
  result = sub_10087F70(this + 6);
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
