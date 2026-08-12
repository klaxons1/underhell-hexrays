char __userpurge sub_103E4590@<al>(int a1@<ecx>, int a2@<edi>, __int16 a3, __int16 a4)
{
  double v5; // st7
  double v6; // st7
  double v7; // st7
  double v8; // st7
  double v9; // st6
  double v10; // st5
  long double v11; // st7
  double v12; // st6
  bool v13; // zf
  int v14; // edx
  void (__thiscall *v15)(int, float *); // edx
  char result; // al
  float v17; // [esp+0h] [ebp-3Ch]
  float v18; // [esp+0h] [ebp-3Ch]
  float v19; // [esp+4h] [ebp-38h]
  float v20; // [esp+8h] [ebp-34h]
  float v21; // [esp+8h] [ebp-34h]
  float v22; // [esp+8h] [ebp-34h]
  float v23; // [esp+8h] [ebp-34h]
  float v24; // [esp+8h] [ebp-34h]
  float v25[3]; // [esp+18h] [ebp-24h] BYREF
  bool v26; // [esp+24h] [ebp-18h]
  int v27; // [esp+25h] [ebp-17h]
  float v28[3]; // [esp+2Ch] [ebp-10h] BYREF
  char v29; // [esp+3Bh] [ebp-1h]
  int savedregs; // [esp+3Ch] [ebp+0h] BYREF

  v29 = *(_BYTE *)(a1 + 1204);
  if ( (a3 & 0x200) != 0 )
  {
    v5 = *(float *)(a1 + 1232);
    if ( *(float *)(a1 + 1200) < 0.0 && v5 <= *(float *)(a1 + 1236) )
      v5 = *(float *)(a1 + 1236);
    v20 = v5 * *(float *)(dword_106B31C8 + 16);
    v6 = *(float *)(a1 + 1220);
    sub_10424B10(*(float *)(a1 + 1220), *(float *)(a1 + 1200), v20);
    *(_DWORD *)(a1 + 1196) = 1;
  }
  else if ( (a3 & 0x400) != 0 )
  {
    v7 = *(float *)(a1 + 1232);
    if ( *(float *)(a1 + 1200) > 0.0 && v7 <= *(float *)(a1 + 1236) )
      v7 = *(float *)(a1 + 1236);
    v21 = v7 * *(float *)(dword_106B31C8 + 16);
    v6 = -*(float *)(a1 + 1220);
    v17 = v6;
    sub_10424B10(v17, *(float *)(a1 + 1200), v21);
    *(_DWORD *)(a1 + 1196) = 2;
  }
  else
  {
    v22 = *(float *)(a1 + 1236) * *(float *)(dword_106B31C8 + 16);
    v6 = 0.0;
    sub_10424B10(0.0, *(float *)(a1 + 1200), v22);
    *(_DWORD *)(a1 + 1196) = 0;
  }
  *(float *)(a1 + 1200) = v6;
  v28[0] = 0.0;
  v28[1] = *(float *)(a1 + 1200) * 10.0;
  v28[2] = 0.0;
  sub_100D7260((float *)a1, v28);
  if ( (a3 & 8) != 0 )
  {
    v8 = *(float *)(a1 + 1216);
    v9 = *(float *)(a1 + 1212);
    v10 = *(float *)(a1 + 1224) * *(float *)(dword_106B31C8 + 16);
  }
  else
  {
    if ( (a3 & 0x10) == 0 )
    {
      v24 = *(float *)(a1 + 1228) * *(float *)(dword_106B31C8 + 16);
      v8 = 0.0;
      sub_10424B10(0.0, *(float *)(a1 + 1212), v24);
      *(_BYTE *)(a1 + 1204) = 0;
      goto LABEL_18;
    }
    v8 = -*(float *)(a1 + 1216);
    v9 = *(float *)(a1 + 1212);
    v10 = *(float *)(a1 + 1224) * *(float *)(dword_106B31C8 + 16);
  }
  v23 = v10;
  v19 = v9;
  v18 = v8;
  sub_10424B10(v18, v19, v23);
  *(_BYTE *)(a1 + 1204) = 1;
LABEL_18:
  *(float *)(a1 + 1212) = v8;
  if ( (a4 & 0x801) != 0 && *(float *)(dword_106B31C8 + 12) >= (double)*(float *)(a1 + 1256) )
    sub_103E3DC0(a1, (int)&savedregs, a2, a1);
  v11 = fabs(*(float *)(a1 + 1200)) / *(float *)(a1 + 1220);
  if ( v11 <= 1.0 )
  {
    v12 = 0.0;
    if ( v11 < 0.0 )
      v11 = 0.0;
  }
  else
  {
    v11 = 1.0;
    v12 = 0.0;
  }
  v13 = *(_DWORD *)(a1 + 1196) == 0;
  v14 = *(_DWORD *)(a1 + 1260);
  v25[0] = *(float *)(dword_106B31C8 + 16);
  v15 = *(void (__thiscall **)(int, float *))(v14 + 268);
  v25[1] = v11;
  v26 = !v13;
  v25[2] = v12;
  v27 = 0;
  v15(a1 + 1260, v25);
  result = *(_BYTE *)(a1 + 1204);
  if ( result )
  {
    if ( !v29 )
    {
      (*(void (__thiscall **)(int, int))(*(_DWORD *)(a1 + 1260) + 276))(a1 + 1260, 4);
      return (*(int (__thiscall **)(int, int))(*(_DWORD *)(a1 + 1260) + 272))(a1 + 1260, 3);
    }
  }
  else if ( v29 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)(a1 + 1260) + 276))(a1 + 1260, 3);
    return (*(int (__thiscall **)(int, int))(*(_DWORD *)(a1 + 1260) + 272))(a1 + 1260, 4);
  }
  return result;
}
