_DWORD *__userpurge sub_10249340@<eax>(_DWORD *a1@<ecx>, int a2@<ebp>, int a3@<edi>, char a4)
{
  int v6; // [esp-4h] [ebp-8h]

  v6 = a1[53];
  *a1 = &vgui::ImagePanel::`vftable';
  sub_10034930(v6);
  sub_10034930(a1[54]);
  sub_10240430((int)a1, a2, a3);
  if ( (a4 & 1) != 0 )
    sub_10034930((int)a1);
  return a1;
}
