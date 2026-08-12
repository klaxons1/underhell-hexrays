int __cdecl sub_10167930(int a1, int a2, int a3, int a4, int a5)
{
  _DWORD *v5; // esi
  int result; // eax
  int v7; // ebx
  int v8; // eax
  int v9; // eax
  int v10; // eax

  v5 = (_DWORD *)sub_1007A6A0(off_103DCD78, a4);
  if ( !v5 )
    return DevMsg(1, "Decal: entity = %i", a4);
  result = dword_1042D3B4;
  if ( *(_DWORD *)(dword_1042D3B4 + 48) )
  {
    v7 = *(_DWORD *)dword_10413164;
    v8 = (*(int (__thiscall **)(_DWORD *, int, _DWORD, int))(*v5 + 40))(v5, a3, 0, 1);
    v9 = (*(int (__thiscall **)(_DWORD *, int))(*v5 + 36))(v5, v8);
    v10 = (*(int (__thiscall **)(_DWORD *, int))(v5[1] + 36))(v5 + 1, v9);
    return (*(int (__thiscall **)(int, int, int, int))(v7 + 4))(dword_10413164, a5, a4, v10);
  }
  return result;
}
