int __thiscall sub_101F7EC0(int this)
{
  *(_DWORD *)this = &CBasePlayer::`vftable';
  sub_101E3450((_DWORD *)this);
  sub_101EA130((_WORD *)(this + 4892));
  if ( *(int *)(this + 4900) >= 0 )
  {
    if ( *(_DWORD *)(this + 4892) )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *(_DWORD *)(this + 4892));
      *(_DWORD *)(this + 4892) = 0;
    }
    *(_DWORD *)(this + 4896) = 0;
  }
  sub_101EA0C0((_WORD *)(this + 4864));
  if ( *(int *)(this + 4872) >= 0 )
  {
    if ( *(_DWORD *)(this + 4864) )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *(_DWORD *)(this + 4864));
      *(_DWORD *)(this + 4864) = 0;
    }
    *(_DWORD *)(this + 4868) = 0;
  }
  *(_DWORD *)(this + 4492) = &CPlayerInfo::`vftable';
  *(_DWORD *)(this + 4496) = &CPlayerInfo::`vftable';
  sub_102375F0(this + 4232);
  *(_DWORD *)(this + 4036) = &CUserCmd::`vftable';
  sub_102375F0(this + 4100);
  sub_101F7760((int *)(this + 3568));
  *(_DWORD *)(this + 3240) = &CPlayerState::`vftable';
  sub_102375F0(this + 3220);
  return sub_100CF2B0((_DWORD *)this);
}
