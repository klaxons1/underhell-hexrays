int __usercall sub_10017240@<eax>(int a1@<esi>, int a2, int a3, int a4)
{
  int v4; // edi
  int v5; // ebx
  int v7; // eax
  int v8; // esi
  int v9; // eax
  int v10; // eax
  float v11; // [esp+Ch] [ebp-Ch]

  v4 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_10413178 + 40))(dword_10413178, a2);
  v5 = *(_DWORD *)(v4 + 16);
  if ( !v5 )
    return 0;
  v7 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047C96C + 380))(dword_1047C96C, a1);
  v8 = v7;
  if ( v7 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v7 + 8))(v7);
  v9 = dword_1043A340;
  if ( (dword_1043A340
     || (v9 = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)cvar + 52))(cvar, "sv_cheats"),
         (dword_1043A340 = v9) != 0))
    && *(_DWORD *)(*(_DWORD *)(v9 + 28) + 48)
    && *(_DWORD *)(dword_1043A72C + 48)
    || *(_DWORD *)(dword_1043A004 + 48) == 2 )
  {
    v10 = dword_10403210;
    if ( !dword_10403210 )
    {
      v10 = (*(int (__thiscall **)(int, const char *, const char *, int, _DWORD))(*(_DWORD *)dword_1047C96C + 280))(
              dword_1047C96C,
              "shadertest/wireframevertexcolor",
              "Other textures",
              1,
              0);
      dword_10403210 = v10;
    }
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v8 + 36))(v8, v10);
  }
  else
  {
    v11 = (float)a3;
    sub_10124650(v11);
    sub_10124880(a4);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v8 + 36))(v8, v5);
  }
  (*(void (__thiscall **)(int))(*(_DWORD *)v8 + 12))(v8);
  (*(void (__thiscall **)(int))(*(_DWORD *)v8 + 4))(v8);
  return v4;
}
