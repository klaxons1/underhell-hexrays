int __thiscall sub_10016170(_DWORD *this, int a2)
{
  int v3; // esi
  int v4; // eax
  int v5; // eax
  _DWORD *v6; // edi
  int *v7; // ecx
  _DWORD *v8; // esi
  int v9; // esi
  int v10; // eax
  int v11; // eax
  float v13[3]; // [esp+Ch] [ebp-24h] BYREF
  float v14[3]; // [esp+18h] [ebp-18h] BYREF
  int v15; // [esp+24h] [ebp-Ch]
  int v16; // [esp+2Ch] [ebp-4h]

  sub_10034610(this - 2);
  v3 = *(_DWORD *)dword_10413178;
  v4 = sub_10034480(this - 2);
  v5 = (*(int (__thiscall **)(int, int))(v3 + 4))(dword_10413178, v4);
  sub_10039390(v5);
  v6 = this + 305;
  v15 = -1220 - (_DWORD)this;
  v16 = 10;
  do
  {
    if ( *v6 != -1 )
    {
      v7 = (int *)((char *)off_103DCD74 + 16 * (*v6 & 0xFFF) + 4);
      if ( *((_DWORD *)off_103DCD74 + 4 * (*v6 & 0xFFF) + 2) == *v6 >> 12 )
      {
        if ( *v7 )
        {
          v8 = (_DWORD *)__RTDynamicCast(
                           *v7,
                           0,
                           (struct _s_RTTICompleteObjectLocator *)&C_BaseEntity `RTTI Type Descriptor',
                           (int)&C_BaseCombatWeapon `RTTI Type Descriptor',
                           0);
          if ( v8 )
          {
            if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*v8 + 1268))(v8) )
            {
              v9 = sub_1000BAC0(v8);
              if ( v9 )
              {
                if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v9 + 504))(v9) )
                {
                  v10 = sub_10045780(0);
                  if ( v10 )
                  {
                    v11 = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v10 + 8))(v10);
                    if ( *(_DWORD *)((char *)this + (_DWORD)v6 + v15 + 1220) != v11 )
                      *(_DWORD *)((char *)this + (_DWORD)v6 + v15 + 1220) = v11;
                  }
                }
              }
            }
          }
        }
      }
    }
    ++v6;
    --v16;
  }
  while ( v16 );
  sub_10015D90(this - 2, v13, v14);
  return sub_1008FC00(v13, v14);
}
