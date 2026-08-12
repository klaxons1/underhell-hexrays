_DWORD *__userpurge sub_10278E80@<eax>(_DWORD *a1@<ecx>, int a2@<ebp>, int a3@<edi>, char a4)
{
  int v5; // eax

  v5 = a1[72];
  *a1 = &vgui::URLLabel::`vftable';
  if ( v5 )
    sub_10034930(v5);
  sub_1024AF70(a1, a2, a3);
  if ( (a4 & 1) != 0 )
    sub_10034930((int)a1);
  return a1;
}
