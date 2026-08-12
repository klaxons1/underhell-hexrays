int __stdcall sub_10011E70(int a1, int a2)
{
  int v2; // esi
  int v3; // eax

  v2 = *(_DWORD *)dword_10436258;
  v3 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_10436258 + 12))(dword_10436258, a2);
  return (*(int (__thiscall **)(int, int))(v2 + 20))(dword_10436258, v3);
}
