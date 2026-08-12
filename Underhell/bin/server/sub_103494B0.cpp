void __usercall sub_103494B0(_DWORD *a1@<ecx>, int a2@<edi>)
{
  _DWORD *v2; // esi
  int v3; // eax
  int v4; // edi
  const char **v5; // esi
  char *v6; // eax
  const char *v7; // eax
  const char *v8; // eax
  const char *v9; // ecx
  const char *v10; // eax
  const char *v11; // eax
  int v12; // [esp+4h] [ebp-Ch] BYREF
  _DWORD *v13; // [esp+8h] [ebp-8h] BYREF
  _DWORD *v14; // [esp+Ch] [ebp-4h]

  v2 = a1;
  v14 = a1;
  sub_100E8220(a2, "models/combine_dropship.mdl");
  v3 = v2[997];
  if ( v3 == -3 )
  {
    sub_100E8220(a2, "models/buggy.mdl");
  }
  else if ( v3 == 1 )
  {
    sub_10260680("prop_dropship_container", 0);
    v4 = 0;
    v5 = (const char **)(v2 + 1017);
    do
    {
      if ( *(v5 - 6) )
      {
        if ( *v5 )
          goto LABEL_9;
        v6 = (char *)*(v5 - 6);
        if ( !v6 )
          v6 = (char *)String;
        v7 = (const char *)*sub_1024B3F0(&v12, v6);
        *v5 = v7;
        if ( v7 )
        {
LABEL_9:
          v8 = *v5;
          v13 = 0;
          if ( !v8 )
            v8 = String;
          sub_101812F0(v4, (int)v5, (int *)&v13, (int)v8, 0);
          if ( v13 )
          {
            (*(void (__thiscall **)(_DWORD *))(*v13 + 100))(v13);
            sub_1025FAE0(v13);
          }
        }
        else
        {
          v9 = *(v5 - 6);
          if ( !v9 )
            v9 = String;
          v10 = (const char *)v14[65];
          if ( !v10 )
            v10 = String;
          Warning("npc_combinedropship %s: Template NPC %s not found!\n", v10, v9);
          *v5 = (const char *)v14[1017];
        }
        if ( !v5[6] )
        {
          v11 = (const char *)v14[65];
          if ( !v11 )
            v11 = String;
          Warning("npc_combinedropship %s: Has no dustoff point for NPC %d!\n", v11, v4);
        }
      }
      else
      {
        *v5 = 0;
      }
      ++v4;
      ++v5;
    }
    while ( v4 < 6 );
    v2 = v14;
  }
  sub_1023B8B0("NPC_CombineDropship.RotorLoop");
  sub_1023B8B0("NPC_CombineDropship.FireLoop");
  sub_1023B8B0("NPC_CombineDropship.NearRotorLoop");
  sub_1023B8B0("NPC_CombineDropship.OnGroundRotorLoop");
  sub_1023B8B0("NPC_CombineDropship.DescendingWarningLoop");
  sub_1023B8B0("NPC_CombineDropship.NearRotorLoop");
  if ( v2[1031] )
    sub_10260680("npc_rollermine", 0);
  nullsub_4();
}
