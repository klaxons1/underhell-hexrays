char __thiscall sub_100B0F60(void *this, int a2, int a3, int a4)
{
  if ( a2 <= 0 )
    return 0;
  else
    return (*(int (__thiscall **)(void *, int, int, int))(*(_DWORD *)this + 896))(this, a2, a3, a4);
}
