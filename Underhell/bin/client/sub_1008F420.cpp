int __thiscall sub_1008F420(int *this)
{
  int result; // eax
  int v3; // eax
  int v4; // esi

  result = (*(int (__thiscall **)(int))(*(_DWORD *)(this[1] + 8) + 36))(this[1] + 8);
  if ( result )
  {
    v3 = this[1];
    if ( (*(_DWORD *)(v3 + 312) & 0x8000) == 0 )
    {
      *(_DWORD *)(v3 + 312) |= 0x8000u;
      sub_1008F320(dword_1042CA28, this[1]);
    }
    sub_10036280((unsigned __int16 *)this[1]);
    v4 = this[1];
    if ( v4 )
      return (*(int (__thiscall **)(void *, int, _DWORD))(*(_DWORD *)off_103DD080 + 88))(off_103DD080, v4 + 4, 0);
    else
      return (*(int (__thiscall **)(void *, _DWORD, _DWORD))(*(_DWORD *)off_103DD080 + 88))(off_103DD080, 0, 0);
  }
  return result;
}
