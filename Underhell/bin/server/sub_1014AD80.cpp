int __usercall sub_1014AD80@<eax>(_DWORD *a1@<ecx>, int a2@<edi>)
{
  int v4; // edx
  const char *v5; // eax
  _BYTE v6[4]; // [esp+4h] [ebp-4h] BYREF

  if ( (a1[62] & 0x80) != 0 )
    return sub_1014AB80((int)a1, a2);
  (*(void (__thiscall **)(_DWORD *))(*a1 + 100))(a1);
  sub_10112C00((int)(a1 + 80), 6);
  sub_100E0970((int)a1, v4, 7, 0);
  v5 = *(const char **)(*(int (__thiscall **)(_DWORD *, _BYTE *))(*a1 + 28))(a1, v6);
  if ( !v5 )
    v5 = String;
  (*(void (__thiscall **)(_DWORD *, const char *))(*a1 + 104))(a1, v5);
  return (*(int (__thiscall **)(_DWORD *))(*a1 + 584))(a1);
}
