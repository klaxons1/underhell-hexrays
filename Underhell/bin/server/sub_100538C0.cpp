int __thiscall sub_100538C0(int this)
{
  int result; // eax

  if ( *(_WORD *)(this + 2) > 1u )
    result = (*(int (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *(_DWORD *)(this + 8));
  *(_DWORD *)(this + 8) = 0;
  return result;
}
