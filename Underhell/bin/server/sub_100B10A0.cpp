int __stdcall sub_100B10A0(int a1, int a2)
{
  int v2; // esi
  void (__thiscall *v3)(int, int *, int); // edx
  int v4; // edi

  v2 = a2;
  v3 = *(void (__thiscall **)(int, int *, int))(*(_DWORD *)a2 + 52);
  v4 = *(_DWORD *)a1;
  a1 = 32;
  v3(a2, &a1, 1);
  return (*(int (__thiscall **)(int, int, int))(*(_DWORD *)v2 + 52))(v2, v4, 1);
}
