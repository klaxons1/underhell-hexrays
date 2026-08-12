bool __thiscall sub_100A7E00(_DWORD *this, int a2)
{
  int v3; // edi
  int v4; // eax
  int v5; // esi

  v3 = (*(int (__thiscall **)(_DWORD *, int))(*this + 96))(this, a2);
  if ( !byte_103E0658 )
    return 1;
  v4 = this[1];
  v5 = *(_DWORD *)(*(_DWORD *)(v4 + 4052) + 4);
  return (v5 + (*(int (__thiscall **)(int))(*(_DWORD *)(v4 + 8) + 36))(v4 + 8)) % v3 == 0;
}
