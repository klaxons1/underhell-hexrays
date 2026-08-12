int __usercall sub_10129D20@<eax>(int a1@<ecx>, int a2@<edi>)
{
  const char *v4; // eax
  _BYTE v5[4]; // [esp+4h] [ebp-4h] BYREF

  if ( !*(_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)a1 + 28))(a1, v5) )
    return sub_100E8220(a2, "sprites/blueglow1.vmt");
  v4 = *(const char **)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)a1 + 28))(a1, v5);
  if ( !v4 )
    v4 = String;
  return sub_100E8220(a2, v4);
}
