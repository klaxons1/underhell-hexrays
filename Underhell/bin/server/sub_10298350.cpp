void __thiscall sub_10298350(_DWORD *this, int a2)
{
  const char *v3; // edi
  const char *v4; // eax
  int i; // edi
  int v6; // eax
  int v7; // eax
  unsigned int v8; // eax
  void *v9; // ecx
  int v10; // ebx
  _DWORD *v11; // ecx
  const char *v12; // edi
  const char *v13; // eax
  int v14; // [esp+Ch] [ebp-4h] BYREF
  int v15; // [esp+18h] [ebp+8h]

  if ( *(_DWORD *)(dword_106DB0DC + 48) == 4 )
  {
    v3 = (const char *)this[23];
    if ( !v3 )
      v3 = String;
    v4 = sub_100D6390(this);
    Msg("ACTBUSY: Actbusy goal %s (%s) disabled.\n", v3, v4);
  }
  sub_1006FE10(this, a2);
  for ( i = 0; ; ++i )
  {
    v6 = this[212];
    v15 = i;
    if ( (v6 & 1) != 0 && (v6 & 2) != 0 )
    {
      sub_1006DCB0(this);
    }
    else
    {
      sub_1006F910(this);
      this[212] |= 2u;
    }
    if ( i >= this[209] )
      break;
    v7 = this[212];
    if ( (v7 & 1) != 0 && (v7 & 2) != 0 )
    {
      sub_1006DCB0(this);
    }
    else
    {
      sub_1006F910(this);
      this[212] |= 2u;
    }
    if ( this[209] > i )
    {
      v8 = *(_DWORD *)(this[206] + 4 * i);
      if ( v8 != -1 && off_1061BE18[4 * (v8 & 0xFFF) + 2] == v8 >> 12 )
      {
        v9 = (void *)off_1061BE18[4 * (*(_DWORD *)(this[206] + 4 * i) & 0xFFF) + 1];
        if ( v9 )
        {
          if ( !sub_10295660(v9, &v14) )
          {
            DevMsg("ActBusy goal entity deactivated for an NPC that doesn't have the ActBusy behavior\n");
            return;
          }
          v10 = v14;
          if ( *(_DWORD *)(dword_106DB0DC + 48) == 4 )
          {
            v11 = *(_DWORD **)(v14 + 4);
            v12 = (const char *)v11[23];
            if ( !v12 )
              v12 = String;
            v13 = sub_100D6390(v11);
            Msg("ACTBUSY: behavior disabled on NPC %s (%s)\n", v12, v13);
            i = v15;
          }
          if ( *(_BYTE *)(v10 + 16) )
            sub_10023CB0(*(char **)(v10 + 4), 25);
          sub_10295E70(v10);
          *(_BYTE *)(v10 + 16) = 0;
        }
      }
    }
  }
}
