_DWORD *__userpurge sub_102608E0@<eax>(_DWORD *a1@<ecx>, int a2@<ebp>, int a3@<edi>, char a4)
{
  *a1 = &vgui::ExpandButton::`vftable';
  sub_1025AD60(a1, a2, a3);
  if ( (a4 & 1) != 0 )
    sub_10034930((int)a1);
  return a1;
}
