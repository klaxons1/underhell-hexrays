int __thiscall sub_1024BDB0(_DWORD *this)
{
  int v2; // eax
  int v3; // esi
  int result; // eax

  v2 = (*(int (__thiscall **)(_DWORD *))(this[54] + 28))(this + 54);
  v3 = v2;
  if ( (_DWORD *)v2 == this )
    return 0;
  if ( !v2 || (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v2 + 208))(v2) )
    return sub_101915B0();
  result = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 64))(v3);
  if ( !result )
    return (**(int (__thiscall ***)(int))v3)(v3);
  return result;
}
