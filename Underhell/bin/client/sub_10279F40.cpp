int __thiscall sub_10279F40(_DWORD *this, int a2, int a3)
{
  int result; // eax
  int v5; // esi
  int v6; // ecx

  result = a2;
  if ( a2 >= 0 && a2 < this[59] && a2 <= this[65] )
  {
    v5 = 12 * a2;
    v6 = 12 * a2 + this[58];
    if ( *(_DWORD *)(v6 + 4) != a2 || *(_DWORD *)(v6 + 8) == a2 )
    {
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(v5 + this[58]) + 220))(*(_DWORD *)(v5 + this[58]), a3);
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(v5 + this[58]) + 908))(*(_DWORD *)(v5 + this[58]), 1);
      return (*(int (__thiscall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)(v5 + this[58]) + 244))(
               *(_DWORD *)(v5 + this[58]),
               0,
               0);
    }
  }
  return result;
}
