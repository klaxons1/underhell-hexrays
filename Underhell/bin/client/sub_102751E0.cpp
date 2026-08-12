int __thiscall sub_102751E0(int this)
{
  int i; // esi
  int result; // eax

  for ( i = *(_DWORD *)(this + 232) - 1; i >= 0; --i )
    result = (*(int (__thiscall **)(_DWORD, _DWORD, _DWORD, int))(**(_DWORD **)(this + 268) + 792))(
               *(_DWORD *)(this + 268),
               *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(this + 220) + 4 * i) + 208),
               0,
               1);
  *(_DWORD *)(this + 232) = 0;
  return result;
}
