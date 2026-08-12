int __usercall sub_1039F870@<eax>(int a1@<esi>, float *a2, int a3, _BYTE *a4)
{
  int v4; // eax
  int v5; // esi
  int v7; // [esp+8h] [ebp-4h] BYREF

  v7 = 0;
  if ( a4 && *a4 )
  {
    sub_101812F0((int)a4, a1, &v7, (int)a4, 0);
    v4 = __RTDynamicCast(
           v7,
           0,
           (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
           (int)&CNPC_RollerMine `RTTI Type Descriptor',
           0);
  }
  else
  {
    v4 = sub_101811E0("npc_rollermine", -1);
  }
  v5 = v4;
  if ( v4 )
  {
    sub_100E0D20(v4, a2);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v5 + 76))(v5, a3);
    (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 96))(v5);
    if ( !a4 || !*a4 )
    {
      *(_BYTE *)(v5 + 3828) = 1;
      *(_DWORD *)(v5 + 196) = sub_1039F190;
      return v5;
    }
  }
  else
  {
    Warning("NULL Ent in Rollermine Create!\n");
  }
  return v5;
}
