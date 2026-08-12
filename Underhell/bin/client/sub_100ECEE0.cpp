int __usercall sub_100ECEE0@<eax>(int a1@<ebx>, int a2@<edi>)
{
  int *v2; // eax

  v2 = (int *)(*(int (__thiscall **)(int))(*(_DWORD *)dword_10439968 + 52))(dword_10439968);
  return sub_10053B20(a1, a2, 0, *v2, v2[1], v2[2], v2[3], 0, 0);
}
