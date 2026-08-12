int __userpurge sub_1035FFB0@<eax>(int a1@<ecx>, int a2@<edi>, int a3)
{
  int v4; // eax

  if ( *(_BYTE *)(a1 + 2680) )
    return 0;
  v4 = *(_DWORD *)(a1 + 3624);
  if ( v4 )
    return (*(int (__thiscall **)(_DWORD, int))(*(_DWORD *)v4 + 200))(*(_DWORD *)(a1 + 3624), a3);
  else
    return sub_10035940((int *)a1, a2, a3);
}
