int __thiscall sub_1026F280(_DWORD *this, _DWORD *a2, _DWORD *a3)
{
  int v4; // ecx
  int result; // eax

  *a2 = 0;
  *a3 = 0;
  v4 = this[96];
  if ( v4 )
  {
    sub_1027CE60(v4);
    result = (*(int (__thiscall **)(_DWORD, _DWORD *, _DWORD *))(*(_DWORD *)this[96] + 12))(this[96], a2, a3);
    *a2 += 6;
  }
  return result;
}
