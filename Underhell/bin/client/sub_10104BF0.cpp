int __usercall sub_10104BF0@<eax>(int a1@<ecx>, float *a2@<edi>)
{
  int *v2; // esi
  int v3; // edi
  float v5; // [esp+4h] [ebp-10h]
  float v6; // [esp+10h] [ebp-4h]

  v2 = (int *)(a1 - 12);
  sub_10104930(a1 - 12, a2);
  v3 = *v2;
  v6 = *(float *)(dword_1043639C + 44);
  v5 = RandomFloat(1.0, 1.1) * v6 + *((float *)off_103DC81C + 3);
  return (*(int (__thiscall **)(int *, _DWORD))(v3 + 408))(v2, LODWORD(v5));
}
