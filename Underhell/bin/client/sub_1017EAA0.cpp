int sub_1017EAA0()
{
  bool v0; // zf
  int (__stdcall *v1)(const char *, _DWORD); // edx
  int v2; // eax

  v0 = (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_1047C97C + 260))(dword_1047C97C) == 0;
  v1 = *(int (__stdcall **)(const char *, _DWORD))(*(_DWORD *)dword_1047C96C + 304);
  if ( v0 )
    v2 = v1("editor/cubemap", 0);
  else
    v2 = v1("editor/cubemap.hdr", 0);
  return sub_10233410(v2);
}
