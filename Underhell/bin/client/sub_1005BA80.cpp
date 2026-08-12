int __thiscall sub_1005BA80(int this)
{
  bool v2; // al
  int v3; // eax
  int v4; // esi
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // ebx
  int v9; // eax
  int v10; // ebx
  int v11; // eax
  int v12; // ebx
  int result; // eax

  v2 = *(_DWORD *)(dword_1040CFFC + 48)
    && (*(int (__thiscall **)(int))(*(_DWORD *)dword_1041315C + 188))(dword_1041315C) >= 80;
  *(_BYTE *)(this + 140) = v2;
  if ( v2 )
  {
    v3 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C96C + 380))(dword_1047C96C);
    v4 = v3;
    if ( v3 )
      (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 8))(v3);
    v5 = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 312))(v4);
    if ( v5 )
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 316))(v4, v5);
    else
      *(_BYTE *)(this + 140) = 0;
    (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 12))(v4);
    (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 4))(v4);
  }
  v6 = (*(int (__thiscall **)(int, const char *, const char *, int, _DWORD))(*(_DWORD *)dword_1047C96C + 280))(
         dword_1047C96C,
         "engine/occlusionproxy",
         "ClientEffect textures",
         1,
         0);
  *(_DWORD *)(this + 132) = v6;
  (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 48))(v6);
  v7 = (*(int (__thiscall **)(int, const char *, const char *, int, _DWORD))(*(_DWORD *)dword_1047C96C + 280))(
         dword_1047C96C,
         "engine/occlusionproxy_countdraw",
         "ClientEffect textures",
         1,
         0);
  *(_DWORD *)(this + 136) = v7;
  (*(void (__thiscall **)(int))(*(_DWORD *)v7 + 48))(v7);
  v8 = (unsigned __int16)sub_100849E0(0);
  sub_1022D780(0xFFFF, v8);
  v9 = 10 * v8;
  *(_WORD *)(v9 + *(_DWORD *)(this + 80) + 2) = -1;
  *(_WORD *)(v9 + *(_DWORD *)(this + 80)) = -1;
  *(_WORD *)(v9 + *(_DWORD *)(this + 80) + 4) = 0;
  *(_WORD *)(this + 124) = v8;
  v10 = (unsigned __int16)sub_100849E0(0);
  sub_1022D780(0xFFFF, v10);
  v11 = 10 * v10;
  *(_WORD *)(v11 + *(_DWORD *)(this + 24) + 2) = -1;
  *(_WORD *)(v11 + *(_DWORD *)(this + 24)) = -1;
  *(_WORD *)(v11 + *(_DWORD *)(this + 24) + 4) = 0;
  *(_WORD *)(this + 126) = v10;
  v12 = (unsigned __int16)sub_100849E0(0);
  sub_1022D780(0xFFFF, v12);
  result = 10 * v12;
  *(_WORD *)(result + *(_DWORD *)(this + 24) + 2) = -1;
  *(_WORD *)(result + *(_DWORD *)(this + 24)) = -1;
  *(_WORD *)(result + *(_DWORD *)(this + 24) + 4) = 0;
  *(_WORD *)(this + 128) = v12;
  return result;
}
