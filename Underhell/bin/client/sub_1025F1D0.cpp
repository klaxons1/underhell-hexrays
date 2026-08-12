int __usercall sub_1025F1D0@<eax>(int a1@<ecx>, int a2@<ebp>, int a3@<edi>)
{
  int v4; // ecx

  v4 = *(_DWORD *)(a1 + 952);
  *(_DWORD *)a1 = &vgui::ComboBox::`vftable';
  (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 92))(v4);
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 956) + 92))(*(_DWORD *)(a1 + 956));
  return sub_10255530((int *)a1, a2, a3);
}
