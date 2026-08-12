int __thiscall sub_100BCDF0(void *this, int a2)
{
  if ( *(_DWORD *)(a2 + 24) == 5 )
    return (*(int (__thiscall **)(void *, _DWORD))(*(_DWORD *)this + 816))(this, *(_DWORD *)(a2 + 8));
  else
    return (*(int (__thiscall **)(void *, _DWORD))(*(_DWORD *)this + 816))(this, 0);
}
