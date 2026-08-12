unsigned int __thiscall sub_102ED380(unsigned int *this, _DWORD *a2)
{
  unsigned int result; // eax
  int *v4; // ecx
  int v5; // edx
  _DWORD *v6; // ecx
  int v7; // ebx
  _DWORD *v8; // esi
  _DWORD *v9; // eax
  float *v10; // eax
  int v11; // eax
  unsigned int v12; // eax
  int v13; // ecx

  if ( *a2 != 24 )
    return sub_100C3960(this, (int)a2);
  result = this[289];
  if ( result != -1 )
  {
    v4 = &off_1061BE18[4 * (this[289] & 0xFFF) + 1];
    result >>= 12;
    if ( off_1061BE18[4 * (this[289] & 0xFFF) + 2] == result )
    {
      if ( *v4 )
      {
        v5 = dword_106685F4[this[280]];
        if ( v5 )
        {
          v6 = off_1061BE18[4 * (this[289] & 0xFFF) + 2] == result ? (_DWORD *)*v4 : 0;
          if ( !sub_100CF660(v6, v5, 0) )
          {
            v7 = sub_101811E0((const char *)dword_106685F4[this[280]], -1);
            v8 = (_DWORD *)__RTDynamicCast(
                             v7,
                             0,
                             (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
                             (int)&CBaseCombatWeapon `RTTI Type Descriptor',
                             0);
            if ( v8 )
            {
              v9 = (_DWORD *)sub_1026A890(this + 289);
              v10 = (float *)sub_10019640(v9);
              sub_100E0D20((int)v8, v10);
              a2 = 0;
              sub_100D2BC0(v8 + 298, &a2);
              a2 = 0;
              sub_100D2B70(v8 + 299, &a2);
              (*(void (__thiscall **)(_DWORD *))(*v8 + 96))(v8);
              v11 = sub_1026A890(this + 289);
              if ( (*(unsigned __int8 (__thiscall **)(int, _DWORD *))(*(_DWORD *)v11 + 1424))(v11, v8) )
                sub_100C1600((int)this, 1, 0);
              else
                sub_1025FAC0(v7);
            }
          }
        }
        v12 = this[289];
        if ( v12 == -1 || off_1061BE18[4 * (this[289] & 0xFFF) + 2] != v12 >> 12 )
          v13 = 0;
        else
          v13 = off_1061BE18[4 * (this[289] & 0xFFF) + 1];
        result = (*(int (__thiscall **)(int, int, unsigned int, _DWORD, const char *))(*(_DWORD *)v13 + 928))(
                   v13,
                   dword_106685CC[this[280]],
                   this[281],
                   0,
                   "BaseCombatCharacter.AmmoPickup");
        if ( result )
          result = sub_100C1600((int)this, 1, 0);
        this[289] = -1;
      }
    }
  }
  return result;
}
