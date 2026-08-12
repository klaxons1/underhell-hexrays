int __thiscall sub_10243D30(int this)
{
  int v2; // edi
  int v3; // edi
  int v4; // ebp
  int v5; // eax
  int v6; // edi
  int v7; // ebp
  int v8; // eax
  int v9; // edi
  int v10; // ecx
  int (__thiscall **v11)(int, int, int); // edx
  int v12; // ebp
  int (__thiscall *v13)(int, int, int); // eax
  int v14; // eax
  int v15; // edi
  int (__thiscall **v16)(int, int, int); // eax
  int v17; // eax
  int v18; // edi
  int v19; // ebp
  int v20; // eax
  int v22; // [esp+14h] [ebp-20h]
  int v23; // [esp+24h] [ebp-10h] BYREF
  int v24; // [esp+28h] [ebp-Ch] BYREF
  int v25; // [esp+2Ch] [ebp-8h]
  int v26; // [esp+30h] [ebp-4h]
  void (__thiscall **retaddr)(_DWORD, _DWORD); // [esp+34h] [ebp+0h]

  sub_10243490((int *)this, 0, "DragDropHelper");
  *(_DWORD *)this = &CDragDropHelperPanel::`vftable';
  sub_10242B70();
  if ( !byte_1047CAF5 )
  {
    byte_1047CAF5 = 1;
    v2 = sub_102484C0("CDragDropHelperPanel");
    *(_DWORD *)(v2 + 24) = sub_10235FD0;
    *(_DWORD *)(v2 + 20) = sub_102484C0("Panel");
  }
  sub_10242BE0();
  *(_DWORD *)(this + 208) = 0;
  *(_DWORD *)(this + 212) = 0;
  *(_DWORD *)(this + 216) = 0;
  *(_DWORD *)(this + 220) = 0;
  *(_DWORD *)(this + 224) = 0;
  v3 = dword_1047CA70;
  v4 = *(_DWORD *)dword_1047CA70;
  v5 = (**(int (__thiscall ***)(int, int))this)(this, 1);
  (*(void (__thiscall **)(int, int))(v4 + 56))(v3, v5);
  *(_WORD *)(this + 80) &= 0xFFE7u;
  v6 = dword_1047CA70;
  v7 = *(_DWORD *)dword_1047CA70;
  v8 = (**(int (__thiscall ***)(int, _DWORD))this)(this, 0);
  (*(void (__thiscall **)(int, int))(v7 + 124))(v6, v8);
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_1047CA6C + 360))(dword_1047CA6C);
  sub_10237D40(this, v7, 0, v22);
  (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_1047CA70 + 232))(
    dword_1047CA70,
    *(_DWORD *)(this + 68),
    1);
  (*(void (__thiscall **)(int, int *, int *))(*(_DWORD *)dword_1047CA6C + 148))(dword_1047CA6C, &v24, &v23);
  v9 = dword_1047CA70;
  v10 = *(_DWORD *)dword_1047CA70;
  v11 = *(int (__thiscall ***)(int, int, int))this;
  v12 = v23;
  v26 = v24;
  v13 = *v11;
  v25 = v10;
  v14 = v13(this, 0, 0);
  retaddr[2](v9, v14);
  v15 = dword_1047CA70;
  v16 = *(int (__thiscall ***)(int, int, int))this;
  v25 = *(_DWORD *)dword_1047CA70;
  v17 = (*v16)(this, v26, v12);
  retaddr[4](v15, v17);
  *(_WORD *)(this + 80) |= 0x20u;
  v18 = dword_1047CA6C;
  v19 = *(_DWORD *)dword_1047CA6C;
  v20 = (**(int (__thiscall ***)(int, _DWORD, _DWORD, _DWORD, int, int))this)(this, 0, 0, 0, 1, 1);
  (*(void (__thiscall **)(int, int))(v19 + 188))(v18, v20);
  return this;
}
