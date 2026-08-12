void __thiscall sub_10325540(int this, float a2)
{
  double v3; // st7
  int v4; // edi
  unsigned int v5; // ecx
  int *v6; // eax
  unsigned int v7; // ecx
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // edx
  float v12; // [esp+4h] [ebp-18h]
  _DWORD v13[3]; // [esp+10h] [ebp-Ch] BYREF
  float v14; // [esp+24h] [ebp+8h]

  v3 = a2 - 5.0;
  v4 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this);
  v14 = v3;
  if ( !*(_BYTE *)(this + 3692) && v3 + 100.0 > *(float *)(this + 3668) )
  {
    sub_1023C380((_DWORD *)this, (int)"NPC_Barnacle.Scream", 0.0, 0);
    v3 = v14;
    *(_BYTE *)(this + 3692) = 1;
  }
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
  {
    sub_100DAE60(this);
    v3 = v14;
  }
  if ( *(float *)(this + 588) - *(float *)(this + 3716) >= v3 )
  {
    *(_DWORD *)(v4 + 252) |= 0x100000u;
    sub_10325150(this, 0);
  }
  else
  {
    v5 = *(_DWORD *)(this + 3736);
    if ( v5 != -1 )
    {
      v6 = &off_1061BE18[4 * (*(_DWORD *)(this + 3736) & 0xFFF) + 1];
      v7 = v5 >> 12;
      if ( off_1061BE18[4 * (*(_DWORD *)(this + 3736) & 0xFFF) + 2] == v7 )
      {
        if ( *v6 )
        {
          if ( off_1061BE18[4 * (*(_DWORD *)(this + 3736) & 0xFFF) + 2] == v7 )
            v8 = *v6;
          else
            v8 = 0;
          (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(v8 + 1120) + 8))(10000.0);
          v3 = v14;
        }
      }
    }
    --*(_DWORD *)(this + 9904);
    if ( (*(_BYTE *)(this + 9904) & 1) != 0 )
      v3 = v3 + 15.0;
    v12 = v3;
    sub_10322D80(this, v12);
    if ( *(int *)(this + 9904) <= 0 )
    {
      *(_DWORD *)(v4 + 252) &= ~0x100000u;
      *(_BYTE *)(this + 3676) = 0;
      if ( *(_DWORD *)(dword_10698344 + 48)
        && (v9 = __RTDynamicCast(
                   v4,
                   0,
                   (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
                   (int)&CBounceBomb `RTTI Type Descriptor',
                   0)) != 0 )
      {
        if ( *(_BYTE *)(this + 9956) == 1 )
        {
          sub_102B8270(v9);
          return;
        }
        (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 1416))(this, dword_106E5088);
      }
      else
      {
        (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 1416))(this, dword_106E508C);
      }
      v10 = __RTDynamicCast(
              v4,
              0,
              (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
              (int)&CBaseCombatCharacter `RTTI Type Descriptor',
              0);
      if ( v10 )
      {
        v11 = *(_DWORD *)(this + 3712);
        v13[0] = *(_DWORD *)(this + 3708);
        v13[2] = *(_DWORD *)(this + 3716);
        v13[1] = v11;
        if ( dword_106E50B4 > 0 )
          (*(void (__thiscall **)(int, int, _DWORD *, int))(*(_DWORD *)v10 + 896))(v10, dword_106E50B4, v13, this);
      }
    }
  }
}
