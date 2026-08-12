char __thiscall sub_101851A0(int this, int a2)
{
  char result; // al

  if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)this + 720))(this) )
    return sub_101850D0((unsigned __int16 *)this);
  result = (*(int (__thiscall **)(int))(*(_DWORD *)this + 720))(this);
  if ( result )
  {
    if ( *(_DWORD *)(this + 800) != 2 )
      sub_101129A0((unsigned __int16 *)(this + 320), *(_WORD *)(this + 356) | 4);
    result = sub_100EAB80((_DWORD *)this, 32);
    *(_DWORD *)(this + 804) = 1;
  }
  return result;
}
