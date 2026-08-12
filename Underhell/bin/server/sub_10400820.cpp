void __usercall sub_10400820(int a1@<ecx>, int a2@<ebx>, int a3@<edi>)
{
  int v4; // eax

  sub_100C1080(a1);
  if ( *(_DWORD *)(a1 + 9820) )
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(a1 + 9820) + 4))(*(_DWORD *)(a1 + 9820), a1 + 1500);
  v4 = *(_DWORD *)(a1 + 9828);
  *(_BYTE *)(a1 + 9832) = *(_BYTE *)(dword_106B3CDC + 12) == 1;
  if ( v4 )
    sub_10400740((_DWORD *)a1, a2, a3, v4, 0);
}
