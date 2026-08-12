int __stdcall sub_10091ED0(const char *a1, const char *a2)
{
  const char *v2; // ebx
  int v3; // esi
  int v4; // edi

  v2 = a2;
  if ( !a2 )
    v2 = a1;
  v3 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C970 + 380))(dword_1047C970);
  if ( v3 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 8))(v3);
  v4 = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)v3 + 684))(v3, a1);
  if ( v4 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v3 + 692))(v3, v4);
    (*(void (__thiscall **)(int, int, const char *))(*(_DWORD *)v3 + 696))(v3, v4, v2);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v3 + 700))(v3, v4);
  }
  else
  {
    Warning("Cannot find color correction lookup file: '%s'\n", v2);
  }
  (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 12))(v3);
  (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 4))(v3);
  return v4;
}
