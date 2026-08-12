int *__userpurge sub_10257B00@<eax>(int *a1@<ecx>, int a2@<ebp>, int (__thiscall ***a3)(_DWORD), char *Source)
{
  unsigned int *v5; // edi
  int v6; // edi
  unsigned int *v7; // edi
  int v9; // [esp+0h] [ebp-8h]

  sub_10243490(a1, a3, Source);
  *a1 = (int)&vgui::RichTextInterior::`vftable';
  if ( !byte_1047F620 )
  {
    byte_1047F620 = 1;
    v5 = sub_10242540("RichTextInterior");
    v5[7] = (unsigned int)sub_10257290;
    v5[6] = (unsigned int)sub_10242540("Panel");
  }
  if ( !byte_1047F621 )
  {
    byte_1047F621 = 1;
    v6 = sub_102484C0((int)"RichTextInterior");
    *(_DWORD *)(v6 + 24) = sub_10257290;
    *(_DWORD *)(v6 + 20) = sub_102484C0((int)"Panel");
  }
  if ( !byte_1047F622 )
  {
    byte_1047F622 = 1;
    v7 = sub_10242580("RichTextInterior");
    v7[17] = (unsigned int)sub_10257290;
    v7[6] = (unsigned int)sub_10242580("Panel");
  }
  sub_10237D40((int)a1, a2, 0, v9);
  sub_10237E50((int (__thiscall ***)(void *, int))a1, 0);
  sub_10239D10(a1, 0);
  sub_10239D30(a1, 0);
  a1[52] = (int)a3;
  return a1;
}
