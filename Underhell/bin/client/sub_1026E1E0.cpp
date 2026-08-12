_DWORD *__userpurge sub_1026E1E0@<eax>(_DWORD *a1@<ecx>, int a2@<ebp>, int a3@<edi>, char a4)
{
  *a1 = &vgui::MenuBar::`vftable';
  sub_1011A810(a1 + 53);
  sub_10240430((int)a1, a2, a3);
  if ( (a4 & 1) != 0 )
    sub_10034930((int)a1);
  return a1;
}
