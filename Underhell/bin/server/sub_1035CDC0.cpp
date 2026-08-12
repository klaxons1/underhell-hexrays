int __userpurge sub_1035CDC0@<eax>(int *a1@<ecx>, int a2@<edi>, int a3)
{
  float *v4; // eax

  v4 = (float *)(*(int (__thiscall **)(int *))(*a1 + 576))(a1);
  sub_101AB000("crow_death", *v4, v4[1], v4[2], 0.0, 0.0, 0.0, 0);
  return sub_10035940(a1, a2, a3);
}
