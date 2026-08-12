char __thiscall sub_100EFD10(void *this, int a2, int a3, int a4)
{
  int v4; // edi
  double v7; // st7
  bool v8; // c0
  double v9; // st7
  double v10; // st7
  _DWORD *v11; // eax
  bool v12; // zf
  int v13; // edx
  int v14; // esi
  int v15; // ebx
  int v16; // eax
  int v17; // [esp+10h] [ebp-1Ch]
  int v18; // [esp+14h] [ebp-18h]
  int v19; // [esp+18h] [ebp-14h]
  double v20; // [esp+24h] [ebp-8h]
  double v21; // [esp+24h] [ebp-8h]
  float v22; // [esp+38h] [ebp+Ch]
  float v23; // [esp+38h] [ebp+Ch]
  float v24; // [esp+38h] [ebp+Ch]
  float v25; // [esp+38h] [ebp+Ch]
  float v26; // [esp+38h] [ebp+Ch]
  float v27; // [esp+38h] [ebp+Ch]
  float v28; // [esp+38h] [ebp+Ch]
  float v29; // [esp+38h] [ebp+Ch]
  float v30; // [esp+38h] [ebp+Ch]

  v4 = sub_100D7680((int)this);
  if ( !v4 )
    return 0;
  v22 = sub_10418520(a3);
  v20 = v22 - sub_1041CA40(a2) + 2.0;
  v23 = sub_1041CD00(a2);
  if ( v23 - sub_1041CA40(a2) + 0.2 <= v20 )
  {
    v25 = sub_1041CD00(a2);
    v7 = v25 - sub_1041CA40(a2) + 0.2;
  }
  else
  {
    v24 = sub_10418520(a3);
    v7 = v24 - sub_1041CA40(a2) + 2.0;
  }
  v8 = v7 > 2.0;
  v9 = 2.0;
  if ( !v8 )
  {
    v26 = sub_10418520(a3);
    v21 = v26 - sub_1041CA40(a2) + 2.0;
    v27 = sub_1041CD00(a2);
    if ( v27 - sub_1041CA40(a2) + 0.2 <= v21 )
    {
      v29 = sub_1041CD00(a2);
      v9 = v29 - sub_1041CA40(a2) + 0.2;
    }
    else
    {
      v28 = sub_10418520(a3);
      v9 = v28 - sub_1041CA40(a2) + 2.0;
    }
  }
  v30 = v9;
  if ( sub_100697A0((_DWORD *)v4, 62, 1) )
  {
    v10 = *(float *)(dword_106B31C8 + 12) + v30;
    if ( v10 <= *(float *)(v4 + 2700) )
    {
      *(float *)(v4 + 2700) = *(float *)(v4 + 2700);
      return 1;
    }
    goto LABEL_27;
  }
  v11 = *(_DWORD **)(v4 + 2124);
  if ( !v11 )
    goto LABEL_31;
  v12 = (v11[3] & 0xFDFFFFFF) == 0;
  v13 = v11[4];
  v14 = v11[5];
  v17 = v11[6];
  v18 = v11[7];
  v19 = v11[8];
  v15 = v11[9];
  v16 = v11[10];
  if ( !v12 || v13 || v14 || v17 || v18 || v19 || v15 || v16 )
  {
LABEL_31:
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v4 + 1268))(v4) )
    {
      if ( sub_1026A890(v4 + 2688) )
        sub_1002FE40(v4);
      (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 1272))(v4);
      sub_100457E0((_DWORD *)v4, 62);
      v10 = *(float *)(dword_106B31C8 + 12) + v30;
      if ( v10 <= *(float *)(v4 + 2700) )
        v10 = *(float *)(v4 + 2700);
LABEL_27:
      *(float *)(v4 + 2700) = v10;
      return 1;
    }
  }
  return 0;
}
