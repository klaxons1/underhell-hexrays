int __usercall sub_101314D0@<eax>(int a1@<ecx>, int a2@<edi>)
{
  const char *v3; // eax
  const char *v4; // eax
  _BYTE v6[4]; // [esp+4h] [ebp-4h] BYREF

  sub_100BD350();
  v3 = *(const char **)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)a1 + 28))(a1, v6);
  if ( !v3 )
    v3 = String;
  sub_100E8220(a2, v3);
  v4 = *(const char **)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)a1 + 28))(a1, v6);
  if ( !v4 )
    v4 = String;
  (*(void (__thiscall **)(int, const char *))(*(_DWORD *)a1 + 104))(a1, v4);
  return sub_101313D0(a1);
}
