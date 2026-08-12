float *__thiscall sub_10028290(char *this, float *a2, float *a3, int a4)
{
  int v5; // esi
  float *v6; // eax
  float v7; // ecx
  float v8; // edx
  float v9; // eax
  int v10; // ecx
  float *v11; // eax
  double v12; // st6
  double v13; // st7
  float *result; // eax
  float v15; // edx
  float v16; // ecx
  float v17; // edx
  float v18; // ecx
  int v19; // [esp-4h] [ebp-30h]
  char v20[12]; // [esp+8h] [ebp-24h] BYREF
  float v21; // [esp+14h] [ebp-18h] BYREF
  float v22; // [esp+18h] [ebp-14h]
  float v23; // [esp+1Ch] [ebp-10h]
  float v24; // [esp+20h] [ebp-Ch]
  float v25; // [esp+24h] [ebp-8h]
  float v26; // [esp+28h] [ebp-4h]

  v5 = (*(int (__thiscall **)(char *))(*(_DWORD *)this + 368))(this);
  if ( v5 )
  {
    v19 = (*(int (__thiscall **)(char *))(*(_DWORD *)this + 364))(this);
    (*(void (__thiscall **)(char *))(*(_DWORD *)this + 1868))(this);
    v6 = (float *)sub_10077560(v19);
    v7 = *v6;
    v8 = v6[1];
    v9 = v6[2];
    v21 = v7;
    v10 = *(_DWORD *)(v5 + 252) >> 11;
    v22 = v8;
    v23 = v9;
    if ( (v10 & 1) != 0 )
      sub_100DAE60(v5);
    v11 = (float *)(*(int (__thiscall **)(int, char *, float *, int))(*(_DWORD *)v5 + 520))(v5, v20, a3, a4);
    v12 = v11[2] - *(float *)(v5 + 588) + v23;
    v13 = v11[1] - *(float *)(v5 + 584) + v22;
    v24 = *v11 - *(float *)(v5 + 580) + v21 - *a3;
    v25 = v13 - a3[1];
    v26 = v12 - a3[2];
    off_10689714();
    result = a2;
    v15 = v25;
    *a2 = v24;
    v16 = v26;
    a2[1] = v15;
    a2[2] = v16;
  }
  else
  {
    sub_10422220(this + 728, &v21);
    result = a2;
    v17 = v22;
    *a2 = v21;
    v18 = v23;
    a2[1] = v17;
    a2[2] = v18;
  }
  return result;
}
