int __cdecl sub_1016A020(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int result; // eax
  _DWORD *v7; // esi
  int v8; // ebx
  int v9; // eax
  int v10; // eax
  int v11; // eax

  result = dword_1042D3B4;
  if ( *(_DWORD *)(dword_1042D3B4 + 48) )
  {
    result = sub_1007A6A0(off_103DCD78, a5);
    v7 = (_DWORD *)result;
    if ( result )
    {
      v8 = *(_DWORD *)dword_10413164;
      v9 = (*(int (__thiscall **)(int, int, int, _DWORD))(*(_DWORD *)result + 40))(result, a3, a4, 0);
      v10 = (*(int (__thiscall **)(_DWORD *, int))(*v7 + 36))(v7, v9);
      v11 = (*(int (__thiscall **)(_DWORD *, int))(v7[1] + 36))(v7 + 1, v10);
      return (*(int (__thiscall **)(int, int, int, int))(v8 + 4))(dword_10413164, a6, a5, v11);
    }
  }
  return result;
}
