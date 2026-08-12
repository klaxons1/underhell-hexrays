void __usercall sub_1037BBE0(int a1@<edi>)
{
  int v1; // esi
  int v2; // ebx
  int v3; // eax
  int v4; // edi
  int v5; // eax
  int v6; // ebx
  int v7; // ecx
  int v8; // esi
  int v9; // eax
  int v10; // ecx
  int *v11; // eax
  int v12; // esi
  int i; // ebx
  char **v14; // eax
  int v15; // [esp-10h] [ebp-34h]
  int v17[2]; // [esp+0h] [ebp-24h] BYREF
  int v18; // [esp+8h] [ebp-1Ch]
  int v19; // [esp+Ch] [ebp-18h]
  int v20; // [esp+10h] [ebp-14h]
  int v21; // [esp+14h] [ebp-10h] BYREF
  int v22; // [esp+18h] [ebp-Ch]
  int *v23; // [esp+1Ch] [ebp-8h]
  int v24; // [esp+20h] [ebp-4h]

  if ( -1.0 == flt_10674310 || *(float *)(dword_106B31C8 + 12) - flt_10674310 >= 2.0 )
  {
    flt_10674310 = *(float *)(dword_106B31C8 + 12);
    v1 = 0;
    v17[0] = 0;
    v17[1] = 0;
    v18 = 0;
    v19 = 0;
    v20 = 0;
    sub_1037BAF0(v17);
    v2 = sub_1002A680(&dword_10690DF8);
    v21 = v2;
    v22 = 0;
    v3 = sub_1016BFB0(&dword_10690DF8);
    v4 = v17[0];
    if ( v3 > 0 )
    {
      while ( v19 )
      {
        if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(v2 + 4 * v1) + 264))(*(_DWORD *)(v2 + 4 * v1)) )
        {
          v5 = __RTDynamicCast(
                 *(_DWORD *)(v2 + 4 * v1),
                 0,
                 (struct _s_RTTICompleteObjectLocator *)&CAI_BaseNPC `RTTI Type Descriptor',
                 (int)&CNPC_Strider `RTTI Type Descriptor',
                 0);
          v6 = v5;
          if ( v5 )
          {
            if ( !(unsigned __int8)sub_103B0F10(v5) )
            {
              v7 = 3 - sub_100538F0(v6, 0);
              v24 = v7;
              if ( v7 > 0 )
              {
                v8 = v19 - 1;
                if ( v19 - 1 >= 0 )
                {
                  v23 = (int *)(v4 + 4 * v19 - 4);
                  while ( v7 > 0 )
                  {
                    a1 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31D0 + 72))(
                           dword_106B31D0,
                           *(_DWORD *)(v6 + 24),
                           a1);
                    v9 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(
                           dword_106B31D0,
                           *(_DWORD *)(*(_DWORD *)(v4 + 4 * v8) + 24));
                    DevMsg("npc_hunter %d assigned to npc_strider %d\n", v9, v15);
                    sub_10379DB0(*(_DWORD **)(v4 + 4 * v8), v6);
                    if ( v19 > 0 )
                    {
                      v10 = *v23;
                      --v19;
                      v11 = v23 - 1;
                      *(_DWORD *)(v4 + 4 * v8) = v10;
                      v23 = v11;
                    }
                    --v24;
                    if ( --v8 < 0 )
                      break;
                    v7 = v24;
                  }
                }
                v1 = v22;
              }
            }
          }
        }
        v22 = ++v1;
        if ( v1 >= sub_1016BFB0(&dword_10690DF8) )
          break;
        v2 = v21;
      }
    }
    v12 = v19;
    for ( i = 0; i < v12; ++i )
    {
      sub_100577F0(*(_DWORD *)(v4 + 4 * i) + 4292, 0, 0);
      v14 = (char **)sub_10162BE0(&v21, "free_hunters_squad");
      sub_1004AF40(*(void **)(v4 + 4 * i), *v14);
    }
    if ( v18 >= 0 )
    {
      if ( v4 )
        (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v4);
    }
  }
}
