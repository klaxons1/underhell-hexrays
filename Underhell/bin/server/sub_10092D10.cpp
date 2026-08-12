int __userpurge sub_10092D10@<eax>(int *a1@<ecx>, int a2@<edi>, int a3)
{
  int v3; // eax

  v3 = a1[906];
  if ( v3 )
    return (*(int (__thiscall **)(int, int))(*(_DWORD *)v3 + 200))(a1[906], a3);
  else
    return sub_10035940(a1, a2, a3);
}
