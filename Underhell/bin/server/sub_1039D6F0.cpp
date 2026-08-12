int __usercall sub_1039D6F0@<eax>(int a1@<ecx>, int a2@<edi>)
{
  const char *v3; // eax
  _BYTE v5[4]; // [esp+4h] [ebp-4h] BYREF

  sub_10021D80(a1);
  v3 = *(const char **)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)a1 + 28))(a1, v5);
  if ( !v3 )
    v3 = String;
  return sub_100E8220(a2, v3);
}
