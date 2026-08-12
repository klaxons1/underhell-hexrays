int __thiscall sub_10277520(int this, int (__thiscall ***a2)(_DWORD), int a3)
{
  unsigned int *v4; // edi
  int v5; // edi
  unsigned int *v6; // edi
  int v7; // eax
  int v8; // eax
  int (__thiscall ***v9)(void *, int, int); // edi
  int (__thiscall ***v10)(void *, int, int); // ecx
  int v11; // eax
  int v12; // eax

  sub_10243490((int *)this, a2, "TreeNode");
  *(_DWORD *)this = &vgui::TreeNode::`vftable';
  if ( !byte_10481362 )
  {
    byte_10481362 = 1;
    v4 = sub_10242540("TreeNode");
    v4[7] = (unsigned int)sub_10273310;
    v4[6] = (unsigned int)sub_10242540("Panel");
  }
  if ( !byte_10481363 )
  {
    byte_10481363 = 1;
    v5 = sub_102484C0((int)"TreeNode");
    *(_DWORD *)(v5 + 24) = sub_10273310;
    *(_DWORD *)(v5 + 20) = sub_102484C0((int)"Panel");
  }
  if ( !byte_10481364 )
  {
    byte_10481364 = 1;
    v6 = sub_10242580("TreeNode");
    v6[17] = (unsigned int)sub_10273310;
    v6[6] = (unsigned int)sub_10242580("Panel");
  }
  if ( !byte_1048137A )
  {
    byte_1048137A = 1;
    sub_10276330((int)"LabelChanged", (int)sub_102739A0, 0, 0, 0, 1, 6, 0, 0, 0);
  }
  *(_DWORD *)(this + 220) = 0;
  *(_DWORD *)(this + 224) = 0;
  *(_DWORD *)(this + 228) = 0;
  *(_DWORD *)(this + 232) = 0;
  *(_DWORD *)(this + 236) = 0;
  *(_DWORD *)(this + 272) = 0;
  *(_BYTE *)(this + 276) = 0;
  *(_DWORD *)(this + 216) = 0;
  *(_DWORD *)(this + 268) = a3;
  *(_DWORD *)(this + 208) = -1;
  *(_DWORD *)(this + 244) = 0;
  *(_DWORD *)(this + 248) = 0;
  if ( sub_100DDA40(100) )
    v7 = sub_1027D150("+");
  else
    v7 = 0;
  *(_DWORD *)(this + 256) = v7;
  (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v7 + 4))(v7, 3, 1);
  v8 = sub_100DDA40(236);
  v9 = (int (__thiscall ***)(void *, int, int))v8;
  if ( v8 )
  {
    sub_10249210(v8, (int (__thiscall ***)(_DWORD))this, "TreeImage");
    *v9 = (int (__thiscall **)(void *, int, int))&vgui::TreeNodeImage::`vftable';
    sub_10238E80(v9, 1);
    v10 = v9;
  }
  else
  {
    v10 = 0;
  }
  *(_DWORD *)(this + 260) = v10;
  sub_10236140(v10, 20, 3);
  v11 = sub_100DDA40(980);
  if ( v11 )
    v12 = sub_10276CA0(v11, (int (__thiscall ***)(_DWORD))this, "TreeNodeText", a3);
  else
    v12 = 0;
  *(_DWORD *)(this + 252) = v12;
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v12 + 936))(v12, 0);
  (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 252) + 920))(*(_DWORD *)(this + 252), 0);
  sub_10236140(*(int (__thiscall ****)(void *, int, int))(this + 252), 40, 0);
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 252) + 172))(*(_DWORD *)(this + 252), this);
  *(_BYTE *)(this + 240) = 0;
  *(_BYTE *)(this + 264) = 0;
  return this;
}
