int __thiscall sub_100C80F0(void *this, float *a2, float *a3)
{
  int v4; // edi
  int v5; // eax
  int v6; // esi
  int v8[1024]; // [esp+Ch] [ebp-102Ch] BYREF
  char v9[20]; // [esp+100Ch] [ebp-2Ch] BYREF
  float v10[3]; // [esp+1020h] [ebp-18h] BYREF
  float v11[3]; // [esp+102Ch] [ebp-Ch] BYREF
  int v12; // [esp+1040h] [ebp+8h]

  v10[0] = *a2 + *a3;
  v10[1] = a3[1] + a2[1];
  v10[2] = a3[2] + a2[2];
  v11[0] = *a2 - *a3;
  v11[1] = a2[1] - a3[1];
  v11[2] = a2[2] - a3[2];
  sub_1025F990(v8, 1024, 0);
  v4 = 0;
  v12 = sub_1025F9C0(v11, v10, v9);
  if ( v12 <= 0 )
    return 0;
  while ( 1 )
  {
    v5 = __RTDynamicCast(
           v8[v4],
           0,
           (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
           (int)&CItem `RTTI Type Descriptor',
           0);
    v6 = v5;
    if ( v5 )
    {
      if ( *(char **)(v5 + 92) == "item_health*" || (unsigned __int8)sub_100D6240("item_health*") )
      {
        if ( (*(unsigned __int8 (__thiscall **)(void *, int, int, _DWORD))(*(_DWORD *)this + 548))(this, v6, 16449, 0) )
          break;
      }
    }
    if ( ++v4 >= v12 )
      return 0;
  }
  return v6;
}
