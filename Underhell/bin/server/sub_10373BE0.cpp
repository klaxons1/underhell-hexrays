int __userpurge sub_10373BE0@<eax>(int a1@<ecx>, int a2@<edi>, float a3, float a4)
{
  int v5; // eax
  bool v6; // bl
  int v7; // eax
  int v8; // eax
  int result; // eax
  double v10; // st7
  int v11; // eax
  float *v12; // eax
  bool v13; // zf
  int savedregs; // [esp+8h] [ebp+0h] BYREF

  v5 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 368))(a1);
  if ( v5 )
  {
    v7 = *(_DWORD *)(v5 + 92);
    v6 = v7 == dword_106E8514 || v7 == dword_106E8510;
  }
  else
  {
    v6 = 0;
  }
  if ( !(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 368))(a1)
    || (v8 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 368))(a1),
        !__RTDynamicCast(
           v8,
           0,
           (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
           (int)&CNPC_Bullseye `RTTI Type Descriptor',
           0))
    || !*(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)a1 + 368))(a1) + 3672) )
  {
    if ( !v6 && !*(_DWORD *)(dword_106E8A84 + 48) && *(float *)(a1 + 4548) > (double)*(float *)(dword_106B31C8 + 12) )
      return 0;
  }
  if ( *(_BYTE *)(a1 + 4244) || !sub_10023D10((_DWORD *)a1, 10) )
    return 0;
  v10 = *(float *)(dword_106E864C + 44);
  if ( *(_DWORD *)(a1 + 4624) )
    v10 = v10 + v10;
  if ( v6 )
    goto LABEL_26;
  if ( v10 < a4 )
    return 39;
  if ( !(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 368))(a1)
    || (v11 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 368))(a1), *(char **)(v11 + 92) != "npc_bullseye")
    && !sub_100D6240((_DWORD *)v11, "npc_bullseye") )
  {
    if ( *(float *)(dword_106E8694 + 44) > (double)a4 )
      return 38;
  }
LABEL_26:
  if ( a3 < 0.8 )
    return 40;
  if ( v6 )
    return 22;
  if ( *(_BYTE *)(a1 + 4291) )
    return 22;
  if ( *(_DWORD *)(dword_106E8A84 + 48) )
    return 22;
  v12 = (float *)sub_10019640((_DWORD *)a1);
  v13 = sub_10373A20(a1, (int)&savedregs, a2, a1, v12) == 0;
  result = 83;
  if ( !v13 )
    return 22;
  return result;
}
