int __thiscall sub_10035430(int this)
{
  int result; // eax

  if ( dword_10690434 )
  {
    LOBYTE(result) = sub_10023000((_DWORD *)dword_10690434, -1);
    dword_10690434 = 0;
    *(_DWORD *)(this + 16) = 0;
    if ( *(int *)(this + 12) >= 0 )
    {
      result = *(_DWORD *)(this + 4);
      if ( result )
      {
        result = (*(int (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *(_DWORD *)(this + 4));
        *(_DWORD *)(this + 4) = 0;
      }
      *(_DWORD *)(this + 8) = 0;
    }
    *(_DWORD *)(this + 20) = *(_DWORD *)(this + 4);
  }
  if ( *(_DWORD *)(dword_106B345C + 48) )
    *(_BYTE *)(this + 24) = 1;
  return result;
}
