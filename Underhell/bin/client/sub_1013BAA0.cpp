int __usercall sub_1013BAA0@<eax>(int a1@<ecx>, int a2@<edi>)
{
  int result; // eax
  int v3; // edi
  int v4; // esi
  int v5; // edi
  int v6; // ebx
  int v7; // eax

  result = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047C97C + 208))(dword_1047C97C, a1);
  if ( (_BYTE)result )
  {
    v3 = sub_10116340();
    v4 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_1047C96C + 380))(dword_1047C96C, a2, v3);
    if ( v4 )
      (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 8))(v4);
    (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v4 + 444))(v4, v3, 0);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 716))(v4, 1);
    if ( *(_DWORD *)(dword_1043A234 + 48) )
    {
      v5 = (*(int (__thiscall **)(int, const char *, const char *, int, _DWORD))(*(_DWORD *)dword_1047C96C + 280))(
             dword_1047C96C,
             "debug/showz",
             "Other textures",
             1,
             0);
      v6 = (*(int (__thiscall **)(int, const char *, _DWORD, _DWORD))(*(_DWORD *)v5 + 44))(v5, "$basetexture", 0, 0);
      v7 = (*(int (__thiscall **)(int, const char *, _DWORD, _DWORD))(*(_DWORD *)v5 + 44))(v5, "$ALPHADEPTH", 0, 0);
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v7 + 16))(v7, 1);
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v6 + 56))(v6, 0);
      (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v4 + 296))(v4, 1, 0);
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 300))(v4, v5);
      (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v4 + 296))(v4, 0, 1);
    }
    (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 12))(v4);
    return (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 4))(v4);
  }
  return result;
}
