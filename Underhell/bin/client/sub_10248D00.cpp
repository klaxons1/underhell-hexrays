int __usercall sub_10248D00@<eax>(_DWORD *a1@<ecx>, int a2@<ebp>, int a3@<edi>)
{
  int v5; // [esp-4h] [ebp-8h]

  v5 = a1[53];
  *a1 = &vgui::ImagePanel::`vftable';
  sub_10034930(v5);
  sub_10034930(a1[54]);
  return sub_10240430((int)a1, a2, a3);
}
