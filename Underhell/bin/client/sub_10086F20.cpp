double __stdcall sub_10086F20(int a1, float a2)
{
  int v2; // esi
  double v3; // st7
  float v5; // [esp+14h] [ebp+Ch]

  v2 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C96C + 380))(dword_1047C96C);
  if ( v2 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 8))(v2);
  v3 = ((double (__thiscall *)(int, int, _DWORD))*(_DWORD *)(*(_DWORD *)v2 + 344))(v2, a1, LODWORD(a2));
  v5 = v3 * v3;
  (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 12))(v2);
  (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 4))(v2);
  return v5;
}
