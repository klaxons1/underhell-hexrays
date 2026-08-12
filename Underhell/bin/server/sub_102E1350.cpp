void __thiscall sub_102E1350(int this)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  float *v5; // edi
  int v6; // eax
  double v7; // st7
  unsigned int v8; // eax
  _BYTE *v9; // edi
  float *v10; // eax
  char v11; // bl
  bool v12; // zf
  int v13; // ebx
  _DWORD v14[3]; // [esp-Ch] [ebp-38h] BYREF
  const char *v15; // [esp+0h] [ebp-2Ch]
  float v16; // [esp+4h] [ebp-28h]
  int v17; // [esp+8h] [ebp-24h]
  int v18; // [esp+18h] [ebp-14h] BYREF
  _BYTE v19[4]; // [esp+20h] [ebp-Ch] BYREF
  int v20; // [esp+24h] [ebp-8h]
  int v21; // [esp+28h] [ebp-4h]

  v2 = *(_DWORD *)(this + 3296);
  if ( ((*(_BYTE *)(this + 3300) | (unsigned __int8)(v2 | *(_BYTE *)(this + 3292))) & 0x20) != 0 )
  {
    if ( (v2 & 0x20) == 0 )
      goto LABEL_13;
    if ( !sub_101E99A0((_DWORD *)this) )
    {
      v3 = *(_DWORD *)(this + 3416);
      if ( (v3 & 1) != 0 )
      {
        *(_DWORD *)(this + 3416) = v3 & 0xFFFFFFFE;
        *(_DWORD *)(this + 3408) = 192;
        return;
      }
      v4 = sub_101C5260((_DWORD *)this);
      v5 = (float *)v4;
      if ( v4
        && (*(_BYTE *)(this + 3292) & 2) == 0
        && (*(_BYTE *)(this + 256) & 1) != 0
        && (*(char (__thiscall **)(int))(*(_DWORD *)v4 + 144))(v4) < 0
        && (*(unsigned __int8 (__thiscall **)(float *, int))(*(_DWORD *)v5 + 312))(v5, this) )
      {
        *(_DWORD *)(this + 3416) |= 1u;
        v6 = sub_101E1CF0((int)v5[27], (int)v5[217]);
        *(float *)&v17 = 0.0;
        v16 = 0.0;
        v15 = "HL2Player.TrainUse";
        *(_DWORD *)(this + 3408) = v6 | 0xC0;
        sub_1023C380((_DWORD *)this, (int)v15, v16, v17);
        return;
      }
      if ( *(_BYTE *)(this + 306) != 9 )
      {
LABEL_13:
        v7 = *(float *)(dword_106B31C8 + 12);
        if ( v7 >= *(float *)(this + 5644) )
        {
          v8 = *(_DWORD *)(this + 5220);
          if ( v8 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 5220) & 0xFFF) + 2] != v8 >> 12 )
            v9 = 0;
          else
            v9 = (_BYTE *)off_1061BE18[4 * (*(_DWORD *)(this + 5220) & 0xFFF) + 1];
          if ( !v9 )
            goto LABEL_51;
          if ( (*((_DWORD *)v9 + 63) & 0x800) != 0 )
            sub_100DAE60((int)v9);
          v10 = (float *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)this + 504))(this, v19);
          sub_1004BCD0(v10, (float *)v9 + 145);
          if ( v7 > 96.0 )
          {
LABEL_51:
            v9 = (_BYTE *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 1464))(this);
            if ( __RTDynamicCast(
                   (int)v9,
                   0,
                   (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
                   (int)&CBaseCombatWeapon `RTTI Type Descriptor',
                   0) )
            {
              goto LABEL_47;
            }
          }
          if ( v9 )
          {
            v11 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v9 + 144))(v9);
            v12 = (*(_BYTE *)(this + 3296) & 0x20) == 0;
            v18 = 0;
            v20 = -1;
            v21 = 0;
            if ( !v12 && !sub_100D7680((int)v9) )
              sub_1023C380((_DWORD *)this, (int)"HL2Player.Use", 0.0, 0);
            if ( ((*(_BYTE *)(this + 3292) & 0x20) != 0 && (v11 & 0x20) != 0
               || (*(_BYTE *)(this + 3296) & 0x20) != 0 && (v11 & 0x50) != 0)
              && !*(_BYTE *)(this + 2137) )
            {
              if ( (v11 & 0x20) != 0 )
                *(_DWORD *)(this + 3416) |= 4u;
              if ( sub_101CB470((int)v9) && (_BYTE *)sub_101C5260((_DWORD *)this) != v9 && !sub_101C5290(v9) )
              {
                sub_103FD4C0(this, v9);
                if ( (*((_DWORD *)v9 + 64) & 0x10000000) == 0
                  && (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)v9 + 628))(v9)
                  && *(_BYTE *)(this + 306) != 9 )
                {
                  sub_102DFC70((unsigned int *)this, (int)v9);
                  *(float *)(this + 5372) = *(float *)(dword_106E0614 + 44);
                  if ( *((int *)v9 + 283) > 10 )
                  {
                    *(float *)&v17 = *(float *)(dword_106E0734 + 44) * 0.33333334;
                    sub_100EA7B0(this, *(float *)&v17);
                    *(float *)&v17 = *(float *)(this + 5372) / *(float *)(dword_106E0584 + 44);
                    sub_1042C7F0(*(float *)&v17);
                  }
                }
              }
              goto LABEL_42;
            }
            if ( (*(_BYTE *)(this + 3300) & 0x20) != 0
              && ((*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v9 + 144))(v9) & 0x40) != 0 )
            {
LABEL_42:
              v13 = *(_DWORD *)v9;
              v17 = 3;
              sub_10023360(v14, (int)&v18);
              (*(void (__thiscall **)(_BYTE *, const char *, int, int, _DWORD, _DWORD, _DWORD, const char *, float, int))(v13 + 148))(
                v9,
                "Use",
                this,
                this,
                v14[0],
                v14[1],
                v14[2],
                v15,
                COERCE_FLOAT(LODWORD(v16)),
                v17);
              *(_DWORD *)(this + 2296) |= 0x20u;
              *(_DWORD *)(this + 3296) &= ~0x20u;
            }
          }
          else
          {
LABEL_47:
            if ( (*(_BYTE *)(this + 3296) & 0x20) != 0 )
              *(_BYTE *)(this + 5218) = 1;
          }
        }
      }
    }
  }
}
