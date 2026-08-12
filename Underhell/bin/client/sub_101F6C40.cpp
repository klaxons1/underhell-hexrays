int __thiscall sub_101F6C40(int this, int a2, char *Source)
{
  int v4; // edi
  int v5; // edi
  int v6; // edi
  int v7; // edi
  _DWORD *v8; // edi
  _DWORD *v9; // eax
  int v10; // edi

  sub_1024C5C0(a2, Source);
  *(_DWORD *)this = &CPotteryWheelPanel::`vftable';
  if ( !byte_104655FC )
  {
    byte_104655FC = 1;
    v4 = sub_10242540("CPotteryWheelPanel");
    *(_DWORD *)(v4 + 28) = sub_101F54B0;
    *(_DWORD *)(v4 + 24) = sub_10242540("vgui::EditablePanel");
  }
  if ( !byte_104655FD )
  {
    byte_104655FD = 1;
    v5 = sub_102484C0("CPotteryWheelPanel");
    *(_DWORD *)(v5 + 24) = sub_101F54B0;
    *(_DWORD *)(v5 + 20) = sub_102484C0("vgui::EditablePanel");
  }
  if ( !byte_104655FE )
  {
    byte_104655FE = 1;
    v6 = sub_10242580("CPotteryWheelPanel");
    *(_DWORD *)(v6 + 68) = sub_101F54B0;
    *(_DWORD *)(v6 + 24) = sub_10242580("vgui::EditablePanel");
  }
  *(_DWORD *)(this + 256) = 0;
  sub_10233590(0, 0, 1);
  sub_10233590(0, 0, 1);
  sub_10233590(0, 0, 1);
  unknown_libname_2((_DWORD *)(this + 280));
  unknown_libname_2((_DWORD *)(this + 284));
  *(_DWORD *)(this + 1016) = 0;
  *(_DWORD *)(this + 1032) = 0;
  *(_DWORD *)(this + 1036) = 0;
  *(_DWORD *)(this + 1040) = 0;
  *(_DWORD *)(this + 1044) = 0;
  *(_DWORD *)(this + 1048) = -1;
  *(_DWORD *)(this + 1052) = 0;
  *(_DWORD *)(this + 1056) = 0;
  sub_101F6BE0();
  *(_BYTE *)(this + 1060) &= ~1u;
  sub_10239D10(0);
  sub_10239CF0(0);
  *(_BYTE *)(this + 1016) = 76;
  *(_BYTE *)(this + 1017) = 88;
  *(_BYTE *)(this + 1018) = 68;
  *(_BYTE *)(this + 1019) = -1;
  sub_101EE350((float *)(this + 324));
  sub_101F5760(this);
  *(_DWORD *)(this + 264) = 0;
  *(_DWORD *)(this + 260) = 0;
  *(float *)(this + 1020) = 100.0;
  *(float *)(this + 1024) = 0.0;
  *(float *)(this + 1028) = 0.0;
  *(float *)(this + 316) = 3.0;
  *(float *)(this + 320) = 28377.92;
  *(float *)(this + 312) = 30.0;
  v7 = sub_100DDA40(32);
  if ( v7 )
  {
    sub_101F70F0(this + 324);
    *(float *)(v7 + 24) = 0.52359879;
    *(_DWORD *)v7 = &CRotationManipulator::`vftable';
    *(float *)(v7 + 28) = -2.3561945;
    *(_DWORD *)(v7 + 20) = 0;
    *(_DWORD *)(v7 + 16) = 0;
    sub_101F5700(v7);
  }
  else
  {
    v7 = 0;
  }
  *(_DWORD *)(this + 1032) = v7;
  v8 = (_DWORD *)sub_100DDA40(24);
  if ( v8 )
  {
    sub_101F70F0(this + 324);
    *v8 = &CTranslationManipulator::`vftable';
    v8[5] = 0;
    v8[4] = 0;
  }
  else
  {
    v8 = 0;
  }
  *(_DWORD *)(this + 1036) = v8;
  v9 = (_DWORD *)sub_100DDA40(20);
  if ( v9 )
  {
    v9[2] = 0;
    v9[1] = 0;
    *v9 = &CZoomManipulator::`vftable';
    v9[3] = 0;
    v9[4] = this + 1020;
  }
  else
  {
    v9 = 0;
  }
  *(_DWORD *)(this + 1040) = v9;
  if ( sub_10229D00(32) )
    v10 = sub_1022B0E0((int)"Wireframe", "$model", "1");
  else
    v10 = 0;
  sub_1022ABA0("$vertexcolor", "1");
  sub_102332C0("potterywheelpanelwireframe", v10);
  sub_10237D40(1);
  sub_101F5A00((float *)this);
  (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)dword_1047CA74 + 72))(
    dword_1047CA74,
    *(_DWORD *)(this + 68),
    0);
  return this;
}
