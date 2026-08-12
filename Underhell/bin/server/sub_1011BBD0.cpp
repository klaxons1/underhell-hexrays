int __cdecl sub_1011BBD0(int a1, int a2, int a3, int a4, int a5, float a6)
{
  int v6; // esi
  int v7; // edi
  int v8; // ebx
  int result; // eax
  int v10; // [esp+18h] [ebp+8h]

  v6 = a1 + 320;
  v7 = (*(int (__thiscall **)(int))(*(_DWORD *)(a1 + 320) + 36))(a1 + 320);
  v8 = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 8))(v6);
  v10 = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 4))(v6);
  result = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 32))(v6);
  if ( dword_106B3200 )
    return (*(int (__thiscall **)(int, int, int, int, int, int, int, int, int, _DWORD))(*(_DWORD *)dword_106B3200 + 4))(
             dword_106B3200,
             result,
             v10,
             v8,
             v7,
             a2,
             a3,
             a4,
             a5,
             LODWORD(a6));
  return result;
}
