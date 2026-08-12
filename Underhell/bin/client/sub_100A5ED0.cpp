_DWORD *__cdecl sub_100A5ED0(_DWORD *a1, int a2)
{
  bool v3; // zf
  int v4; // edi
  int v5; // eax
  int v6; // esi
  int v7; // eax
  _DWORD *v8; // esi
  int v9; // eax
  _DWORD *v10; // eax
  int v11; // eax
  int v12; // esi
  int v13; // eax
  const char *v14; // eax
  _BYTE v16[12]; // [esp+Ch] [ebp-Ch] BYREF
  int v17; // [esp+24h] [ebp+Ch]

  *a1 = *(_DWORD *)(a2 + 12);
  a1[1] = *(_DWORD *)(a2 + 16);
  a1[2] = *(_DWORD *)(a2 + 20);
  v3 = (*(_BYTE *)(a2 + 48) & 2) == 0;
  v17 = *(_DWORD *)(a2 + 68);
  if ( !v3 )
  {
    v4 = sub_1009B7B0((int *)a2);
    if ( v4 )
    {
      v5 = sub_1009B7D0((int *)a2);
      v6 = v5;
      if ( *((int *)off_103DC81C + 5) <= 1
        || !v5
        || !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)(v5 + 8) + 32))(v5 + 8) )
      {
        v7 = __RTDynamicCast(
               v6,
               0,
               (struct _s_RTTICompleteObjectLocator *)&C_BaseEntity `RTTI Type Descriptor',
               (int)&C_BaseCombatWeapon `RTTI Type Descriptor',
               0);
        v8 = (_DWORD *)v7;
        if ( v7 )
        {
          if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v7 + 1268))(v7) )
          {
            if ( !(*(int (__thiscall **)(int *))(*off_103ED0D8 + 132))(off_103ED0D8) )
            {
              v9 = sub_1000BAC0(v8);
              v10 = (_DWORD *)sub_10008FC0(v9);
              if ( v10 )
              {
                v11 = sub_10045780(v10, 0);
                if ( v11 )
                  v4 = v11 + 4;
              }
            }
          }
        }
        if ( !(*(unsigned __int8 (__thiscall **)(int, int, _DWORD *, _BYTE *))(*(_DWORD *)v4 + 148))(v4, v17, a1, v16) )
        {
          v12 = *(_DWORD *)dword_10413178;
          v13 = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 36))(v4);
          v14 = (const char *)(*(int (__thiscall **)(int, int))(v12 + 12))(dword_10413178, v13);
          DevMsg("GetTracerOrigin: Couldn't find attachment %d on model %s\n", v17, v14);
        }
      }
    }
  }
  return a1;
}
