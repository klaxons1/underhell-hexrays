int __usercall sub_10126C00@<eax>(int a1@<ecx>, const char *a2@<edi>)
{
  int v4; // eax
  int v5; // edi
  int v6; // ebx
  int *v7; // ecx
  _BYTE v9[4]; // [esp+4h] [ebp-Ch] BYREF
  int v10; // [esp+8h] [ebp-8h]

  sub_1042CBA0("violence_hgibs");
  if ( (unsigned __int8)sub_1042C850(v9) && !*(_DWORD *)(v10 + 48) )
    return 0;
  v4 = sub_101811E0("gib", -1);
  v5 = __RTDynamicCast(
         v4,
         0,
         (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
         (int)&CGib `RTTI Type Descriptor',
         0);
  if ( !v5 )
    Warning("classname %s used to create wrong class type\n", a2);
  sub_10166E20("models/gibs/hgibs.mdl");
  sub_101660B0(0);
  if ( *(int *)(a1 + 848) <= 1 )
    DevWarning(2, "GibShooter Body is <= 1!\n");
  v6 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B31E4 + 8))(
         dword_106B31E4,
         1,
         *(_DWORD *)(a1 + 848) - 1);
  if ( *(_DWORD *)(v5 + 852) != v6 )
  {
    if ( *(_BYTE *)(v5 + 84) )
    {
      *(_BYTE *)(v5 + 88) |= 1u;
    }
    else
    {
      v7 = *(int **)(v5 + 24);
      if ( v7 )
        sub_100194B0(v7, 852);
    }
    *(_DWORD *)(v5 + 852) = v6;
  }
  if ( *(_DWORD *)(a1 + 860) )
    sub_100BD480((_DWORD *)v5, *(char **)(a1 + 860));
  return v5;
}
