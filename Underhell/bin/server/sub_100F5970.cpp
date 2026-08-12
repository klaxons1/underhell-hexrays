bool __thiscall sub_100F5970(void *this)
{
  int v2; // esi
  int v4; // eax

  v2 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 1092))(this);
  if ( !v2 )
    return 1;
  v4 = (*(int (__thiscall **)(int, void *))(*(_DWORD *)v2 + 4))(v2, this);
  return (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)v2 + 12))(v2, v4) != 0;
}
