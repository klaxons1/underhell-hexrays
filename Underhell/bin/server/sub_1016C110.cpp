int __thiscall sub_1016C110(_DWORD *this, int a2, int a3, int a4, int a5, int a6, char a7)
{
  int result; // eax
  int v9; // esi
  int v10; // ecx

  result = (*(int (__thiscall **)(int, const char *, int))(*(_DWORD *)dword_106B31F8 + 24))(
             dword_106B31F8,
             "hltv_chase",
             1);
  v9 = result;
  if ( result )
  {
    (*(void (__thiscall **)(int, const char *, int))(*(_DWORD *)result + 40))(result, "target1", a2);
    (*(void (__thiscall **)(int, const char *, int))(*(_DWORD *)v9 + 40))(v9, "target2", a3);
    (*(void (__thiscall **)(int, const char *, int))(*(_DWORD *)v9 + 40))(v9, "distance", a4);
    (*(void (__thiscall **)(int, const char *, int))(*(_DWORD *)v9 + 40))(v9, "phi", a5);
    (*(void (__thiscall **)(int, const char *, int))(*(_DWORD *)v9 + 40))(v9, "theta", a6);
    (*(void (__thiscall **)(int, const char *, bool))(*(_DWORD *)v9 + 40))(v9, "ineye", a7 != 0);
    v10 = this[4];
    this[7] = a2;
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v10 + 40))(v10, v9);
    return (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31F8 + 40))(dword_106B31F8, v9);
  }
  return result;
}
