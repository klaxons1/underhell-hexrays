int __thiscall sub_1026AF30(void *this, int a2)
{
  int result; // eax
  _DWORD *v4; // eax
  int v5; // edi
  int v6; // eax
  int v7; // esi
  int v8; // edx
  int v9; // esi
  int v10; // edx
  int v11; // eax
  int v12; // esi
  _DWORD *v13; // ecx
  _BYTE v14[48]; // [esp+4h] [ebp-60h] BYREF
  float v15[3]; // [esp+34h] [ebp-30h] BYREF
  _BYTE v16[12]; // [esp+40h] [ebp-24h] BYREF
  _BYTE v17[12]; // [esp+4Ch] [ebp-18h] BYREF
  _DWORD *v18; // [esp+58h] [ebp-Ch]
  int v19; // [esp+5Ch] [ebp-8h]
  int v20; // [esp+60h] [ebp-4h]

  if ( !*((_BYTE *)this + 104) )
  {
    (*(void (__thiscall **)(void *))(*(_DWORD *)this + 244))(this);
    *((_BYTE *)this + 104) = 1;
  }
  if ( !*((_DWORD *)this + 19) )
    return 0;
  v4 = (_DWORD *)__RTDynamicCast(
                   *((_DWORD *)this + 11),
                   0,
                   (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
                   (int)&CBaseAnimating `RTTI Type Descriptor',
                   0);
  v18 = v4;
  if ( !v4 )
    return 0;
  result = (int)sub_10001430(v4);
  if ( result )
  {
    v5 = *(_DWORD *)result + *(_DWORD *)(*(_DWORD *)result + 176) + 12 * sub_100BAC20((int *)result, "entryboxes");
    if ( v5 && (v6 = *(_DWORD *)(v5 + 4)) != 0 )
    {
      v19 = 0;
      if ( v6 <= 0 )
      {
        return -1;
      }
      else
      {
        v20 = 0;
        while ( 1 )
        {
          v7 = v20 + *(_DWORD *)(v5 + 8);
          v8 = *(_DWORD *)(v7 + v5);
          v9 = v5 + v7;
          sub_100BEB30((int)v18, v8, (int)v17, (int)v16);
          sub_10425040(v16, v17, v14);
          sub_10421BA0(a2, v14, v15);
          if ( sub_10113380(v15, (float *)(v9 + 8), (float *)(v9 + 20)) )
          {
            v10 = *((_DWORD *)this + 19);
            v11 = 0;
            if ( v10 > 0 )
              break;
          }
LABEL_16:
          v20 += 68;
          if ( ++v19 >= *(_DWORD *)(v5 + 4) )
            return -1;
        }
        v12 = *(_DWORD *)(v9 + 4);
        v13 = (_DWORD *)*((_DWORD *)this + 16);
        while ( *v13 != v12 )
        {
          ++v11;
          v13 += 33;
          if ( v11 >= v10 )
            goto LABEL_16;
        }
        return sub_100BDF40((int)v18, (char *)(*((_DWORD *)this + 16) + 132 * v11 + 4));
      }
    }
    else
    {
      return 0;
    }
  }
  return result;
}
