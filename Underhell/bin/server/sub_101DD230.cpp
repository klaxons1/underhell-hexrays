int __usercall sub_101DD230@<eax>(int a1@<ecx>, int a2@<edi>)
{
  const char *v2; // eax
  _BYTE v4[4]; // [esp+4h] [ebp-4h] BYREF

  v2 = *(const char **)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)a1 + 28))(a1, v4);
  if ( !v2 )
    v2 = String;
  sub_100E8220(a2, v2);
  return sub_100BD350();
}
