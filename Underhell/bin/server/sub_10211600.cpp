int __usercall sub_10211600@<eax>(int a1@<ecx>, int a2@<edi>)
{
  int result; // eax
  const char *v4; // eax
  _BYTE v5[4]; // [esp+18h] [ebp-4h] BYREF

  if ( (*(_DWORD *)(a1 + 248) & 0x400000) != 0 )
    ++dword_106C1B68;
  if ( *(char **)(a1 + 92) == "physics_prop" || sub_100D6240((_DWORD *)a1, "physics_prop") )
    sub_100D5D20((_DWORD *)a1, (int)"prop_physics");
  result = sub_10210E40(a1, a2);
  if ( (*(_BYTE *)(a1 + 252) & 1) == 0 )
  {
    if ( *(char **)(a1 + 92) == "prop_physics_override" || sub_100D6240((_DWORD *)a1, "prop_physics_override") )
      sub_100D5D20((_DWORD *)a1, (int)"prop_physics");
    if ( (*(_DWORD *)(a1 + 248) & 4) != 0
      || (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)(a1 + 1120) + 92))(a1 + 1120, 11)
      || (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)(a1 + 1120) + 92))(a1 + 1120, 14) )
    {
      sub_100EBE30(a1, ((*(_DWORD *)(a1 + 248) & 0x1000) != 0) + 1);
    }
    if ( (*(_DWORD *)(a1 + 248) & 0x80) != 0 )
      *(_DWORD *)(a1 + 252) |= 0x200000u;
    (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 584))(a1);
    if ( !*(_BYTE *)(a1 + 1296) )
      sub_102076A0((_DWORD *)a1);
    v4 = *(const char **)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)a1 + 28))(a1, v5);
    if ( !v4 )
      v4 = String;
    result = strcmp(v4, "models/props_c17/door01_left.mdl");
    if ( !result )
    {
      sub_100C3430(a1, -1.0, 0.0);
      return sub_1020B300(a1);
    }
  }
  return result;
}
