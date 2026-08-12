int __cdecl sub_10249C20(int a1, int a2, int a3, int *a4, int a5)
{
  int result; // eax

  result = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(
             dword_106B31D0,
             *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a3 + 820) + 4 * a5) + 24));
  *a4 = result;
  return result;
}
