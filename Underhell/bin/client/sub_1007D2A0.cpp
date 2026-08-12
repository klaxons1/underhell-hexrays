int (__thiscall *__thiscall sub_1007D2A0(void *this))(int)
{
  int (__thiscall *result)(int); // eax
  void (__thiscall *v3)(int); // eax
  unsigned __int32 v4; // edi
  unsigned __int32 i; // eax

  result = (int (__thiscall *)(int))*((_DWORD *)this + 8);
  if ( (unsigned int)result < *((_DWORD *)this + 9) )
  {
    v3 = (void (__thiscall *)(int))*((_DWORD *)this + 4);
    if ( v3 )
      v3(*(_DWORD *)this + *((_DWORD *)this + 5));
    v4 = *((_DWORD *)this + 9);
    for ( i = _InterlockedExchangeAdd((volatile signed __int32 *)this + 8, 2u);
          i < v4;
          i = _InterlockedExchangeAdd((volatile signed __int32 *)this + 8, 2u) )
    {
      (*((void (__thiscall **)(int, unsigned __int32))this + 2))(*(_DWORD *)this + *((_DWORD *)this + 3), i);
    }
    result = (int (__thiscall *)(int))*((_DWORD *)this + 6);
    if ( result )
      return (int (__thiscall *)(int))result(*(_DWORD *)this + *((_DWORD *)this + 7));
  }
  return result;
}
