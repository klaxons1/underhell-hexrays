void __userpurge sub_10406390(float *a1@<ecx>, int a2@<edi>, int a3@<esi>, int a4)
{
  int savedregs; // [esp+0h] [ebp+0h] BYREF

  if ( (*(_BYTE *)(a4 + 356) & 0x28) == 0 || *(_DWORD *)(a4 + 420) == 11 || *(_BYTE *)(a4 + 225) >= 2u )
    sub_10406170(a1, (int)&savedregs, a2, a3);
}
