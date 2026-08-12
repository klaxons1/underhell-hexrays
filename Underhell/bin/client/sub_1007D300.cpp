unsigned int __thiscall sub_1007D300(void *this)
{
  unsigned int result; // eax
  void (*v3)(void); // eax
  unsigned int v4; // edi
  int (*v5)(void); // esi

  result = *((_DWORD *)this + 3);
  if ( result < *((_DWORD *)this + 4) )
  {
    v3 = (void (*)(void))*((_DWORD *)this + 1);
    if ( v3 )
      v3();
    v4 = *((_DWORD *)this + 4);
    for ( result = _InterlockedExchangeAdd((volatile signed __int32 *)this + 3, 4u);
          result < v4;
          result = _InterlockedExchangeAdd((volatile signed __int32 *)this + 3, 4u) )
    {
      (*(void (__cdecl **)(unsigned int))this)(result);
    }
    v5 = (int (*)(void))*((_DWORD *)this + 2);
    if ( v5 )
      return v5();
  }
  return result;
}
