int __cdecl sub_1013EF40(float *a1, float *a2, float *a3, float a4, char a5, char a6, float a7)
{
  dword_103E7CA0 = a5 != 0;
  sub_1013EDD0(SLOBYTE(a4), a7);
  if ( !LOBYTE(a4) && !a6 )
    return (*(int (__thiscall **)(int, const char *, const char *, int, _DWORD))(*(_DWORD *)dword_1047C96C + 280))(
             dword_1047C96C,
             "dev/bloomadd",
             "Other textures",
             1,
             0);
  sub_1013EE40(a1, a2, *a3, a3[1]);
  return (*(int (__thiscall **)(int, const char *, const char *, int, _DWORD))(*(_DWORD *)dword_1047C96C + 280))(
           dword_1047C96C,
           "dev/engine_post",
           "Other textures",
           1,
           0);
}
