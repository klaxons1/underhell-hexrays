int __thiscall sub_102874F0(int this, int (__thiscall ***a2)(_DWORD), char *Source)
{
  unsigned int *v4; // edi
  int v5; // edi
  unsigned int *v6; // edi
  int v7; // edx
  int v8; // eax
  int v9; // eax
  int *v10; // eax
  int *v11; // eax
  bool v12; // zf
  int v13; // edi
  int v14; // ebx
  int v15; // eax
  int v16; // edi
  int v17; // ebx
  int v18; // eax

  sub_10243490((int *)this, a2, Source);
  *(_DWORD *)this = &vgui::PanelListPanel::`vftable';
  if ( !byte_10481AD0 )
  {
    byte_10481AD0 = 1;
    v4 = sub_10242540("PanelListPanel");
    v4[7] = (unsigned int)sub_10286CC0;
    v4[6] = (unsigned int)sub_10242540("Panel");
  }
  if ( !byte_10481AD1 )
  {
    byte_10481AD1 = 1;
    v5 = sub_102484C0((int)"PanelListPanel");
    *(_DWORD *)(v5 + 24) = sub_10286CC0;
    *(_DWORD *)(v5 + 20) = sub_102484C0((int)"Panel");
  }
  if ( !byte_10481AD2 )
  {
    byte_10481AD2 = 1;
    v6 = sub_10242580("PanelListPanel");
    v6[17] = (unsigned int)sub_10286CC0;
    v6[6] = (unsigned int)sub_10242580("Panel");
  }
  sub_102874A0((void *)(this + 207));
  *(_DWORD *)(this + 208) = 0;
  *(_DWORD *)(this + 212) = 0;
  *(_DWORD *)(this + 216) = 0;
  *(_DWORD *)(this + 236) = -1;
  v7 = *(_DWORD *)(this + 208);
  *(_DWORD *)(this + 220) = -1;
  *(_DWORD *)(this + 224) = -1;
  *(_DWORD *)(this + 228) = -1;
  *(_DWORD *)(this + 232) = 0;
  *(_DWORD *)(this + 240) = v7;
  *(_DWORD *)(this + 244) = 0;
  *(_DWORD *)(this + 248) = 0;
  *(_DWORD *)(this + 252) = 0;
  *(_DWORD *)(this + 256) = 0;
  *(_DWORD *)(this + 260) = 0;
  *(_DWORD *)(this + 272) = -1;
  sub_10236200((int (__thiscall ***)(void *, int, int))this, 0, 0, 100, 100);
  v8 = sub_100DDA40(232);
  if ( v8 )
    v9 = sub_10272DA0(v8, (int (__thiscall ***)(_DWORD))this, "PanelListPanelVScroll", 1);
  else
    v9 = 0;
  *(_DWORD *)(this + 264) = v9;
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v9 + 124))(v9, 0);
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 264) + 172))(*(_DWORD *)(this + 264), this);
  v10 = (int *)sub_100DDA40(252);
  if ( v10 )
    v11 = sub_1024C5C0(v10, (int (__thiscall ***)(_DWORD))this, "PanelListEmbedded");
  else
    v11 = 0;
  *(_DWORD *)(this + 268) = v11;
  sub_10236200((int (__thiscall ***)(void *, int, int))v11, 0, 0, 20, 20);
  (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 268) + 264))(*(_DWORD *)(this + 268), 0);
  (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 268) + 260))(*(_DWORD *)(this + 268), 0);
  v12 = (*(_WORD *)(this + 80) & 0x1000) == 0;
  *(_DWORD *)(this + 276) = 100;
  *(_DWORD *)(this + 280) = 1;
  if ( v12 )
  {
    *(_DWORD *)(this + 284) = 24;
    *(_DWORD *)(this + 288) = 5;
  }
  else
  {
    v13 = dword_1047CA7C;
    v14 = *(_DWORD *)dword_1047CA7C;
    v15 = sub_102368C0((_DWORD *)this);
    *(_DWORD *)(this + 284) = (*(int (__thiscall **)(int, int, int))(v14 + 52))(v13, v15, 24);
    v16 = dword_1047CA7C;
    v17 = *(_DWORD *)dword_1047CA7C;
    v18 = sub_102368C0((_DWORD *)this);
    *(_DWORD *)(this + 288) = (*(int (__thiscall **)(int, int, int))(v17 + 52))(v16, v18, 5);
  }
  return this;
}
