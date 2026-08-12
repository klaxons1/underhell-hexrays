int __usercall sub_10336E20@<eax>(_DWORD *a1@<ecx>, int a2@<edi>)
{
  int v3; // eax
  const char *v4; // eax
  const char *v5; // eax
  int i; // edi
  _BYTE v8[4]; // [esp+8h] [ebp-4h] BYREF

  (*(void (__thiscall **)(_DWORD *))(*a1 + 2360))(a1);
  if ( !a1[1443] )
  {
    if ( a1[1442] == 1 || a1[1442] == 2 )
    {
      v3 = RandomInt(1, 2);
    }
    else
    {
      if ( a1[1442] != 3 )
        goto LABEL_8;
      v3 = RandomInt(1, 3);
    }
    a1[1443] = v3;
  }
LABEL_8:
  v4 = *(const char **)(*(int (__thiscall **)(_DWORD *, _BYTE *))(*a1 + 28))(a1, v8);
  if ( !v4 )
    v4 = String;
  if ( !_stricmp(v4, "models/swat.mdl") )
    *((_BYTE *)a1 + 5684) = 1;
  if ( *(_DWORD *)(dword_106E60AC + 48) )
  {
    v5 = *(const char **)(*(int (__thiscall **)(_DWORD *, _BYTE *))(*a1 + 28))(a1, v8);
    if ( !v5 )
      v5 = String;
    sub_100E8220(a2, v5);
  }
  else
  {
    sub_10334C70(a1, a1[1442]);
  }
  if ( (const char *)a1[65] == "matt" || sub_100D6190(a1, "matt") )
    sub_100E8220(a2, "models/props_canal/mattpipe.mdl");
  sub_100E8220(a2, "models/chefhat.mdl");
  sub_1023B8B0("NPC_Citizen.FootstepLeft");
  sub_1023B8B0("NPC_Citizen.FootstepRight");
  sub_1023B8B0("NPC_Citizen.Die");
  sub_10223EB0(a2, (int)"scenes/Expressions/CitizenIdle.vcd");
  sub_10223EB0(a2, (int)"scenes/Expressions/CitizenAlert_loop.vcd");
  sub_10223EB0(a2, (int)"scenes/Expressions/CitizenCombat_loop.vcd");
  for ( i = 0; i < 3; ++i )
  {
    sub_10223EB0(i * 4, (int)off_1066E8C8[i]);
    sub_10223EB0(i * 4, (int)off_1066E8D4[i]);
    sub_10223EB0(i * 4, (int)off_1066E8E0[i]);
  }
  return sub_10393D20(a1);
}
