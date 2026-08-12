int __usercall sub_1024C2A0@<eax>(_DWORD *a1@<ecx>, int a2@<ebp>)
{
  int v3; // edi
  void *v4; // ecx
  int v6; // [esp-4h] [ebp-Ch]

  v6 = a1[61];
  *a1 = &vgui::EditablePanel::`vftable';
  sub_10034930(v6);
  v3 = a1[53];
  if ( v3 )
  {
    sub_10281130(a1[53]);
    sub_10034930(v3);
  }
  v4 = (void *)a1[60];
  if ( v4 )
    sub_1022AF00(v4);
  sub_102858F0(a1 + 54);
  return sub_10240430((int)a1, a2, v3);
}
