int __thiscall sub_102A4C90(_DWORD *this, char a2)
{
  unsigned int v3; // eax
  int *v4; // ecx
  int v5; // ecx
  int v6; // eax
  _DWORD *v7; // esi
  unsigned int v9; // eax
  int v10; // ecx
  int v11; // eax
  int v12; // ebx
  char *v13; // eax
  int v14; // eax
  int v15; // esi
  float *v16; // eax
  double v17; // st4
  double v18; // st7
  double v19; // st4
  double v20; // st5
  double v21; // st7
  float v22[3]; // [esp+8h] [ebp-24h] BYREF
  float v23[3]; // [esp+14h] [ebp-18h] BYREF
  int v24; // [esp+20h] [ebp-Ch]
  _DWORD *v25; // [esp+24h] [ebp-8h]
  float v26; // [esp+28h] [ebp-4h]
  int savedregs; // [esp+2Ch] [ebp+0h] BYREF

  v3 = this[17];
  if ( v3 == -1 || (v4 = &off_1061BE18[4 * (this[17] & 0xFFF) + 1], v4[1] != v3 >> 12) )
    v5 = 0;
  else
    v5 = *v4;
  v6 = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 340))(v5);
  v7 = (_DWORD *)(*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)v6 + 136))(v6, this[1], 0);
  v25 = v7;
  if ( !v7 )
    return -1;
  v9 = this[17];
  if ( v9 == -1 || off_1061BE18[4 * (this[17] & 0xFFF) + 2] != v9 >> 12 )
    v10 = 0;
  else
    v10 = off_1061BE18[4 * (this[17] & 0xFFF) + 1];
  v11 = (*(int (__thiscall **)(int))(*(_DWORD *)v10 + 340))(v10);
  if ( !(*(unsigned __int8 (__thiscall **)(int, _DWORD, float *, _DWORD))(*(_DWORD *)v11 + 120))(v11, this[1], v22, 0) )
    return -1;
  v12 = 0;
  v26 = 3.4028235e38;
  v24 = -1;
  if ( (int)v7[3] <= 0 )
    return v24;
  while ( 1 )
  {
    v13 = *(char **)(*v7 + 8 * v12);
    if ( !v13 )
      v13 = (char *)String;
    v14 = sub_100BDF40(this[1], v13);
    v15 = v14;
    if ( v14 != -1
      && sub_1029F780(this, v14, v23, 0)
      && !sub_102A4AF0(this, v23)
      && sub_1029F5D0((int)this, (int)&savedregs, (int)this, v15, v23, v22) )
    {
      break;
    }
LABEL_25:
    if ( ++v12 >= v25[3] )
      return v24;
    v7 = v25;
  }
  if ( a2 )
  {
    v16 = (float *)sub_10019640((_DWORD *)this[1]);
    v17 = v23[0] - *v16;
    v18 = v17 * v17;
    v19 = v23[1] - v16[1];
    v20 = v23[2] - v16[2];
    v21 = v20 * v20 + v19 * v19 + v18;
    if ( v26 > v21 )
    {
      v26 = v21;
      v24 = v15;
    }
    goto LABEL_25;
  }
  return v15;
}
