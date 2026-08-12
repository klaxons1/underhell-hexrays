_DWORD *__thiscall sub_1005DB80(int this, _DWORD *a2)
{
  int v3; // eax
  int v4; // eax
  _DWORD *v5; // esi
  _DWORD *result; // eax
  int v7; // ecx
  int v8; // edx
  int v9; // edx
  int v10; // ecx
  int v11; // esi
  bool v12; // zf
  int v13; // edx
  int v14; // ecx

  if ( *(float *)(this + 48) == 3.4028235e38
    && *(float *)(this + 52) == 3.4028235e38
    && *(float *)(this + 56) == 3.4028235e38 )
  {
    if ( *(int *)(dword_106B31C8 + 20) <= 1
      && (v3 = sub_10261B20()) != 0
      && (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 4) + 1080))(*(_DWORD *)(this + 4), v3) == 3 )
    {
      v4 = sub_10261B20();
      v5 = (_DWORD *)v4;
      if ( (*(_DWORD *)(v4 + 252) & 0x800) != 0 )
        sub_100DAE60(v4);
      result = a2;
      v7 = v5[146];
      *a2 = v5[145];
      v8 = v5[147];
      a2[1] = v7;
      a2[2] = v8;
    }
    else
    {
      v11 = sub_1012BC90(0, "ai_battle_line");
      if ( v11 )
      {
        while ( !*(_BYTE *)(v11 + 804) || !sub_1005D160((_DWORD *)v11, *(_DWORD **)(this + 4)) )
        {
          v11 = sub_1012BC90(v11, "ai_battle_line");
          if ( !v11 )
            goto LABEL_15;
        }
        v12 = (*(_DWORD *)(v11 + 252) & 0x800) == 0;
      }
      else
      {
LABEL_15:
        v11 = *(_DWORD *)(this + 4);
        v12 = (*(_DWORD *)(v11 + 252) & 0x800) == 0;
      }
      if ( !v12 )
        sub_100DAE60(v11);
      result = a2;
      v13 = *(_DWORD *)(v11 + 584);
      *a2 = *(_DWORD *)(v11 + 580);
      v14 = *(_DWORD *)(v11 + 588);
      a2[1] = v13;
      a2[2] = v14;
    }
  }
  else
  {
    result = a2;
    v9 = *(_DWORD *)(this + 52);
    *a2 = *(_DWORD *)(this + 48);
    v10 = *(_DWORD *)(this + 56);
    a2[1] = v9;
    a2[2] = v10;
  }
  return result;
}
