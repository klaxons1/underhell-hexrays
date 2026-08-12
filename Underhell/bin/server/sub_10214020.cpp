int __usercall sub_10214020@<eax>(int a1@<ecx>, int a2@<edi>)
{
  const char *v3; // eax
  const char *v5; // eax
  const char **v6; // eax
  int v7; // eax
  bool v8; // zf
  char *v9; // eax
  _BYTE v10[4]; // [esp+20h] [ebp-4h] BYREF

  if ( *(_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)a1 + 28))(a1, v10) )
  {
    v5 = *(const char **)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)a1 + 28))(a1, v10);
    if ( !v5 )
      v5 = String;
    sub_100E8220(a2, v5);
    v6 = (const char **)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)a1 + 28))(a1, v10);
    v7 = sub_10213890(*v6);
    v8 = *(_DWORD *)(a1 + 1436) == 0;
    *(_DWORD *)(a1 + 1284) = v7;
    if ( !v8 )
    {
      v9 = *(char **)(a1 + 1436);
      if ( !v9 )
        v9 = (char *)String;
      sub_1023B8B0(v9);
    }
    return sub_102074B0(a1, a2);
  }
  else
  {
    if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
      sub_100DAE60(a1);
    if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
      sub_100DAE60(a1);
    if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
      sub_100DAE60(a1);
    v3 = *(const char **)(a1 + 92);
    if ( !v3 )
      v3 = String;
    return Msg(
             "%s at (%.3f, %.3f, %.3f) has no model name!\n",
             v3,
             *(float *)(a1 + 580),
             *(float *)(a1 + 584),
             *(float *)(a1 + 588));
  }
}
