int __userpurge sub_1027D580@<eax>(int a1@<ecx>, int a2@<ebp>, int a3@<edi>, int a4)
{
  char v5; // al
  int v7; // [esp+8h] [ebp-4h] BYREF

  *(_DWORD *)(a1 + 40) = a4;
  v5 = *(_BYTE *)(a1 + 52);
  if ( (v5 & 1) != 0 )
  {
    if ( (v5 & 2) != 0 || *(_BYTE *)(a1 + 76) )
      sub_1027D430((int *)a1);
    sub_1027CEA0(a1, a2, a3);
  }
  (*(void (__thiscall **)(int, int *, int *))(*(_DWORD *)a1 + 8))(a1, &v7, &a4);
  return (*(int (__thiscall **)(int, int, int))(*(_DWORD *)a1 + 16))(a1, v7, a4);
}
