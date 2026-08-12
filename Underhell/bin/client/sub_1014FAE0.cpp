int __stdcall sub_1014FAE0(int a1)
{
  int result; // eax

  if ( *(_DWORD *)(dword_1043CA1C + 48) == 2 )
    return (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 808))(a1);
  result = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 808))(a1);
  if ( (_BYTE)result )
    return (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 804))(a1);
  return result;
}
