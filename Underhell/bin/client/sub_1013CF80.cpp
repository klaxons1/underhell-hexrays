int __usercall sub_1013CF80@<eax>(int a1@<edi>)
{
  int v1; // eax
  int v2; // eax

  v1 = (*(int (__thiscall **)(int, const char *, _DWORD, int, _DWORD))(*(_DWORD *)dword_1047C96C + 280))(
         dword_1047C96C,
         "debug/debugreflect",
         0,
         1,
         0);
  sub_1013CC60(v1, a1, 0, 0, 0.0);
  v2 = (*(int (__thiscall **)(int, const char *, _DWORD, int, _DWORD))(*(_DWORD *)dword_1047C96C + 280))(
         dword_1047C96C,
         "debug/debugrefract",
         0,
         1,
         0);
  return sub_1013CC60(v2, a1, 0, 1, COERCE_FLOAT(1));
}
