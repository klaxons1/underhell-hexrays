int __userpurge sub_10396E40@<eax>(float *a1@<ecx>, int a2@<edi>, float *a3, int a4)
{
  int v4; // ebx
  int result; // eax
  int v7; // edi
  int v8; // eax
  double v9; // st7
  int v10; // eax
  int v11; // eax
  unsigned __int8 v12; // dl
  unsigned __int8 v13; // al
  const char *v14; // [esp+18h] [ebp-238h]
  int v15; // [esp+28h] [ebp-228h]
  int v17; // [esp+34h] [ebp-21Ch]
  char Buffer[512]; // [esp+40h] [ebp-210h] BYREF
  char ArgList[4]; // [esp+240h] [ebp-10h]
  int v20; // [esp+244h] [ebp-Ch]
  unsigned __int8 v21; // [esp+24Ah] [ebp-6h]
  unsigned __int8 v22; // [esp+24Bh] [ebp-5h]
  unsigned __int8 v23; // [esp+24Ch] [ebp-4h]
  unsigned __int8 v24; // [esp+24Dh] [ebp-3h]
  unsigned __int8 v25; // [esp+24Eh] [ebp-2h]
  unsigned __int8 v26; // [esp+24Fh] [ebp-1h]

  v4 = 0;
  result = __RTDynamicCast(
             (int)a3,
             0,
             (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
             (int)&CAI_BaseNPC `RTTI Type Descriptor',
             0);
  v20 = result;
  if ( result )
  {
    if ( *(_DWORD *)(a4 + 40) == -1
      || off_1061BE18[4 * (*(_DWORD *)(a4 + 40) & 0xFFF) + 2] != *(_DWORD *)(a4 + 40) >> 12 )
    {
      v7 = 0;
    }
    else
    {
      v7 = off_1061BE18[4 * (*(_DWORD *)(a4 + 40) & 0xFFF) + 1];
    }
    *(_DWORD *)ArgList = 0;
    v23 = 0;
    v25 = 0;
    v22 = 0;
    v26 = 0;
    v24 = 0;
    v21 = 0;
    if ( __RTDynamicCast(
           v7,
           0,
           (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
           (int)&CBreakableProp `RTTI Type Descriptor',
           0)
      && (*(_BYTE *)(a4 + 64) & 0x40) != 0 )
    {
      if ( *(float *)(dword_106B31C8 + 12) - a1[1402] >= 5.0 )
        a1[1404] = 0.0;
      v8 = ++*((_DWORD *)a1 + 1404);
      v9 = *(float *)(dword_106B31C8 + 12);
      a1[1402] = *(float *)(dword_106B31C8 + 12);
      *(_DWORD *)ArgList = v8;
    }
    else
    {
      if ( *(float *)(dword_106B31C8 + 12) - a1[1403] >= 3.0 )
        a1[1405] = 0.0;
      ++*((_DWORD *)a1 + 1405);
      v9 = *(float *)(dword_106B31C8 + 12);
      v4 = *((_DWORD *)a1 + 1405);
      a1[1403] = *(float *)(dword_106B31C8 + 12);
    }
    result = (*(int (__thiscall **)(float *, float *, int, _DWORD))(*(_DWORD *)a1 + 548))(a1, a3, 16449, 0);
    if ( (_BYTE)result )
    {
      if ( v7 && sub_102D5430(v7) && sub_102D5460(v7) )
        v23 = 1;
      if ( (float *)(*(int (__thiscall **)(float *, int))(*(_DWORD *)a1 + 368))(a1, a2) == a3 )
        v25 = 1;
      v10 = (*(int (__thiscall **)(float *))(*(_DWORD *)a1 + 1868))(a1);
      v11 = sub_100773C0(v10, (int)a3, 0);
      if ( v11 )
      {
        v9 = 0.0;
        v12 = *(_BYTE *)(v11 + 55);
        if ( *(float *)(v11 + 44) > 0.0 )
          v26 = 1;
      }
      else
      {
        v12 = v22;
      }
      if ( *(_DWORD *)(v20 + 1744) == 1 && (*(_BYTE *)(a4 + 64) & 2) != 0 )
        v24 = 1;
      if ( *(_DWORD *)(v20 + 1752) != 1 || (v13 = 1, (*(_BYTE *)(a4 + 64) & 2) == 0) )
        v13 = v21;
      v17 = v13;
      v15 = v12;
      v14 = sub_10248160((_DWORD *)a4);
      sub_100271C0(a1, a3);
      sub_10394CE0(
        Buffer,
        "num_barrels:%d,distancetoplayerenemy:%f,playerAmmo:%s,consecutive_player_kills:%d,punted_grenade:%d,victim_was_e"
        "nemy:%d,victim_was_mob:%d,victim_was_attacker:%d,headshot:%d,oneshot:%d",
        *(_DWORD *)ArgList,
        v9,
        v14,
        v4,
        v23,
        v25,
        v15,
        v26,
        v24,
        v17);
      return (*(int (__thiscall **)(float *, const char *, char *, _DWORD, _DWORD))(*(_DWORD *)a1 + 2344))(
               a1,
               "TLK_PLAYER_KILLED_NPC",
               Buffer,
               0,
               0);
    }
  }
  return result;
}
