int __thiscall sub_102764F0(int this, int (__thiscall ***a2)(_DWORD), char *Source)
{
  unsigned int *v4; // edi
  int v5; // edi
  unsigned int *v6; // edi
  int v7; // edx
  int *v8; // eax
  int *v9; // edi
  int *v10; // ecx
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  char v15; // cl

  sub_10243490((int *)this, a2, Source);
  *(_DWORD *)this = &vgui::TreeView::`vftable';
  if ( !byte_1048135C )
  {
    byte_1048135C = 1;
    v4 = sub_10242540("TreeView");
    v4[7] = (unsigned int)sub_10273190;
    v4[6] = (unsigned int)sub_10242540("Panel");
  }
  if ( !byte_1048135D )
  {
    byte_1048135D = 1;
    v5 = sub_102484C0((int)"TreeView");
    *(_DWORD *)(v5 + 24) = sub_10273190;
    *(_DWORD *)(v5 + 20) = sub_102484C0((int)"Panel");
  }
  if ( !byte_1048135E )
  {
    byte_1048135E = 1;
    v6 = sub_10242580("TreeView");
    v6[17] = (unsigned int)sub_10273190;
    v6[6] = (unsigned int)sub_10242580("Panel");
  }
  sub_10276260((void *)(this + 207));
  *(_DWORD *)(this + 212) = 0;
  *(_DWORD *)(this + 216) = 0;
  *(_DWORD *)(this + 220) = 0;
  *(_DWORD *)(this + 240) = -1;
  v7 = *(_DWORD *)(this + 212);
  *(_DWORD *)(this + 224) = -1;
  *(_DWORD *)(this + 228) = -1;
  *(_DWORD *)(this + 232) = -1;
  *(_DWORD *)(this + 236) = 0;
  *(_DWORD *)(this + 244) = v7;
  *(_DWORD *)(this + 276) = 0;
  *(_DWORD *)(this + 280) = 0;
  *(_DWORD *)(this + 284) = 0;
  *(_DWORD *)(this + 288) = 0;
  *(_DWORD *)(this + 292) = 0;
  *(_BYTE *)(this + 305) = 0;
  *(_BYTE *)(this + 304) = 0;
  *(_DWORD *)(this + 256) = 20;
  *(_DWORD *)(this + 264) = 0;
  *(_DWORD *)(this + 260) = 0;
  *(_DWORD *)(this + 268) = 0;
  *(_DWORD *)(this + 272) = 0;
  v8 = (int *)sub_100DDA40(204);
  v9 = v8;
  if ( v8 )
  {
    sub_10243050(v8, (int (__thiscall ***)(_DWORD))this);
    *v9 = (int)&vgui::TreeViewSubPanel::`vftable';
    v10 = v9;
  }
  else
  {
    v10 = 0;
  }
  *(_DWORD *)(this + 296) = v10;
  (*(void (__thiscall **)(int *, int))(*v10 + 124))(v10, 1);
  sub_10236140(*(int (__thiscall ****)(void *, int, int))(this + 296), 0, 0);
  v11 = sub_100DDA40(232);
  if ( v11 )
    v12 = sub_10272DA0(v11, (int (__thiscall ***)(_DWORD))this, "HorizScrollBar", 0);
  else
    v12 = 0;
  *(_DWORD *)(this + 248) = v12;
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v12 + 172))(v12, this);
  (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 248) + 124))(*(_DWORD *)(this + 248), 0);
  v13 = sub_100DDA40(232);
  if ( v13 )
    v14 = sub_10272DA0(v13, (int (__thiscall ***)(_DWORD))this, "VertScrollBar", 1);
  else
    v14 = 0;
  *(_DWORD *)(this + 252) = v14;
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v14 + 124))(v14, 0);
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 252) + 172))(*(_DWORD *)(this + 252), this);
  v15 = *(_BYTE *)(this + 208) & 0x80 | 8;
  *(_DWORD *)(this + 300) = -1;
  *(_BYTE *)(this + 208) = v15;
  return this;
}
