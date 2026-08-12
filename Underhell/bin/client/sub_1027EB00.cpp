int __thiscall sub_1027EB00(int this, int (__thiscall ***a2)(_DWORD), char *Source, int a4)
{
  unsigned int *v5; // ebp
  int v6; // ebp
  unsigned int *v7; // ebp
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax

  sub_10243490((int *)this, a2, Source);
  *(_DWORD *)(this + 204) = &vgui::IHTMLEvents::`vftable';
  *(_DWORD *)this = &vgui::HTML::`vftable';
  *(_DWORD *)(this + 204) = &vgui::HTML::`vftable';
  if ( !byte_10481960 )
  {
    byte_10481960 = 1;
    v5 = sub_10242540("HTML");
    v5[7] = (unsigned int)sub_1027D9B0;
    v5[6] = (unsigned int)sub_10242540("Panel");
  }
  if ( !byte_10481961 )
  {
    byte_10481961 = 1;
    v6 = sub_102484C0((int)"HTML");
    *(_DWORD *)(v6 + 24) = sub_1027D9B0;
    *(_DWORD *)(v6 + 20) = sub_102484C0((int)"Panel");
  }
  if ( !byte_10481962 )
  {
    byte_10481962 = 1;
    v7 = sub_10242580("HTML");
    v7[17] = (unsigned int)sub_1027D9B0;
    v7[6] = (unsigned int)sub_10242580("Panel");
  }
  if ( !byte_10481974 )
  {
    byte_10481974 = 1;
    sub_1027EA80((int)"ScrollBarSliderMoved", (int)sub_1027E800, 0, 0, 0, 0, 0, 0, 0, 0);
  }
  *(_DWORD *)(this + 276) = 0;
  *(_DWORD *)(this + 280) = 0;
  *(_DWORD *)(this + 284) = 0;
  *(_DWORD *)(this + 288) = 0;
  *(_DWORD *)(this + 292) = 0;
  *(_DWORD *)(this + 212) = (*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)dword_1047CA6C + 100))(
                              dword_1047CA6C,
                              this + 204,
                              *(_DWORD *)(this + 68));
  *(_DWORD *)(this + 240) = 0;
  *(_DWORD *)(this + 244) = 0;
  *(_DWORD *)(this + 216) = 0;
  *(_DWORD *)(this + 220) = 0;
  *(_DWORD *)(this + 260) = 0;
  *(_DWORD *)(this + 256) = 0;
  *(_DWORD *)(this + 252) = 0;
  *(_DWORD *)(this + 248) = 0;
  *(_BYTE *)(this + 265) = 1;
  *(_BYTE *)(this + 266) = 1;
  *(_BYTE *)(this + 272) = 0;
  *(_BYTE *)(this + 273) = 0;
  if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA6C + 220))(dword_1047CA6C, 7) )
    sub_10237030((_DWORD *)this, 15);
  v8 = sub_100DDA40(232);
  if ( v8 )
    v9 = sub_10272DA0(v8, (int (__thiscall ***)(_DWORD))this, "HorizScrollBar", 0);
  else
    v9 = 0;
  *(_DWORD *)(this + 224) = v9;
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v9 + 124))(v9, 0);
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 224) + 172))(*(_DWORD *)(this + 224), this);
  v10 = sub_100DDA40(232);
  if ( v10 )
    v11 = sub_10272DA0(v10, (int (__thiscall ***)(_DWORD))this, "VertScrollBar", 1);
  else
    v11 = 0;
  *(_DWORD *)(this + 228) = v11;
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v11 + 124))(v11, 0);
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 228) + 172))(*(_DWORD *)(this + 228), this);
  *(_BYTE *)(this + 264) = 1;
  sub_10236360((void *)this, 1);
  sub_10236310((int (__thiscall ***)(void *, int))this, 1);
  sub_102361D0((int (__thiscall ***)(void *, int, int))this, (int)&a2, (int)&Source);
  (*(void (__thiscall **)(int, int (__thiscall ***)(_DWORD), char *))(*(_DWORD *)this + 808))(this, a2, Source);
  (*(void (__thiscall **)(int))(*(_DWORD *)this + 804))(this);
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)this + 304))(this) )
    *(_BYTE *)(this + 273) = 1;
  else
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 212) + 52))(*(_DWORD *)(this + 212), 1);
  return this;
}
