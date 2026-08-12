void __thiscall sub_102F1A90(_DWORD *this, int a2, float *a3, unsigned int a4)
{
  _DWORD *v4; // ebx
  bool v5; // cc
  const char *v6; // eax
  int v7; // esi
  int v8; // edi
  int v9; // edi
  int *v10; // ecx
  float v11[3]; // [esp+2Ch] [ebp-54h] BYREF
  float v12[3]; // [esp+38h] [ebp-48h] BYREF
  float v13[3]; // [esp+44h] [ebp-3Ch] BYREF
  float v14[3]; // [esp+50h] [ebp-30h] BYREF
  float v15[3]; // [esp+5Ch] [ebp-24h] BYREF
  float v16[3]; // [esp+68h] [ebp-18h] BYREF
  int v17; // [esp+74h] [ebp-Ch]
  _DWORD *v18; // [esp+78h] [ebp-8h]
  int v19; // [esp+7Ch] [ebp-4h]

  v4 = this;
  v18 = this;
  sub_1010DD80(this + 427, __SPAIR64__((unsigned int)this, a4), 0.0);
  v5 = v4[424] <= 0;
  v19 = 0;
  if ( !v5 )
  {
    do
    {
      if ( v4[422] )
        break;
      v6 = (const char *)v4[423];
      if ( !v6 )
        v6 = String;
      v7 = sub_101811E0(v6, -1);
      if ( !v7 )
        break;
      v16[0] = 0.75;
      v16[1] = 0.75;
      v16[2] = 0.75;
      v15[0] = 0.25;
      v15[1] = 0.25;
      v15[2] = 0.25;
      sub_10111860((int)(v4 + 80), v15, v16, v11);
      sub_100E0D20(v7, v11);
      v14[0] = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                 dword_106B31E4,
                 -20.0,
                 20.0);
      v14[1] = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                 dword_106B31E4,
                 0.0,
                 360.0);
      v14[2] = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                 dword_106B31E4,
                 -20.0,
                 20.0);
      sub_100E0EA0(v7, v14);
      v17 = sub_10219A30();
      v13[0] = (double)v17 * 0.000030518509 * 20.0 - 10.0;
      v17 = sub_10219A30();
      v13[1] = (double)v17 * 0.000030518509 * 20.0 - 10.0;
      v17 = sub_10219A30();
      v13[2] = (double)v17 * 0.000030518509 * 20.0 - 10.0;
      sub_100DD660(v7, v13);
      v12[0] = a3[1];
      v12[1] = a3[2];
      v12[2] = *a3;
      sub_100D7260((float *)v7, v12);
      v8 = __RTDynamicCast(
             v7,
             0,
             (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
             (int)&CItem `RTTI Type Descriptor',
             0);
      if ( v8 && !(*(int (__thiscall **)(unsigned int))(*(_DWORD *)a4 + 340))(a4) )
        sub_101778A0(v8);
      (*(void (__thiscall **)(int))(*(_DWORD *)v7 + 96))(v7);
      if ( *(char **)(v7 + 92) == "item_dynamic_resupply" || sub_100D6240((_DWORD *)v7, "item_dynamic_resupply") )
      {
        if ( v4[425] )
          sub_102EF580((_DWORD *)v7, (char *)v4[425]);
        if ( !v19 )
        {
          v9 = *(_DWORD *)(v7 + 248) | 4;
          if ( *(_DWORD *)(v7 + 248) != v9 )
          {
            if ( *(_BYTE *)(v7 + 84) )
            {
              *(_BYTE *)(v7 + 88) |= 1u;
            }
            else
            {
              v10 = *(int **)(v7 + 24);
              if ( v10 )
                sub_100194B0(v10, 248);
            }
            *(_DWORD *)(v7 + 248) = v9;
          }
          v4 = v18;
        }
        sub_100EC4A0((int *)v7, *(float *)(dword_106B31C8 + 12), 0);
      }
      ++v19;
    }
    while ( v19 < v4[424] );
  }
}
