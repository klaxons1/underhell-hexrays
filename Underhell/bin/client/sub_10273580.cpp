int __thiscall sub_10273580(int this, int a2)
{
  int result; // eax

  result = sub_10237580((_DWORD *)this, a2);
  if ( *(_DWORD *)(this + 252) )
    return (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 252) + 216))(*(_DWORD *)(this + 252), a2);
  return result;
}
