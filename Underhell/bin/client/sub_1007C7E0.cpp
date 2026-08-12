int __thiscall sub_1007C7E0(int this)
{
  *(_DWORD *)this = &CClientEntityList::`vftable';
  *(_DWORD *)(this + 65556) = &CClientEntityList::`vftable';
  sub_1007A900((_DWORD *)this);
  sub_1007C4B0(this + 98420);
  sub_1007AFD0((_WORD *)(this + 98392));
  if ( *(int *)(this + 98400) >= 0 )
  {
    if ( *(_DWORD *)(this + 98392) )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *(_DWORD *)(this + 98392));
      *(_DWORD *)(this + 98392) = 0;
    }
    *(_DWORD *)(this + 98396) = 0;
  }
  sub_100EC500(this + 98364);
  if ( *(int *)(this + 98372) >= 0 )
  {
    if ( *(_DWORD *)(this + 98364) )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *(_DWORD *)(this + 98364));
      *(_DWORD *)(this + 98364) = 0;
    }
    *(_DWORD *)(this + 98368) = 0;
  }
  sub_1011A810(this + 65560);
  return sub_1009BEC0(this);
}
