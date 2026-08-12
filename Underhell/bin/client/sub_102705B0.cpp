_DWORD *__userpurge sub_102705B0@<eax>(_DWORD *a1@<ecx>, int a2@<ebp>, char a3)
{
  void *v4; // ecx
  void *v5; // ecx

  v4 = (void *)a1[112];
  *a1 = &vgui::MessageBox::`vftable';
  if ( v4 )
    sub_1022AF00(v4);
  v5 = (void *)a1[113];
  if ( v5 )
    sub_1022AF00(v5);
  sub_1024D540(a1, a2);
  if ( (a3 & 1) != 0 )
    sub_10034930((int)a1);
  return a1;
}
