int __thiscall sub_102735B0(int this, int a2)
{
  int result; // eax

  result = sub_10237590((_DWORD *)this, a2);
  if ( *(_DWORD *)(this + 252) )
    return (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 252) + 220))(*(_DWORD *)(this + 252), a2);
  return result;
}
