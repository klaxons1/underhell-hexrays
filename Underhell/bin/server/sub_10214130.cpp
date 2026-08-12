int __usercall sub_10214130@<eax>(_DWORD *a1@<ecx>, int a2@<edi>)
{
  const char **v3; // eax
  int v4; // eax
  bool v5; // zf
  char *v6; // eax
  _BYTE v8[4]; // [esp+4h] [ebp-4h] BYREF

  v3 = (const char **)(*(int (__thiscall **)(_DWORD *, _BYTE *))(*a1 + 28))(a1, v8);
  v4 = sub_10213890(*v3);
  v5 = a1[359] == 0;
  a1[321] = v4;
  if ( !v5 )
  {
    v6 = (char *)a1[359];
    if ( !v6 )
      v6 = (char *)String;
    sub_1023B8B0(v6);
  }
  sub_102074B0((int)a1, a2);
  if ( !byte_106C1FE4 )
  {
    dword_106C1B6C = sub_100032E0((int)"ACT_DOOR_OPEN");
    dword_106C1B70 = sub_100032E0((int)"ACT_DOOR_LOCKED");
  }
  return sub_1023B8B0("Metal.Door_Breach");
}
