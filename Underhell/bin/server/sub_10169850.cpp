int __usercall sub_10169850@<eax>(int a1@<ecx>, int a2@<edi>)
{
  const char *v2; // eax
  int v4; // [esp+0h] [ebp-4h] BYREF

  v4 = a1;
  v2 = *(const char **)(*(int (__thiscall **)(int, int *))(*(_DWORD *)a1 + 28))(a1, &v4);
  if ( !v2 )
    v2 = String;
  return sub_100E8220(a2, v2);
}
