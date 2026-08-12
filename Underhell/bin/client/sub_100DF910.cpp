int __thiscall sub_100DF910(_DWORD *this, _DWORD *a2, int *a3, int a4)
{
  int result; // eax

  *a2 = (*(int (__cdecl **)(int, _DWORD, int))(*(_DWORD *)dword_1047CA64 + 548))(dword_1047CA64, this[4349], a4);
  result = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA6C + 268))(dword_1047CA6C, this[4349]);
  *a3 = result;
  return result;
}
