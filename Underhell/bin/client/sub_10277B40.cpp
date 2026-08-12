int __thiscall sub_10277B40(_DWORD *this, int a2)
{
  int v3; // edi
  int result; // eax
  int v5; // ecx
  int v6; // ebp
  int i; // edi
  char v8; // [esp+Eh] [ebp-16h] BYREF
  char v9; // [esp+Fh] [ebp-15h] BYREF
  int v10[3]; // [esp+10h] [ebp-14h] BYREF
  int v11; // [esp+1Ch] [ebp-8h]
  int v12; // [esp+20h] [ebp-4h]

  v3 = this[75];
  (*(void (__thiscall **)(_DWORD *))(*this + 816))(this);
  this[75] = v3;
  if ( v3 < 0 )
    return (*(int (__thiscall **)(_DWORD *, int, _DWORD, int, int))(*this + 820))(this, a2, 0, 1, 1);
  if ( v3 >= this[54] )
    return (*(int (__thiscall **)(_DWORD *, int, _DWORD, int, int))(*this + 820))(this, a2, 0, 1, 1);
  if ( v3 > this[60] )
    return (*(int (__thiscall **)(_DWORD *, int, _DWORD, int, int))(*this + 820))(this, a2, 0, 1, 1);
  result = this[53] + 12 * v3;
  if ( *(_DWORD *)(result + 4) == v3 && *(_DWORD *)(result + 8) != v3 )
    return (*(int (__thiscall **)(_DWORD *, int, _DWORD, int, int))(*this + 820))(this, a2, 0, 1, 1);
  v5 = this[66];
  if ( v5 )
  {
    memset(v10, 0, sizeof(v10));
    v12 = 0;
    v11 = 0;
    v9 = 0;
    v8 = 0;
    sub_10276410(v5, (int)v10, v10, &v9, &v8, v3, a2);
    v6 = v11;
    for ( i = 0; i < v6; ++i )
      (*(void (__thiscall **)(_DWORD *, _DWORD, _DWORD, int, int))(*this + 820))(
        this,
        *(_DWORD *)(*(_DWORD *)(v10[0] + 4 * i) + 208),
        0,
        1,
        1);
    return sub_1011A810(v10);
  }
  return result;
}
