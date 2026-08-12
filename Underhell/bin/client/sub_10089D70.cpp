int __thiscall sub_10089D70(int this)
{
  int v2; // eax
  int result; // eax

  sub_10087F70((_WORD *)(this + 4));
  if ( *(int *)(this + 12) >= 0 )
  {
    if ( *(_DWORD *)(this + 4) )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *(_DWORD *)(this + 4));
      *(_DWORD *)(this + 4) = 0;
    }
    *(_DWORD *)(this + 8) = 0;
  }
  v2 = *(_DWORD *)(this + 4);
  *(_WORD *)(this + 20) = -1;
  *(_WORD *)(this + 24) = -1;
  *(_DWORD *)(this + 28) = v2;
  sub_10089840((unsigned __int16 *)(this + 32));
  result = -1;
  *(_DWORD *)(this + 88) = -1;
  *(_DWORD *)(this + 92) = -1;
  *(_DWORD *)(this + 96) = -1;
  *(_DWORD *)(this + 100) = -1;
  *(_WORD *)(this + 104) = -1;
  return result;
}
