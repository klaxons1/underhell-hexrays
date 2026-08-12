_DWORD *__cdecl sub_10174D20(int a1, int a2)
{
  _DWORD *v2; // eax
  _DWORD *v3; // esi

  v2 = sub_10034900(0x4B0u);
  v3 = v2;
  if ( !v2 )
    return 0;
  sub_1003D000((int)v2);
  *v3 = &C_TestTraceline::`vftable';
  v3[1] = &C_TestTraceline::`vftable';
  v3[2] = &C_TestTraceline::`vftable';
  v3[3] = &C_TestTraceline::`vftable';
  v3[298] = (*(int (__thiscall **)(int, const char *, const char *, int, _DWORD))(*(_DWORD *)dword_1047C96C + 280))(
              dword_1047C96C,
              "shadertest/wireframevertexcolor",
              "Other textures",
              1,
              0);
  (*(void (__thiscall **)(_DWORD *, int, int))(*v3 + 160))(v3, a1, a2);
  return v3 + 2;
}
