bool __thiscall sub_10157680(_DWORD *this, int a2)
{
  int v3; // edi
  int v4; // eax
  int v5; // esi

  v3 = (*(int (__thiscall **)(_DWORD *, int))(*this + 96))(this, a2);
  if ( !byte_10627EF5 )
    return 1;
  v4 = this[1];
  v5 = *(_DWORD *)(*(_DWORD *)(v4 + 4120) + 4);
  return (v5
        + (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, *(_DWORD *)(v4 + 24)))
       % v3 == 0;
}
