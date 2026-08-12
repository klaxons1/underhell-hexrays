bool __thiscall sub_10096D90(_DWORD *this, int a2, int a3)
{
  unsigned __int16 v4; // ax
  int v5; // eax
  int v6; // edx
  unsigned int v7; // ecx
  int *v8; // eax
  unsigned int v9; // ecx
  int v10; // eax
  double v11; // st7
  int v13; // eax
  int v14; // [esp+Ch] [ebp-8h] BYREF

  if ( !dword_10693788 )
  {
    sub_101811E0("ai_ally_speech_manager", -1);
    if ( dword_10693788 )
      sub_10260750(dword_10693788);
  }
  v14 = a2;
  v4 = sub_10095220(word_106938B8, (int)&v14);
  if ( v4 == 0xFFFF || (v5 = *(_DWORD *)(dword_106938BC + 16 * v4 + 12)) == 0 )
    v6 = 0;
  else
    v6 = *(_DWORD *)(v5 + 4);
  v7 = this[1102];
  if ( v7 == -1
    || (v8 = &off_1061BE18[4 * (this[1102] & 0xFFF) + 1], v9 = v7 >> 12,
                                                          off_1061BE18[4 * (this[1102] & 0xFFF) + 2] != v9)
    || !*v8
    || v6 )
  {
    v13 = a3;
  }
  else
  {
    if ( off_1061BE18[4 * (this[1102] & 0xFFF) + 2] == v9 )
      v10 = *v8;
    else
      v10 = 0;
    v11 = *(float *)(v10 + 808);
    if ( v11 < 0.001 )
      return 0;
    v13 = (int)floor((double)a3 / v11);
  }
  if ( v13 < 1 )
    return 0;
  return v13 == 1 || (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 1, v13) == 1;
}
