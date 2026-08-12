char __thiscall sub_100353F0(int this)
{
  *(_DWORD *)(this + 16) = 0;
  if ( *(int *)(this + 12) >= 0 )
  {
    if ( *(_DWORD *)(this + 4) )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *(_DWORD *)(this + 4));
      *(_DWORD *)(this + 4) = 0;
    }
    *(_DWORD *)(this + 8) = 0;
  }
  *(_DWORD *)(this + 20) = *(_DWORD *)(this + 4);
  *(_BYTE *)(this + 24) = 0;
  return 1;
}
