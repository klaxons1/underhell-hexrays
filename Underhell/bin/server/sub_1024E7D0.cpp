int __usercall sub_1024E7D0@<eax>(int a1@<ecx>, int a2@<edi>)
{
  sub_1024E650((float *)a1, a2);
  (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 100))(a1);
  if ( *(_DWORD *)(a1 + 260) )
  {
    sub_1025F370(a1, a1 + 816, 0);
    *(_DWORD *)(a1 + 800) = 0;
    *(_DWORD *)(a1 + 200) = sub_1024DB50;
  }
  else
  {
    sub_1025F370(a1, a1 + 828, 0);
    *(_DWORD *)(a1 + 800) = 1;
  }
  return (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 584))(a1);
}
