int __cdecl sub_10154AF0(_DWORD *a1, int a2)
{
  int v2; // eax
  int v3; // ebx
  int v4; // edi
  int v5; // eax
  int result; // eax

  v2 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, a1[6]);
  v3 = *(_DWORD *)dword_106B31D0;
  v4 = v2;
  v5 = (*(int (__thiscall **)(_DWORD *, int))(*a1 + 36))(a1, a2);
  result = (*(int (__thiscall **)(int, int, int))(v3 + 168))(dword_106B31D0, v4, v5);
  dword_106B3254 = result;
  return result;
}
