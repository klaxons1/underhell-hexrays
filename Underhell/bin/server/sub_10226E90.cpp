char __thiscall sub_10226E90(_DWORD *this, _DWORD *a2, char a3)
{
  int v3; // eax
  int v4; // ebx
  int *v5; // ecx
  int v6; // esi
  char v7; // al
  int v9; // [esp+20h] [ebp-8h]
  _DWORD *v10; // [esp+24h] [ebp-4h]

  v3 = this[203];
  v4 = 0;
  v10 = this;
  v9 = v3;
  if ( v3 > 0 )
  {
    while ( 1 )
    {
      v3 = *(_DWORD *)(this[200] + 4 * v4);
      if ( v3 != -1 )
      {
        v5 = &off_1061BE18[4 * (*(_DWORD *)(this[200] + 4 * v4) & 0xFFF) + 1];
        v3 = (unsigned int)v3 >> 12;
        if ( v5[1] == v3 )
        {
          v6 = *v5;
          if ( *v5 )
          {
            if ( !a3
              || (v3 = __RTDynamicCast(
                         v6,
                         0,
                         (struct _s_RTTICompleteObjectLocator *)&CSceneEntity `RTTI Type Descriptor',
                         (int)&CInstancedSceneEntity `RTTI Type Descriptor',
                         0)) != 0 )
            {
              LOBYTE(v3) = sub_102237E0((_DWORD *)v6, (int)a2);
              if ( (_BYTE)v3 && *(_BYTE *)(v6 + 884) )
              {
                v7 = (unsigned __int8)sub_100D6390(a2);
                sub_1022F660("Resuming actor %s scripted scene: %s\n", v7);
                LOBYTE(v3) = (*(int (__thiscall **)(int, const char *, int, int, _DWORD))(*(_DWORD *)v6 + 148))(
                               v6,
                               "Resume",
                               v6,
                               v6,
                               0);
              }
            }
          }
        }
      }
      if ( ++v4 >= v9 )
        break;
      this = v10;
    }
  }
  return v3;
}
