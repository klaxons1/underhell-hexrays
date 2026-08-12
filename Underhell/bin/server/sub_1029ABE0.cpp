char *__thiscall sub_1029ABE0(float *this, int a2)
{
  int v3; // eax
  char *result; // eax
  int v5; // esi
  bool v6; // zf
  _DWORD *v7; // ecx
  const char *v8; // eax
  const char *v9; // eax
  _DWORD *v10; // ecx
  const char *v11; // edi
  const char *v12; // eax
  const char *v13; // [esp+4h] [ebp-Ch]

  if ( *(_DWORD *)(a2 + 24) != 13 )
  {
    if ( (dword_10697954 & 1) == 0 )
      dword_10697954 |= 1u;
    dword_10697950 = -1;
    goto LABEL_5;
  }
  if ( *(_DWORD *)(a2 + 20) == -1 || off_1061BE18[4 * (*(_DWORD *)(a2 + 20) & 0xFFF) + 2] != *(_DWORD *)(a2 + 20) >> 12 )
  {
LABEL_5:
    v3 = 0;
    goto LABEL_6;
  }
  v3 = off_1061BE18[4 * (*(_DWORD *)(a2 + 20) & 0xFFF) + 1];
LABEL_6:
  result = (char *)sub_10295D50(v3, "InputForceThisNPCToActBusy");
  v5 = (int)result;
  if ( result )
  {
    v6 = result[38] == 0;
    *((float *)result + 12) = this[213];
    if ( v6 || !sub_10296D00((int *)result, *((_DWORD *)result + 14), 2) )
    {
      if ( *(_DWORD *)(dword_106DB0DC + 48) == 4 )
      {
        v10 = *(_DWORD **)(v5 + 4);
        v11 = (const char *)v10[23];
        if ( !v11 )
          v11 = String;
        v12 = sub_100D6390(v10);
        Msg("ACTBUSY: ForceActBusy on NPC %s (%s): ", v11, v12);
        Msg("No Hintnode specified");
        Msg("\n");
      }
      sub_10299D40(v5, (int)this, *(float *)(v5 + 48), 0);
      *(float *)(v5 + 32) = -1.0;
      *(_BYTE *)(v5 + 17) = 1;
      *(_WORD *)(v5 + 24) = 0;
      *(_DWORD *)(v5 + 20) = -1;
      *(_DWORD *)(v5 + 68) = -1;
      return sub_10023CB0(*(char **)(v5 + 4), 25);
    }
    else
    {
      v7 = *(_DWORD **)(v5 + 4);
      v8 = (const char *)v7[23];
      if ( !v8 )
        v8 = String;
      v13 = v8;
      v9 = sub_100D6390(v7);
      return (char *)Warning(
                       "ACTBUSY: %s(%s) was told to actbusy while inside an actbusy that needs to exit first. IGNORING.\n",
                       v9,
                       v13);
    }
  }
  return result;
}
