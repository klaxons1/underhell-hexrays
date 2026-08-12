char *__thiscall sub_10299F20(int this, int a2, _DWORD *a3, float a4, char a5, char a6, char a7, int a8, int a9)
{
  _DWORD *v10; // ecx
  const char *v11; // eax
  const char *v12; // eax
  _DWORD *v14; // ecx
  const char *v15; // edi
  const char *v16; // eax
  const char *v17; // eax
  int v18; // edx
  unsigned int v19; // eax
  int v20; // ecx
  int v21; // eax
  const char *v22; // [esp+Ch] [ebp-8h]

  if ( *(_BYTE *)(this + 38) && sub_10296D00((int *)this, *(_DWORD *)(this + 56), 2) )
  {
    v10 = *(_DWORD **)(this + 4);
    v11 = (const char *)v10[23];
    if ( !v11 )
      v11 = String;
    v22 = v11;
    v12 = sub_100D6390(v10);
    return (char *)Warning(
                     "ACTBUSY: %s(%s) was told to actbusy while inside an actbusy that needs to exit first. IGNORING.\n",
                     v12,
                     v22);
  }
  else
  {
    if ( *(_DWORD *)(dword_106DB0DC + 48) == 4 )
    {
      v14 = *(_DWORD **)(this + 4);
      v15 = (const char *)v14[23];
      if ( !v15 )
        v15 = String;
      v16 = sub_100D6390(v14);
      Msg("ACTBUSY: ForceActBusy on NPC %s (%s): ", v15, v16);
      if ( a3 )
      {
        v17 = sub_100D6390(a3);
        Msg("Hintnode %s", v17);
      }
      else
      {
        Msg("No Hintnode specified");
      }
      Msg("\n");
    }
    sub_10299D40(this, a2, *(float *)(this + 48), a5);
    *(float *)(this + 32) = a4;
    *(_BYTE *)(this + 24) = a6;
    *(_BYTE *)(this + 17) = 1;
    *(_BYTE *)(this + 25) = a7;
    *(_DWORD *)(this + 20) = a9;
    if ( a8 )
      *(_DWORD *)(this + 68) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a8 + 8))(a8);
    else
      *(_DWORD *)(this + 68) = -1;
    if ( a3 )
    {
      v18 = *(_DWORD *)(this + 4);
      v19 = *(_DWORD *)(v18 + 2888);
      if ( v19 != -1
        && off_1061BE18[4 * (*(_DWORD *)(v18 + 2888) & 0xFFF) + 2] == v19 >> 12
        && off_1061BE18[4 * (*(_DWORD *)(v18 + 2888) & 0xFFF) + 1] )
      {
        v20 = *(_DWORD *)(v18 + 2888) == -1
           || off_1061BE18[4 * (*(_DWORD *)(v18 + 2888) & 0xFFF) + 2] != *(_DWORD *)(v18 + 2888) >> 12
            ? 0
            : off_1061BE18[4 * (*(_DWORD *)(v18 + 2888) & 0xFFF) + 1];
        if ( (_DWORD *)v20 != a3 )
        {
          v21 = sub_100519F0((_DWORD *)this);
          sub_10070510(v21, 0.0);
        }
      }
      if ( sub_10070B10(a3, *(_DWORD *)(this + 4)) )
        sub_100448D0(*(_DWORD **)(this + 4), (int)a3);
    }
    return sub_10023CB0(*(char **)(this + 4), 25);
  }
}
