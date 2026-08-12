int __usercall sub_10240430@<eax>(int a1@<ecx>, int a2@<ebp>, int a3@<edi>)
{
  int v4; // edi
  char v5; // al
  int v6; // edx
  int v7; // edi
  int v9; // [esp-4h] [ebp-10h]
  int v10; // [esp+8h] [ebp-4h] BYREF

  *(_DWORD *)a1 = &vgui::Panel::`vftable';
  if ( sub_10103B80((_DWORD *)a1) != -1 )
  {
    v9 = *(_DWORD *)(a1 + 64);
    v10 = a1;
    if ( sub_1023F0C0((int)&off_103FCF24, v9) )
      sub_102750F0(&v10);
  }
  if ( *(_BYTE *)(*(_DWORD *)(a1 + 36) + 1) )
    sub_1023F390((_DWORD *)a1, a3, 0, -1, 0);
  *(_WORD *)(a1 + 80) &= ~0x40u;
  *(_WORD *)(a1 + 80) |= 1u;
  sub_10236550((int *)a1, a2, 0);
  while ( (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA70 + 68))(dword_1047CA70, *(_DWORD *)(a1 + 68)) )
  {
    v4 = (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)dword_1047CA70 + 72))(
           dword_1047CA70,
           *(_DWORD *)(a1 + 68),
           0);
    v5 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA70 + 112))(dword_1047CA70, v4);
    v6 = *(_DWORD *)dword_1047CA70;
    if ( v5 )
      (*(void (__stdcall **)(int))(v6 + 116))(v4);
    else
      (*(void (__stdcall **)(int, _DWORD))(v6 + 64))(v4, 0);
  }
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA74 + 44))(dword_1047CA74, *(_DWORD *)(a1 + 68));
  sub_10034930(*(_DWORD *)(a1 + 72));
  v7 = *(_DWORD *)(a1 + 36);
  *(_DWORD *)(a1 + 68) = 0;
  if ( v7 )
  {
    sub_1011A810((int *)(v7 + 44));
    sub_1011A810((int *)(v7 + 24));
    sub_10034930(v7);
  }
  sub_1011A810((int *)(a1 + 104));
  return sub_1011A810((int *)(a1 + 84));
}
