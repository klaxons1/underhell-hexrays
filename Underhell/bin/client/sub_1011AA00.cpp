int __thiscall sub_1011AA00(_DWORD *this)
{
  int v2; // ebx
  int v3; // edi
  int v4; // eax

  v2 = (*(int (__thiscall **)(_DWORD *))(*this + 12))(this);
  v3 = *(_DWORD *)(this[1] + 4 * this[4]-- - 4);
  (*(void (__thiscall **)(_DWORD *, int))(*this + 16))(this, v3 - 4);
  v4 = this[6];
  if ( !v4 )
    return (*(int (__thiscall **)(_DWORD *, int))(*this + 16))(this, v2);
  if ( *(_DWORD *)(v4 + 12) - *(_DWORD *)(v4 + 8) < 2 )
  {
    *(_DWORD *)(v4 + 8) = *(_DWORD *)(v4 + 12);
    Warning("Save/Restore overflow!\n");
    return (*(int (__thiscall **)(_DWORD *, int))(*this + 16))(this, v2);
  }
  **(_WORD **)(v4 + 4) = v2 - v3;
  *(_DWORD *)(v4 + 4) += 2;
  *(_DWORD *)(v4 + 8) += 2;
  return (*(int (__thiscall **)(_DWORD *, int))(*this + 16))(this, v2);
}
