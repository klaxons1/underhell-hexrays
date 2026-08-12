char __thiscall sub_10262130(_DWORD *this, int a2, char a3)
{
  int v4; // esi
  char result; // al
  int v6; // ecx
  void (__stdcall *v7)(int, int); // eax
  int v8; // [esp+0h] [ebp-8h]

  v4 = this[54] + 72 * *(unsigned __int8 *)(this[65] + a2);
  result = a3 == 0;
  if ( *(_BYTE *)(v4 + 25) != (a3 == 0) && !*(_BYTE *)(v4 + 26) )
  {
    v6 = *(_DWORD *)v4;
    *(_BYTE *)(v4 + 25) = result;
    v7 = *(void (__stdcall **)(int, int))(*(_DWORD *)v6 + 124);
    if ( a3 )
    {
      v7(1, v8);
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(v4 + 16) + 124))(*(_DWORD *)(v4 + 16), 1);
    }
    else
    {
      v7(0, v8);
      (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(v4 + 16) + 124))(*(_DWORD *)(v4 + 16), 0);
    }
    return (*(int (__thiscall **)(_DWORD *, _DWORD, _DWORD))(*this + 244))(this, 0, 0);
  }
  return result;
}
