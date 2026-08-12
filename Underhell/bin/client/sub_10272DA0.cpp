int __thiscall sub_10272DA0(int this, int (__thiscall ***a2)(_DWORD), char *Source, char a4)
{
  unsigned int *v5; // edi
  int v6; // edi
  unsigned int *v7; // edi
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int *v11; // edi
  int v12; // eax
  int *v13; // edi
  int v14; // eax
  int v15; // eax
  int *v16; // edi
  int v17; // eax
  int *v18; // edi

  sub_10243490((int *)this, a2, Source);
  *(_DWORD *)this = &vgui::ScrollBar::`vftable';
  if ( !byte_10481328 )
  {
    byte_10481328 = 1;
    v5 = sub_10242540("ScrollBar");
    v5[7] = (unsigned int)sub_10272460;
    v5[6] = (unsigned int)sub_10242540("Panel");
  }
  if ( !byte_10481329 )
  {
    byte_10481329 = 1;
    v6 = sub_102484C0((int)"ScrollBar");
    *(_DWORD *)(v6 + 24) = sub_10272460;
    *(_DWORD *)(v6 + 20) = sub_102484C0((int)"Panel");
  }
  if ( !byte_1048132A )
  {
    byte_1048132A = 1;
    v7 = sub_10242580("ScrollBar");
    v7[17] = (unsigned int)sub_10272460;
    v7[6] = (unsigned int)sub_10242580("Panel");
  }
  sub_10272CF0((void *)(this + 207));
  sub_10272D40();
  *(_DWORD *)(this + 216) = 0;
  *(_DWORD *)(this + 208) = 0;
  *(_DWORD *)(this + 212) = 0;
  *(_DWORD *)(this + 224) = 400;
  *(_BYTE *)(this + 228) = 1;
  v8 = sub_100DDA40(260);
  if ( a4 )
  {
    if ( v8 )
      v9 = sub_10286B40(0, 0, 1);
    else
      v9 = 0;
    sub_10272A00((_DWORD *)this, v9);
    v10 = sub_100DDA40(364);
    v11 = (int *)v10;
    if ( v10 )
    {
      sub_1025C5C0(v10, 0, 0, "t", 0, 0);
      *v11 = (int)`anonymous namespace'::ScrollBarButton::`vftable';
      sub_1025AD80(v11, 1);
      sub_10249A90(v11, 4);
    }
    else
    {
      v11 = 0;
    }
    sub_10272960((_DWORD *)this, (int)v11, 0);
    v12 = sub_100DDA40(364);
    v13 = (int *)v12;
    if ( v12 )
    {
      sub_1025C5C0(v12, 0, 0, "u", 0, 0);
      *v13 = (int)`anonymous namespace'::ScrollBarButton::`vftable';
      sub_1025AD80(v13, 1);
      sub_10249A90(v13, 4);
    }
    else
    {
      v13 = 0;
    }
    sub_10272960((_DWORD *)this, (int)v13, 1);
    (*(void (__thiscall **)(_DWORD, _DWORD, int))(**(_DWORD **)(this + 208) + 792))(*(_DWORD *)(this + 208), 0, 1);
    (*(void (__thiscall **)(_DWORD, _DWORD, int))(**(_DWORD **)(this + 212) + 792))(*(_DWORD *)(this + 212), 0, -1);
    sub_102361A0((int (__thiscall ***)(void *, int, int))this, 17, 64);
  }
  else
  {
    if ( v8 )
      v14 = sub_10286B40(0, 0, 0);
    else
      v14 = 0;
    sub_10272A00((_DWORD *)this, v14);
    v15 = sub_100DDA40(364);
    v16 = (int *)v15;
    if ( v15 )
    {
      sub_1025C5C0(v15, 0, 0, "w", 0, 0);
      *v16 = (int)`anonymous namespace'::ScrollBarButton::`vftable';
      sub_1025AD80(v16, 1);
      sub_10249A90(v16, 4);
    }
    else
    {
      v16 = 0;
    }
    sub_10272960((_DWORD *)this, (int)v16, 0);
    v17 = sub_100DDA40(364);
    v18 = (int *)v17;
    if ( v17 )
    {
      sub_1025C5C0(v17, 0, 0, "4", 0, 0);
      *v18 = (int)`anonymous namespace'::ScrollBarButton::`vftable';
      sub_1025AD80(v18, 1);
      sub_10249A90(v18, 4);
    }
    else
    {
      v18 = 0;
    }
    sub_10272960((_DWORD *)this, (int)v18, 1);
    (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)(this + 208) + 792))(*(_DWORD *)(this + 208), 0, 0);
    (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)(this + 212) + 792))(*(_DWORD *)(this + 212), 0, 0);
    sub_102361A0((int (__thiscall ***)(void *, int, int))this, 64, 17);
  }
  sub_10239CF0((_WORD *)this, 1);
  sub_10239D10((_WORD *)this, 0);
  sub_10239D30((_WORD *)this, 1);
  *(_DWORD *)(this + 220) = 20;
  sub_10238E80((_DWORD *)this, 1);
  sub_10272BB0((_DWORD **)this);
  return this;
}
