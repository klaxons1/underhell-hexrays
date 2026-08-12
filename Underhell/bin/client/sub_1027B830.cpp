_DWORD *__userpurge sub_1027B830@<eax>(_DWORD *a1@<ecx>, int a2@<ebp>, int a3@<edi>, char a4)
{
  void *v5; // ecx

  v5 = (void *)a1[75];
  *a1 = &vgui::CItemButton::`vftable';
  if ( v5 )
    sub_1022AF00(v5);
  sub_1027A5F0(a1, a3, -1);
  sub_1011A810(a1 + 83);
  sub_1024AF70(a1, a2, a3);
  if ( (a4 & 1) != 0 )
    sub_10034930((int)a1);
  return a1;
}
