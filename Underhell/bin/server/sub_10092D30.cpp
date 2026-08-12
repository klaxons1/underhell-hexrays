char __thiscall sub_10092D30(void *this, int ArgList, int a3)
{
  (*(void (__thiscall **)(void *))(*(_DWORD *)this + 1656))(this);
  if ( !(unsigned __int8)sub_100B0150(ArgList, a3, 0) )
    return 0;
  (*(void (__thiscall **)(void *, int, int))(*(_DWORD *)this + 2248))(this, ArgList, a3);
  return 1;
}
