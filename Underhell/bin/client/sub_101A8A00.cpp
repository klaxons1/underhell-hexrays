int __thiscall sub_101A8A00(int this, char a2)
{
  sub_100EC500((_WORD *)(this + 12));
  if ( *(int *)(this + 20) >= 0 )
  {
    if ( *(_DWORD *)(this + 12) )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *(_DWORD *)(this + 12));
      *(_DWORD *)(this + 12) = 0;
    }
    *(_DWORD *)(this + 16) = 0;
  }
  sub_100D3350((_DWORD *)this);
  if ( (a2 & 1) != 0 )
    sub_10034930(this);
  return this;
}
