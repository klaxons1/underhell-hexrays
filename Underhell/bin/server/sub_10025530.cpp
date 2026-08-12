void __thiscall sub_10025530(int this, char a2)
{
  bool v3; // al
  int v4; // edi
  int v5; // eax
  char v6; // al
  char v7; // bl
  int v8; // eax
  int v9; // eax
  double v10; // st7
  bool v11; // bl
  int v12; // eax
  int v13; // ebx
  int v14; // eax
  int v15; // edi
  double v16; // st3
  double v17; // st5
  double v18; // st3
  double v19; // st4
  double v20; // st5
  double v21; // st6
  double v22; // st5
  double v24; // st7
  int v25; // edi
  bool v26; // c0
  int v27; // eax
  int v28; // ecx
  int v29; // eax
  int v30; // ebx
  int v31; // edi
  float v32[3]; // [esp+8h] [ebp-2Ch] BYREF
  float v33; // [esp+14h] [ebp-20h]
  float v34; // [esp+18h] [ebp-1Ch]
  float v35; // [esp+1Ch] [ebp-18h]
  float v36; // [esp+20h] [ebp-14h]
  int v37; // [esp+24h] [ebp-10h]
  int v38; // [esp+28h] [ebp-Ch]
  float v39; // [esp+2Ch] [ebp-8h]
  char v40; // [esp+32h] [ebp-2h]
  char v41; // [esp+33h] [ebp-1h]
  int v42; // [esp+3Ch] [ebp+8h]

  if ( *(_DWORD *)(this + 2352) )
  {
    *(_DWORD *)(this + 2340) = 4;
    return;
  }
  v3 = *(_DWORD *)(this + 2324) == 4 || (unsigned __int8)sub_100697A0(62, 0);
  *(_BYTE *)(this + 2176) = v3;
  if ( !*(_DWORD *)(dword_106907FC + 48) || !*(_DWORD *)(dword_10690604 + 48) )
  {
    *(_DWORD *)(this + 2340) = 0;
    *(_DWORD *)(this + 2344) = 0;
    return;
  }
  if ( *(int *)(dword_106B31C8 + 20) <= 1 )
  {
    v4 = sub_10261B20();
    v38 = v4;
  }
  else
  {
    v4 = 0;
    v38 = 0;
  }
  v5 = dword_106916F0;
  if ( (dword_106916F0 & 1) == 0 )
  {
    v5 = dword_106916F0 | 1;
    dword_106916F0 |= 1u;
  }
  if ( (v5 & 2) == 0 )
    dword_106916F0 = v5 | 2;
  if ( *(_DWORD *)(dword_106B31C8 + 4) != dword_105FE474 )
  {
    dword_105FE474 = *(_DWORD *)(dword_106B31C8 + 4);
    if ( v4 )
      sub_100F5AA0(&flt_106916D8, &flt_106916E4, 0, 0);
  }
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  v33 = *(float *)(this + 580) - flt_106916D8;
  v34 = *(float *)(this + 584) - flt_106916DC;
  v35 = *(float *)(this + 588) - flt_106916E0;
  v39 = off_10689714();
  v6 = sub_1025F670();
  v7 = v6;
  if ( !v4 )
  {
    v39 = 0.0;
    goto LABEL_27;
  }
  if ( v6 || a2 && v34 * flt_106916E8 + v33 * flt_106916E4 + v35 * flt_106916EC > 0.0 )
  {
LABEL_27:
    v41 = 1;
    if ( v6 )
    {
      v8 = sub_10262580(*(_DWORD *)(this + 24));
      v40 = 1;
      if ( v8 )
        goto LABEL_30;
    }
    goto LABEL_29;
  }
  v41 = 0;
LABEL_29:
  v40 = 0;
LABEL_30:
  *(_DWORD *)(this + 2344) = (!a2 || !v41 && v39 >= 300.0) && !v7;
  v9 = *(_DWORD *)(dword_106906DC + 48);
  if ( v9 > 0 && v9 <= 4 )
    goto LABEL_90;
  v10 = *(float *)(dword_106B31C8 + 12) - *(float *)(this + 2740);
  if ( v10 < 0.15 )
  {
    *(_DWORD *)(this + 2340) = 0;
    return;
  }
  v11 = *(float *)(dword_106907B4 + 44) > (double)*(float *)(dword_106B31C8 + 16);
  if ( *(_BYTE *)(this + 2320)
    || v10 < 0.2
    || *(float *)(dword_106B31C8 + 12) - *(float *)(this + 2728) < 0.2
    || (v12 = *(_DWORD *)(this + 2324), v12 < 1)
    || v12 > 4
    || (a2 || v40)
    && (sub_10043EC0(this) && !sub_10020E90((_DWORD *)this) || *(int *)(this + 2152) > 0 || *(_BYTE *)(this + 2176)) )
  {
    v9 = !v11;
LABEL_90:
    *(_DWORD *)(this + 2340) = v9;
    return;
  }
  if ( *(_DWORD *)(dword_106907FC + 48) && *(_DWORD *)(dword_10690694 + 48) )
  {
    v13 = !v11 + 1;
    v37 = v13;
  }
  else
  {
    v13 = !v11;
    v37 = v13;
  }
  if ( ((*(int (__thiscall **)(int))(*(_DWORD *)this + 1452))(this) & 8) != 0 )
  {
    v14 = sub_1023C720();
    if ( v14 != -1 )
    {
      while ( 1 )
      {
        v15 = sub_1023C740(v14);
        v36 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)this + 1468))(this);
        (*(void (__thiscall **)(int, float *))(*(_DWORD *)this + 516))(this, v32);
        if ( v15 )
        {
          if ( (*(_BYTE *)(v15 + 16) & 8) != 0 )
          {
            v16 = *(float *)(v15 + 40) - v32[1];
            v17 = v16 * v16;
            v18 = *(float *)(v15 + 36) - v32[0];
            v19 = v17;
            v20 = *(float *)(v15 + 44) - v32[2];
            v21 = v18 * v18 + v19 + v20 * v20;
            v22 = (double)*(int *)(v15 + 8) * v36;
            if ( v21 <= v22 * v22 )
              goto LABEL_65;
          }
        }
        v14 = *(__int16 *)(v15 + 28);
        if ( v14 == -1 )
        {
          v4 = v38;
          break;
        }
      }
    }
  }
  if ( !v4 )
  {
LABEL_65:
    *(_DWORD *)(this + 2340) = v13;
    return;
  }
  if ( a2 )
  {
    v24 = v39;
    if ( v39 < 180.0 )
      goto LABEL_65;
    if ( v24 < 600.0 )
    {
      v25 = 0;
      goto LABEL_74;
    }
    v26 = v24 < 2400.0;
  }
  else
  {
    if ( v39 < 300.0 )
    {
      v25 = 0;
      goto LABEL_74;
    }
    v26 = v39 < 1200.0;
  }
  v25 = 1;
  if ( !v26 )
    v25 = 2;
LABEL_74:
  v27 = *(_DWORD *)(this + 2324);
  v42 = v27;
  if ( v27 == 4 )
  {
    v27 = 2;
    v42 = 2;
  }
  v28 = *(_DWORD *)&aServerAnimatio[4 * v27 + 16];
  if ( !a2 || v41 )
    v29 = 0;
  else
    v29 = 3;
  v30 = dword_105FE408[v25 + v28 + v29 + (a2 != 0 ? 0 : 6)];
  v31 = 3;
  if ( !v40 )
  {
    if ( !sub_10023D10((_DWORD *)this, 32) )
      goto LABEL_85;
LABEL_84:
    v31 = 2;
    goto LABEL_85;
  }
  if ( v42 < 2 )
    goto LABEL_84;
  v31 = 1;
LABEL_85:
  if ( v30 <= v31 )
  {
    v31 = v37;
    if ( v30 >= v37 )
      v31 = v30;
  }
  *(_DWORD *)(this + 2340) = v31;
}
