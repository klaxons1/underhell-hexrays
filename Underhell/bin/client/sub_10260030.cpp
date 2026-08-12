int __userpurge sub_10260030@<eax>(int a1@<ecx>, int a2@<ebp>, int a3@<edi>, char a4)
{
  int v5; // ecx

  v5 = *(_DWORD *)(a1 + 952);
  *(_DWORD *)a1 = &vgui::ComboBox::`vftable';
  (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 92))(v5);
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 956) + 92))(*(_DWORD *)(a1 + 956));
  sub_10255530((int *)a1, a2, a3);
  if ( (a4 & 1) != 0 )
    sub_10034930(a1);
  return a1;
}
