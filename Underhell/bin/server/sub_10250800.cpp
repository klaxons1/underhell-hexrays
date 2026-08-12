void __userpurge sub_10250800(int a1@<ecx>, int a2@<edi>, int a3)
{
  const char *v5; // eax
  const char *v6; // eax
  long double v7; // st7
  double v8; // st6
  double v9; // st7
  double v10; // st7
  int v11; // edi
  double v12; // st4
  double v13; // st6
  double v14; // st4
  double v15; // st5
  double v16; // st6
  double v17; // st7
  const char *v18; // eax
  const char *v19; // eax
  _DWORD *v20; // eax
  const char *v21; // [esp+0h] [ebp-7Ch]
  float v22; // [esp+4h] [ebp-78h]
  double v23; // [esp+4h] [ebp-78h]
  const char *v24; // [esp+8h] [ebp-74h]
  _BYTE v25[80]; // [esp+14h] [ebp-68h] BYREF
  _BYTE v26[8]; // [esp+64h] [ebp-18h] BYREF
  float v27; // [esp+6Ch] [ebp-10h]
  float v28; // [esp+70h] [ebp-Ch] BYREF
  float v29; // [esp+74h] [ebp-8h]
  float v30; // [esp+78h] [ebp-4h]
  float v31; // [esp+84h] [ebp+8h]
  int v32; // [esp+84h] [ebp+8h]

  if ( (*(_BYTE *)(a3 + 256) & 1) != 0 && sub_101C5260((_DWORD *)a3) == a1 )
  {
    v5 = *(const char **)(a3 + 92);
    if ( !v5 )
      v5 = String;
    v24 = v5;
    v6 = sub_100D6390((_DWORD *)a1);
    DevMsg(1, "TRAIN(%s): Blocked by %s\n", v6, v24);
    v7 = fabs(*(float *)(a1 + 108));
    v31 = v7;
    if ( v7 > 50.0 )
      v31 = 50.0;
    (*(void (__thiscall **)(int, _BYTE *, _DWORD))(*(_DWORD *)a3 + 540))(a3, v26, 0);
    if ( 0.0 == v27 )
    {
      v28 = 0.0;
      v29 = 0.0;
      v30 = v31;
      sub_100EA150(a3, &v28);
    }
  }
  else
  {
    if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
      sub_100DAE60(a1);
    if ( (*(_DWORD *)(a3 + 252) & 0x800) != 0 )
      sub_100DAE60(a3);
    v8 = *(float *)(a3 + 584) - *(float *)(a1 + 584);
    v9 = *(float *)(a3 + 588) - *(float *)(a1 + 588);
    v28 = *(float *)(a3 + 580) - *(float *)(a1 + 580);
    v29 = v8;
    v30 = v9;
    off_10689714();
    v10 = *(float *)(a1 + 860);
    v28 = v28 * v10;
    v29 = v29 * v10;
    v30 = v10 * v30;
    sub_100DD660(a3, &v28);
    if ( (*(_DWORD *)(a1 + 248) & 0x200) == 0 )
      goto LABEL_28;
    v11 = sub_10250660(a1, a2);
    if ( v11 )
    {
      if ( *(_DWORD *)(dword_106B31C8 + 24) - *(_DWORD *)(a1 + 844) > 10 )
      {
        if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
          sub_100DAE60(a1);
        v12 = *(float *)(a1 + 584) - *(float *)(a1 + 836);
        v13 = v12 * v12;
        v14 = *(float *)(a1 + 580) - *(float *)(a1 + 832);
        v15 = v13;
        v16 = *(float *)(a1 + 588) - *(float *)(a1 + 840);
        v22 = v14 * v14 + v15 + v16 * v16;
        v17 = off_10689708(v22);
        *(float *)&v32 = v17;
        if ( (*(_DWORD *)(a1 + 252) & 0x1000) != 0 )
          sub_100DAFD0(a1);
        sub_100D7A40((float *)(a1 + 476));
        if ( v17 * *(float *)(dword_106B31C8 + 28) * 10.0 * 0.1 > *(float *)&v32 )
          sub_101CA9F0(a1, v11, 1, 4.0);
        if ( *(float *)&v32 > 1.0 )
          goto LABEL_24;
      }
      if ( *(int *)(a1 + 844) < 0 )
      {
LABEL_24:
        if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
          sub_100DAE60(a1);
        *(float *)(a1 + 832) = *(float *)(a1 + 580);
        *(float *)(a1 + 836) = *(float *)(a1 + 584);
        *(float *)(a1 + 840) = *(float *)(a1 + 588);
        *(_DWORD *)(a1 + 844) = *(_DWORD *)(dword_106B31C8 + 24);
      }
    }
    if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a3 + 320))(a3) )
    {
LABEL_28:
      v18 = *(const char **)(a3 + 92);
      if ( !v18 )
        v18 = String;
      v23 = *(float *)(a1 + 860);
      v21 = v18;
      v19 = sub_100D6390((_DWORD *)a1);
      DevWarning(2, "TRAIN(%s): Blocked by %s (dmg:%.2f)\n", v19, v21, v23);
      if ( *(float *)(a1 + 860) > 0.0 )
      {
        v20 = (_DWORD *)sub_10248110((int)v25, a1, a1, *(float *)(a1 + 860), 1, 0);
        sub_100D9E70((int *)a3, a3, v20);
      }
    }
  }
}
