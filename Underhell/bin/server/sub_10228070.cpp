char __thiscall sub_10228070(_DWORD *this)
{
  _DWORD *v1; // edi
  int v2; // ecx
  int v4; // esi
  int v5; // ebx
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // esi
  _DWORD *v10; // eax
  int v11; // eax
  int v12; // edi
  int v13; // eax
  int v14; // eax
  _DWORD *v15; // esi
  _DWORD *v16; // eax
  _DWORD *v17; // eax
  _DWORD *v18; // eax
  int v19; // [esp-10h] [ebp-20h]
  int v20; // [esp-Ch] [ebp-1Ch]
  int v21; // [esp+4h] [ebp-Ch]
  _DWORD *v22; // [esp+8h] [ebp-8h]
  bool v23; // [esp+Fh] [ebp-1h]

  v1 = this;
  v2 = this[244];
  v22 = v1;
  if ( !v2 )
    return 0;
  v4 = 0;
  v21 = 0;
  if ( sub_1041CB40(v2) <= 0 )
    return 1;
  while ( 1 )
  {
    v5 = (*(int (__thiscall **)(_DWORD *, int))(*v1 + 896))(v1, v4);
    if ( !v5 || !(*(int (__thiscall **)(int))(*(_DWORD *)v5 + 288))(v5) )
      goto LABEL_28;
    v6 = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 288))(v5);
    if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v6 + 264))(v6) )
      return 0;
    v7 = v1[379];
    if ( v7 == 1 )
    {
      v8 = sub_100D7680(v5);
      v9 = v8;
      if ( v8 )
      {
        v23 = 0;
        if ( *(_DWORD *)(dword_10698344 + 48) )
        {
          v19 = v8;
          v10 = (_DWORD *)sub_10226440();
          v23 = sub_102271D0(v10, v19, 0) != 0;
          if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v9 + 1088))(v9) )
          {
            v11 = __RTDynamicCast(
                    v9,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&CAI_BaseNPC `RTTI Type Descriptor',
                    (int)&CNPC_Alyx `RTTI Type Descriptor',
                    0);
            v12 = v11;
            if ( v11 && (sub_102F4280(v11) == 1 || sub_102F4280(v12) == 3) )
              v23 = 1;
            v1 = v22;
          }
        }
        if ( (*(int (__thiscall **)(int))(*(_DWORD *)v9 + 1656))(v9)
          && (v13 = (*(int (__thiscall **)(int))(*(_DWORD *)v9 + 1656))(v9),
              (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v13 + 8))(v13))
          || v23 )
        {
          *((_BYTE *)v1 + 925) = 1;
          return 0;
        }
      }
      goto LABEL_27;
    }
    if ( v7 == 2 || v7 == 3 )
      break;
LABEL_27:
    sub_100F12C0(v5, v1[244]);
    v4 = v21;
LABEL_28:
    v21 = ++v4;
    if ( v4 >= sub_1041CB40(v1[244]) )
      return 1;
  }
  v14 = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 288))(v5);
  v15 = (_DWORD *)v14;
  if ( !v14 || (v20 = v14, v16 = (_DWORD *)sub_10226440(), sub_10226DE0(v16, v20)) )
  {
    if ( v1[379] == 3 )
    {
      v17 = (_DWORD *)sub_10226440();
      sub_10226B80(v17, v15, 0, 0, 0);
    }
    else
    {
      v18 = (_DWORD *)sub_10226440();
      sub_10226CD0(v18, v15, 0);
      *((_BYTE *)v1 + 927) = 1;
    }
    goto LABEL_27;
  }
  *((_BYTE *)v1 + 926) = 1;
  return 0;
}
