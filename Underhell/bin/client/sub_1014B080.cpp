void __thiscall sub_1014B080(int this)
{
  int v2; // eax
  int v3; // edi
  unsigned __int8 v4; // al
  int v5; // edi
  void (__thiscall ***v6)(_DWORD); // eax
  int v7; // edi
  int *v8; // ebx
  int v9; // edx
  int v10; // eax
  int v11; // eax
  int v12; // ebx
  int v13; // edi
  _BYTE v14[4]; // [esp+ACh] [ebp-8h] BYREF
  void (__thiscall **v15)(int, _DWORD, _DWORD, _DWORD, _DWORD, int); // [esp+B0h] [ebp-4h]

  CVProfile::EnterScope(g_VProfCurrentProfile, "CShadowDepthView::Draw", 0, "Flashlight Shadows", 0, 4);
  if ( this )
    v2 = this + 8;
  else
    v2 = 0;
  v3 = *(_DWORD *)dword_10413168;
  v4 = (*(int (__thiscall **)(_DWORD, int, int, _BYTE *))(**(_DWORD **)(this + 128) + 144))(
         *(_DWORD *)(this + 128),
         1,
         v2 + 44,
         v14);
  (*(void (__thiscall **)(int, _DWORD))(v3 + 168))(dword_10413168, v4);
  v5 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C96C + 380))(dword_1047C96C);
  if ( v5 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 8))(v5);
  (*(void (__thiscall **)(int, int, int, int))(*(_DWORD *)v5 + 288))(v5, 255, 255, 255);
  (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 12))(v5);
  (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 4))(v5);
  (*(void (__thiscall **)(int, int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_10413168 + 148))(
    dword_10413168,
    this + 8,
    2,
    *(_DWORD *)(this + 156),
    *(_DWORD *)(this + 124),
    *(_DWORD *)(this + 160));
  v6 = (void (__thiscall ***)(_DWORD))(*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C96C + 380))(dword_1047C96C);
  v7 = (int)v6;
  if ( v6 )
    (**v6)(v6);
  (*(void (__thiscall **)(int))(*(_DWORD *)v7 + 8))(v7);
  v8 = *(int **)(this + 160);
  v9 = *v8;
  v15 = (void (__thiscall **)(int, _DWORD, _DWORD, _DWORD, _DWORD, int))(*(_DWORD *)v7 + 420);
  v10 = (*(int (__thiscall **)(int *))(v9 + 4))(v8);
  v11 = (*(int (__thiscall **)(int *, int))(*v8 + 4))(v8, v10);
  (*v15)(v7, *(_DWORD *)(this + 156), *(_DWORD *)(this + 160), 0, 0, v11);
  (*(void (__thiscall **)(int))(*(_DWORD *)v7 + 12))(v7);
  (*(void (__thiscall **)(int))(*(_DWORD *)v7 + 4))(v7);
  sub_10144510((float *)(this + 52), (float *)(this + 64), 7);
  v12 = dword_1047CA8C;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_1047CA8C + 100))(dword_1047CA8C);
  CVProfile::EnterScope(g_VProfCurrentProfile, "BuildWorldRenderLists", 0, "Flashlight Shadows", 0, 4);
  sub_1014A8C0(this, 1, -1, 1, 1, 0);
  CVProfile::ExitScope(g_VProfCurrentProfile);
  CVProfile::EnterScope(g_VProfCurrentProfile, "BuildRenderableRenderLists", 0, "Flashlight Shadows", 0, 4);
  sub_10143030((_DWORD *)this, dword_103E7E94);
  CVProfile::ExitScope(g_VProfCurrentProfile);
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_1041315C + 136))(dword_1041315C);
  *(_DWORD *)(this + 132) = *(_DWORD *)(*(_DWORD *)(this + 128) + 444) | 0x100030;
  CVProfile::EnterScope(g_VProfCurrentProfile, "DrawWorld", 0, "Flashlight Shadows", 0, 4);
  sub_101438D0((int *)this, 0.0);
  CVProfile::ExitScope(g_VProfCurrentProfile);
  (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_10413160 + 4))(dword_10413160, 0, 2);
  CVProfile::EnterScope(g_VProfCurrentProfile, "DrawOpaqueRenderables", 0, "Flashlight Shadows", 0, 4);
  sub_1014AA40(this, v7, 1);
  CVProfile::ExitScope(g_VProfCurrentProfile);
  (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)dword_10413160 + 4))(dword_10413160, 0, 0);
  *(_DWORD *)(this + 132) = 0;
  v13 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C96C + 380))(dword_1047C96C);
  if ( v13 )
    (**(void (__thiscall ***)(int))v13)(v13);
  (*(void (__thiscall **)(int))(*(_DWORD *)v13 + 8))(v13);
  (*(void (__thiscall **)(int))(*(_DWORD *)v13 + 436))(v13);
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_10413168 + 160))(dword_10413168, *(_DWORD *)(this + 124));
  (*(void (__thiscall **)(int))(*(_DWORD *)v12 + 104))(v12);
  (*(void (__thiscall **)(int))(*(_DWORD *)v13 + 12))(v13);
  (*(void (__thiscall **)(int))(*(_DWORD *)v13 + 4))(v13);
  CVProfile::ExitScope(g_VProfCurrentProfile);
}
