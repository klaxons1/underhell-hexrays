int __thiscall sub_10094FA0(_DWORD *this)
{
  int v2; // eax
  int v3; // eax
  int result; // eax

  v2 = this[34];
  if ( v2 )
  {
    (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *(_DWORD *)((v2 & 0xFFFFFFFC) - 4));
    this[34] = 0;
  }
  v3 = this[35];
  if ( v3 )
  {
    (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *(_DWORD *)((v3 & 0xFFFFFFFC) - 4));
    this[35] = 0;
  }
  result = this[36];
  if ( result )
  {
    result = (*(int (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(
               g_pMemAlloc,
               *(_DWORD *)((result & 0xFFFFFFFC) - 4));
    this[36] = 0;
  }
  return result;
}
