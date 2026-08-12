int __thiscall sub_1005A9C0(_DWORD *this)
{
  int v2; // esi
  int result; // eax
  int v4; // edi

  v2 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C96C + 380))(dword_1047C96C);
  if ( v2 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 8))(v2);
  result = this[6];
  if ( result )
    result = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v2 + 360))(v2, this[6]);
  v4 = this[7];
  if ( v4 )
    result = (*(int (__thiscall **)(int, int))(*(_DWORD *)v2 + 360))(v2, v4);
  if ( v2 )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 12))(v2);
    return (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 4))(v2);
  }
  return result;
}
