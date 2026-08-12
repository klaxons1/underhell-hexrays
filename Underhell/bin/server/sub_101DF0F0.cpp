int __thiscall sub_101DF0F0(void *this, int a2)
{
  float *v3; // eax
  double v4; // st6
  double v5; // st7
  double v6; // st7
  double v7; // st7
  double v8; // st6
  int result; // eax
  int v10; // esi
  double (__thiscall *v11)(int); // eax
  double v12; // st7
  double v13; // st7
  double v14; // st6
  double v15; // st5
  int v16; // ecx
  double v17; // st4
  double v18; // st3
  double v19; // rtt
  double v20; // st3
  double v21; // st5
  double v22; // st3
  double v23; // st4
  double v24; // st6
  double v25; // st3
  double v26; // rt2
  double v27; // st5
  double v28; // st6
  float v29; // ecx
  float v30; // edx
  float v31; // [esp+Ch] [ebp-4Ch]
  float v32; // [esp+14h] [ebp-44h]
  float v33[3]; // [esp+28h] [ebp-30h] BYREF
  float v34; // [esp+34h] [ebp-24h] BYREF
  float v35; // [esp+38h] [ebp-20h]
  float v36; // [esp+3Ch] [ebp-1Ch]
  float v37; // [esp+40h] [ebp-18h]
  float v38; // [esp+44h] [ebp-14h]
  float v39; // [esp+48h] [ebp-10h]
  float v40; // [esp+4Ch] [ebp-Ch] BYREF
  float v41; // [esp+50h] [ebp-8h]
  float v42; // [esp+54h] [ebp-4h]

  if ( (*((_DWORD *)this + 62) & 2) != 0 )
  {
    (*(void (__thiscall **)(void *, float *, _DWORD, _DWORD))(*(_DWORD *)this + 528))(this, &v40, 0, 0);
  }
  else
  {
    if ( (*((_DWORD *)this + 63) & 0x800) != 0 )
      sub_100DAE60((int)this);
    if ( (*((_DWORD *)this + 63) & 0x800) != 0 )
      sub_100DAE60((int)this);
    v3 = (float *)(*(int (__thiscall **)(int, float *, int, _DWORD))(*(_DWORD *)a2 + 520))(a2, v33, (int)this + 580, 0);
    v4 = v3[1] - *((float *)this + 146);
    v5 = v3[2] - *((float *)this + 147);
    v40 = *v3 - *((float *)this + 145);
    v41 = v4;
    v42 = v5;
  }
  v6 = off_10689714();
  if ( (*((_DWORD *)this + 62) & 4) != 0 )
  {
    v7 = 0.0;
    v8 = 1.0;
  }
  else
  {
    v32 = *((float *)this + 202) * 0.25;
    v31 = v6;
    v8 = sub_10134630(v31, *((float *)this + 202), v32, 0.0, 1.0);
    v7 = 0.0;
  }
  result = *(unsigned __int8 *)(a2 + 306);
  switch ( *(_BYTE *)(a2 + 306) )
  {
    case 0:
    case 7:
    case 8:
      return result;
    case 3:
      v42 = v7;
      goto LABEL_15;
    case 6:
      v10 = *(_DWORD *)(a2 + 424);
      if ( v10 )
      {
        v11 = *(double (__thiscall **)(int))(*(_DWORD *)v10 + 116);
        v12 = v8 * *((float *)this + 201) * 100.0;
        v37 = v40 * v12;
        v38 = v41 * v12;
        v39 = v12 * v42;
        v13 = v11(v10);
        v14 = *(float *)(dword_106B31C8 + 16);
        v33[0] = v37 * v13 * v14;
        v33[1] = v38 * v13 * v14;
        v33[2] = v13 * v39 * v14;
        result = (*(int (__thiscall **)(int, float *))(*(_DWORD *)v10 + 236))(v10, v33);
      }
      break;
    default:
LABEL_15:
      v15 = *((float *)this + 201);
      v16 = *(_DWORD *)(a2 + 256);
      v17 = v15 * v42;
      v18 = v40 * v15 * v8;
      v37 = v18;
      v19 = v18;
      v20 = v41 * v15;
      v21 = v19;
      v22 = v20 * v8;
      v38 = v22;
      v23 = v8 * v17;
      v24 = v22;
      v39 = v23;
      if ( (v16 & 0x800000) != 0 )
      {
        v25 = *(float *)(a2 + 468);
        v26 = v23 + *(float *)(a2 + 472);
        v37 = v21 + *(float *)(a2 + 464);
        v27 = v24 + v25;
        v28 = v26;
        v38 = v27;
        v39 = v26;
      }
      else
      {
        v28 = v23;
      }
      if ( v28 > v7 && (v16 & 1) != 0 )
      {
        sub_101C73D0((unsigned int *)a2, 0);
        if ( (*(_DWORD *)(a2 + 252) & 0x800) != 0 )
          sub_100DAE60(a2);
        v29 = *(float *)(a2 + 580);
        v30 = *(float *)(a2 + 584);
        v36 = *(float *)(a2 + 588);
        v34 = v29;
        v36 = v36 + 1.0;
        v35 = v30;
        sub_100E0D20(a2, &v34);
      }
      v34 = v37;
      v36 = v39;
      v35 = v38;
      sub_100D9710((float *)(a2 + 464), &v34);
      result = sub_100EA940((int *)a2, 0x800000);
      break;
  }
  return result;
}
