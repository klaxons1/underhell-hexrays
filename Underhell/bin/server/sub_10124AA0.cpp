int __usercall sub_10124AA0@<eax>(_DWORD *a1@<ecx>, int a2@<edi>)
{
  const char *v3; // eax
  int result; // eax
  _BYTE v5[4]; // [esp+4h] [ebp-4h] BYREF

  v3 = *(const char **)(*(int (__thiscall **)(_DWORD *, _BYTE *))(*a1 + 28))(a1, v5);
  if ( !v3 )
    v3 = String;
  result = sub_100E8220(a2, v3);
  a1[203] = result;
  return result;
}
