void __thiscall sub_1006D140(float *this)
{
  float *v1; // esi
  int v2; // ebx
  int v3; // ecx
  int v4; // edi
  int v5; // eax
  char v6; // dl
  int v7; // eax
  float *v8; // eax
  int v9; // ebx
  int v10; // esi
  float *v11; // eax
  double v12; // st4
  double v13; // st7
  double v14; // st4
  double v15; // st5
  double v16; // st7
  int v17; // eax
  const char *v18; // eax
  double v19; // [esp+20h] [ebp-38h]
  float v20; // [esp+34h] [ebp-24h]
  float v21; // [esp+38h] [ebp-20h]
  float v22; // [esp+3Ch] [ebp-1Ch]
  int v23; // [esp+40h] [ebp-18h]
  int v25; // [esp+48h] [ebp-10h]
  float v26; // [esp+4Ch] [ebp-Ch]
  float v27; // [esp+4Ch] [ebp-Ch]
  int v28; // [esp+50h] [ebp-8h]
  const char *v29; // [esp+54h] [ebp-4h]

  v1 = this;
  if ( !*((_DWORD *)this + 9) )
    return;
  if ( *(_DWORD *)(dword_106B31C8 + 20) != 1 )
    return;
  if ( !sub_10261B20() )
    return;
  if ( *(float *)(dword_106B31C8 + 12) < (double)v1[3] )
    return;
  v1[3] = *(float *)(dword_106B31C8 + 12) + 0.2;
  v2 = sub_1006BE10((_DWORD *)v1 + 4);
  v28 = v2;
  if ( v2 == -1 )
    return;
  while ( 1 )
  {
    v3 = *((_DWORD *)v1 + 5);
    v4 = 32 * v2;
    v26 = *(float *)(32 * v2 + v3 + 20);
    v29 = *(const char **)(32 * v2 + v3 + 16);
    v23 = sub_1006BEA0((_DWORD *)v1 + 4, v2);
    v5 = *((_DWORD *)v1 + 5);
    v6 = *(_BYTE *)(32 * v2 + v5 + 30);
    if ( !v6 && v26 + 4.0 < *(float *)(dword_106B31C8 + 12) )
    {
      if ( *(_DWORD *)(dword_10692F44 + 48) )
        Msg("NPCEVENTRESPONSE: (%.2f) Removing expired event named: %s\n", *(float *)(dword_106B31C8 + 12), v29);
LABEL_17:
      sub_1006D000((_DWORD *)v1 + 4, v2);
      goto LABEL_26;
    }
    if ( *(float *)(dword_106B31C8 + 12) <= (double)*(float *)(32 * v2 + v5 + 24) )
      goto LABEL_26;
    if ( v6 && v26 + 4.0 < *(float *)(dword_106B31C8 + 12) )
    {
      if ( *(_DWORD *)(dword_10692F44 + 48) )
        Msg("NPCEVENTRESPONSE: (%.2f) Removing expired fired event named: %s\n", *(float *)(dword_106B31C8 + 12), v29);
      goto LABEL_17;
    }
    v25 = 0;
    v27 = 589824.0;
    v7 = sub_10261B20();
    v8 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v7 + 576))(v7);
    v20 = *v8;
    v21 = v8[1];
    v22 = v8[2];
    v9 = sub_1002A680(&dword_10690DF8);
    v10 = 0;
    if ( sub_1016BFB0(&dword_10690DF8) > 0 )
    {
      do
      {
        if ( (*(unsigned __int8 (__thiscall **)(_DWORD, const char *))(**(_DWORD **)(v9 + 4 * v10) + 1660))(
               *(_DWORD *)(v9 + 4 * v10),
               v29) )
        {
          v11 = (float *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v9 + 4 * v10) + 576))(*(_DWORD *)(v9 + 4 * v10));
          v12 = v20 - *v11;
          v13 = v12 * v12;
          v14 = v21 - v11[1];
          v15 = v22 - v11[2];
          v16 = v15 * v15 + v14 * v14 + v13;
          if ( v27 > v16 )
          {
            v27 = v16;
            v25 = *(_DWORD *)(v9 + 4 * v10);
          }
        }
        ++v10;
      }
      while ( v10 < sub_1016BFB0(&dword_10690DF8) );
      if ( v25
        && (*(unsigned __int8 (__thiscall **)(int, const char *, _DWORD, _DWORD))(*(_DWORD *)v25 + 1664))(
             v25,
             v29,
             *(unsigned __int8 *)(v4 + *((_DWORD *)this + 5) + 28),
             *(unsigned __int8 *)(v4 + *((_DWORD *)this + 5) + 29)) )
      {
        break;
      }
    }
    v1 = this;
LABEL_26:
    v28 = v23;
    if ( v23 == -1 )
      return;
    v2 = v23;
  }
  v17 = 32 * v28;
  *(_BYTE *)(v17 + *((_DWORD *)this + 5) + 30) = 1;
  *(float *)(v17 + *((_DWORD *)this + 5) + 24) = *(float *)(dword_106B31C8 + 12) + 15.0;
  if ( *(_DWORD *)(dword_10692F44 + 48) )
  {
    v19 = *(float *)(v17 + *((_DWORD *)this + 5) + 24);
    v18 = (const char *)sub_100D6390(v25);
    Msg(
      "NPCEVENTRESPONSE: (%.2f) Event '%s' responded to by NPC '%s'. Refire available at: %.2f\n",
      *(float *)(dword_106B31C8 + 12),
      v29,
      v18,
      v19);
  }
}
