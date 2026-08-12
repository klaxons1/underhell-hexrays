int __thiscall sub_102F6EB0(int this, int a2)
{
  double v3; // st7
  char *v4; // eax
  _DWORD *v6; // eax
  _DWORD *i; // esi
  int v8; // ecx
  int v9; // ecx
  _DWORD *v10; // eax
  char *v11; // eax
  bool v12; // al
  char *v13; // eax
  char *v14; // eax
  _DWORD **v15; // eax
  _DWORD **v16; // esi
  int v17; // eax
  char *v18; // eax
  int v19; // eax
  char *v20; // eax
  unsigned __int8 v22[4]; // [esp+18h] [ebp-4h] BYREF
  int v23; // [esp+24h] [ebp+8h]

  if ( *(_DWORD *)(this + 2324) == 3 )
    v3 = *(float *)(dword_106B31C8 + 12);
  else
    v3 = *(float *)(this + 5736);
  v4 = sub_1025F440("%.3f", v3 - *(float *)(this + 5732));
  sub_10067DE0(a2, "combat_length", v4, 1.0);
  v23 = 0;
  v6 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 1868))(this);
  for ( i = sub_10077AB0(v6, v22); i; i = (_DWORD *)sub_10077340(v10, v22) )
  {
    if ( *i == -1 || off_1061BE18[4 * (*i & 0xFFF) + 2] != *i >> 12 )
      v8 = 0;
    else
      v8 = off_1061BE18[4 * (*i & 0xFFF) + 1];
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v8 + 264))(v8) )
    {
      if ( *i == -1 || off_1061BE18[4 * (*i & 0xFFF) + 2] != *i >> 12 )
        v9 = 0;
      else
        v9 = off_1061BE18[4 * (*i & 0xFFF) + 1];
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)v9 + 220))(v9) != 6 )
        ++v23;
    }
    v10 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 1868))(this);
  }
  v11 = sub_1025F440("%d", v23);
  sub_10067DE0(a2, "num_enemies", v11, 1.0);
  v12 = sub_10023D10((_DWORD *)this, 86);
  v13 = sub_1025F440("%d", v12);
  sub_10067DE0(a2, "darkness_mode", v13, 1.0);
  v14 = sub_1025F440("%d", *(unsigned __int8 *)(this + 447));
  sub_10067DE0(a2, "water_level", v14, 1.0);
  v15 = (_DWORD **)sub_1025FB50(1);
  v16 = v15;
  if ( v15 )
    v17 = sub_102DAC40(v15);
  else
    v17 = 0;
  v18 = sub_1025F440("%d", v17);
  sub_10067DE0(a2, "num_companions", v18, 1.0);
  if ( v16 )
    v19 = ((int (__thiscall *)(_DWORD **))(*v16)[316])(v16);
  else
    v19 = 0;
  v20 = sub_1025F440("%d", v19);
  sub_10067DE0(a2, "flashlight_on", v20, 1.0);
  return sub_103983D0(a2);
}
