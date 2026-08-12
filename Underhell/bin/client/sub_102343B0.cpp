void __usercall sub_102343B0(int a1@<esi>)
{
  _DWORD *v1; // eax
  _DWORD *v2; // esi
  int *v3; // eax
  int v4; // edx
  _DWORD *v5; // eax
  _DWORD *v6; // esi
  int *v7; // eax
  int v8; // edx
  _DWORD *v9; // eax
  _DWORD *v10; // esi
  int *v11; // eax
  int v12; // edx
  _DWORD *v13; // eax
  _DWORD *v14; // esi
  int *v15; // eax
  int v16; // edx

  if ( !byte_1047CA40 )
  {
    byte_1047CA40 = 1;
    v1 = (_DWORD *)sub_10229D00(32);
    if ( v1 )
      v2 = sub_10229D20(v1, (int)"wireframe");
    else
      v2 = 0;
    sub_1022ACA0(v2, "$vertexcolor", 1);
    v3 = (int *)(*(int (__thiscall **)(int, const char *, _DWORD *, int))(*(_DWORD *)dword_1047C970 + 276))(
                  dword_1047C970,
                  "__utilWireframe",
                  v2,
                  a1);
    v4 = *v3;
    dword_1047CA38 = (int)v3;
    (*(void (__thiscall **)(int *))(v4 + 48))(v3);
    v5 = (_DWORD *)sub_10229D00(32);
    if ( v5 )
      v6 = sub_10229D20(v5, (int)"wireframe");
    else
      v6 = 0;
    sub_1022ACA0(v6, "$vertexcolor", 1);
    sub_1022ACA0(v6, "$vertexalpha", 1);
    sub_1022ACA0(v6, "$ignorez", 1);
    v7 = (int *)(*(int (__thiscall **)(int, const char *, _DWORD *))(*(_DWORD *)dword_1047C970 + 276))(
                  dword_1047C970,
                  "__utilWireframeIgnoreZ",
                  v6);
    v8 = *v7;
    dword_1047CA34 = (int)v7;
    (*(void (__thiscall **)(int *))(v8 + 48))(v7);
    v9 = (_DWORD *)sub_10229D00(32);
    if ( v9 )
      v10 = sub_10229D20(v9, (int)"unlitgeneric");
    else
      v10 = 0;
    sub_1022ACA0(v10, "$vertexcolor", 1);
    sub_1022ACA0(v10, "$vertexalpha", 1);
    v11 = (int *)(*(int (__thiscall **)(int, const char *, _DWORD *))(*(_DWORD *)dword_1047C970 + 276))(
                   dword_1047C970,
                   "__utilVertexColor",
                   v10);
    v12 = *v11;
    dword_1047CA30 = (int)v11;
    (*(void (__thiscall **)(int *))(v12 + 48))(v11);
    v13 = (_DWORD *)sub_10229D00(32);
    if ( v13 )
      v14 = sub_10229D20(v13, (int)"unlitgeneric");
    else
      v14 = 0;
    sub_1022ACA0(v14, "$vertexcolor", 1);
    sub_1022ACA0(v14, "$vertexalpha", 1);
    sub_1022ACA0(v14, "$ignorez", 1);
    v15 = (int *)(*(int (__thiscall **)(int, const char *))(*(_DWORD *)dword_1047C970 + 276))(
                   dword_1047C970,
                   "__utilVertexColorIgnoreZ");
    v16 = *v15;
    dword_1047CA3C = (int)v15;
    (*(void (__thiscall **)(int *))(v16 + 48))(v15);
  }
}
