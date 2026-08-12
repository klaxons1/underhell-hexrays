int __thiscall sub_1011E490(_DWORD *this, int a2)
{
  _DWORD *v2; // ebx
  int result; // eax
  int v4; // ecx
  int v5; // edi
  int v6; // esi
  int v7; // eax
  _DWORD *v8; // edi
  bool v9; // zf
  int v10; // eax
  int v11; // esi
  int v12; // esi
  int v13; // eax
  int v14; // edi
  int v15; // ecx
  _DWORD *v16; // ecx
  int v17; // esi
  int v18; // edx
  int v19; // eax
  int v20; // edi
  int v21; // edx
  int v22; // esi
  int v23; // [esp+4h] [ebp-20h]
  int v25; // [esp+Ch] [ebp-18h]
  int v26; // [esp+Ch] [ebp-18h]
  int v27; // [esp+10h] [ebp-14h]
  int v28; // [esp+10h] [ebp-14h]
  int v29; // [esp+14h] [ebp-10h]
  int v30; // [esp+18h] [ebp-Ch]
  int v31; // [esp+1Ch] [ebp-8h]
  int v32; // [esp+20h] [ebp-4h]
  int v33; // [esp+2Ch] [ebp+8h]
  char v34; // [esp+2Fh] [ebp+Bh]

  v2 = this;
  result = sub_10143030(a2);
  if ( !*((_BYTE *)v2 + 156)
    || !*((_BYTE *)v2 + 158)
    || !*((_BYTE *)v2 + 160)
    || !*((_BYTE *)v2 + 157)
    || !*((_BYTE *)v2 + 159) )
  {
    v4 = 0;
    v5 = 0;
    v6 = 688136;
    v32 = 0;
    v29 = 0;
    v31 = 688136;
    v30 = 0;
    while ( 1 )
    {
      if ( !v4 || v4 == 2 || v4 == 4 || (v34 = 0, v4 == 6) )
        v34 = 1;
      v7 = v2[36];
      v27 = 0;
      if ( *(int *)(v6 + v7) > 0 )
        break;
LABEL_31:
      v13 = v2[36];
      v14 = 0;
      v23 = -1;
      v26 = 0;
      if ( *(int *)(v6 + v13) > 0 )
      {
        v15 = v30;
        v28 = v30;
        v33 = v29 + 12;
        do
        {
          v16 = (_DWORD *)(v15 + v13 + 8);
          if ( !v16 || !*v16 || !*((_WORD *)v16 + 4) )
          {
            v17 = *(_DWORD *)(v6 + v13);
            v18 = v14 + 1;
            if ( v14 + 1 < v17 )
            {
              v19 = v33 + v13 + 8;
              while ( !v19 || !*(_DWORD *)v19 || !*(_WORD *)(v19 + 8) )
              {
                ++v18;
                v19 += 12;
                if ( v18 >= v17 )
                  goto LABEL_44;
              }
              v20 = v16[2];
              v21 = *v16;
              v22 = v16[1];
              *v16 = *(_DWORD *)v19;
              v16[1] = *(_DWORD *)(v19 + 4);
              v16[2] = *(_DWORD *)(v19 + 8);
              *(_DWORD *)v19 = v21;
              *(_DWORD *)(v19 + 4) = v22;
              *(_DWORD *)(v19 + 8) = v20;
              v14 = v26;
LABEL_44:
              v2 = this;
            }
          }
          if ( v16 && *v16 )
          {
            if ( *((_WORD *)v16 + 4) )
              v23 = v14;
          }
          v13 = v2[36];
          v6 = v31;
          v33 += 12;
          ++v14;
          v15 = v28 + 12;
          v26 = v14;
          v28 += 12;
        }
        while ( v14 < *(_DWORD *)(v31 + v13) );
        v4 = v32;
      }
      v30 += 49152;
      result = v23 + 1;
      *(_DWORD *)(v6 + v2[36]) = v23 + 1;
      v6 += 4;
      ++v4;
      v5 = v29 + 49152;
      v32 = v4;
      v31 = v6;
      v29 += 49152;
      if ( v6 >= 688192 )
        return result;
    }
    v25 = v5;
    while ( 1 )
    {
      v8 = (_DWORD *)(v5 + v7 + 8);
      if ( v8 && *v8 )
      {
        if ( v34 )
        {
          v9 = *((_BYTE *)v2 + 158) == 0;
          goto LABEL_27;
        }
        v10 = (**(int (__thiscall ***)(_DWORD))*v8)(*v8);
        v11 = v10;
        if ( v10 && (*(int (__thiscall **)(int))(*(_DWORD *)v10 + 28))(v10) )
        {
          v12 = (*(int (__thiscall **)(int))(*(_DWORD *)v11 + 28))(v11);
          if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v12 + 504))(v12) )
          {
            v9 = *((_BYTE *)v2 + 156) == 0;
          }
          else if ( __RTDynamicCast(
                      v12,
                      0,
                      (struct _s_RTTICompleteObjectLocator *)&C_BaseEntity `RTTI Type Descriptor',
                      (int)&C_BaseCombatWeapon `RTTI Type Descriptor',
                      0) )
          {
            v9 = *((_BYTE *)v2 + 157) == 0;
          }
          else if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)*v8 + 16))(*v8) )
          {
            v9 = *((_BYTE *)v2 + 160) == 0;
          }
          else
          {
            v9 = *((_BYTE *)v2 + 159) == 0;
          }
LABEL_27:
          if ( v9 )
          {
            *v8 = 0;
            *((_WORD *)v8 + 4) = 0;
          }
        }
      }
      v7 = v2[36];
      v6 = v31;
      v5 = v25 + 12;
      ++v27;
      v25 += 12;
      if ( v27 >= *(_DWORD *)(v31 + v7) )
      {
        v4 = v32;
        goto LABEL_31;
      }
    }
  }
  return result;
}
