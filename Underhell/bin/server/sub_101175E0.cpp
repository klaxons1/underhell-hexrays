int __usercall sub_101175E0@<eax>(int a1@<ecx>, int a2@<edi>)
{
  const char *v3; // eax
  const char *v4; // edi
  const char *v5; // eax
  _BYTE v7[4]; // [esp+4h] [ebp-4h] BYREF

  v3 = *(const char **)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)a1 + 28))(a1, v7);
  if ( !v3 )
    v3 = String;
  sub_100E8220(a2, v3);
  if ( *(_DWORD *)(a1 + 1128) )
  {
    sub_1023B8B0(*(char **)(a1 + 1128));
  }
  else
  {
    v4 = *(const char **)(a1 + 92);
    if ( !v4 )
      v4 = String;
    v5 = sub_100D6390((_DWORD *)a1);
    Warning("%s: %s has no commentary file.\n", v4, v5);
  }
  if ( *(_DWORD *)(a1 + 1132) )
    sub_1023B8B0(*(char **)(a1 + 1132));
  return sub_100BD350();
}
