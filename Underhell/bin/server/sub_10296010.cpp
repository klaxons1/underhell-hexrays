int __usercall sub_10296010@<eax>(char **a1@<ecx>, double a2@<st0>)
{
  int v3; // eax
  int v4; // eax
  char *v5; // eax
  int *v6; // edi
  int *v7; // ecx
  unsigned int v8; // eax
  int v9; // ecx
  char *v10; // eax
  int *v11; // edx
  unsigned int v12; // eax
  int v13; // edx
  char *v14; // eax
  int v15; // edx
  char *v16; // edi
  int v17; // eax
  char *v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  _DWORD *v24; // edi
  float *v25; // eax
  int v26; // eax
  int result; // eax
  int v28; // edi
  int v29; // ebx
  char *v30; // eax
  double v31; // st6
  float *v32; // eax
  double v33; // st5
  double v34; // st4
  double v35; // st6
  double v36; // st4
  double v37; // rt2
  double v38; // st5
  float *v39; // [esp+10h] [ebp-3Ch]
  int v40[3]; // [esp+20h] [ebp-2Ch] BYREF
  int v41[3]; // [esp+2Ch] [ebp-20h] BYREF
  int v42[3]; // [esp+38h] [ebp-14h] BYREF
  float v43; // [esp+44h] [ebp-8h]
  char v44; // [esp+4Bh] [ebp-1h]

  if ( !(unsigned __int8)sub_1004B510(a1, 100001, 0) )
  {
    v3 = (*((int (__thiscall **)(char **))*a1 + 13))(a1);
    v4 = sub_1007DB30((_DWORD *)(v3 + 52), 100002);
    sub_10023E00(a1[1], v4);
  }
  sub_1004B420((int (__thiscall ****)(_DWORD))a1);
  v5 = a1[15];
  v6 = off_1061BE18;
  v44 = 1;
  if ( v5 != (char *)-1 )
  {
    v7 = &off_1061BE18[4 * ((unsigned __int16)v5 & 0xFFF) + 1];
    v8 = (unsigned int)v5 >> 12;
    if ( v7[1] == v8 )
    {
      if ( *v7 )
      {
        v9 = v7[1] == v8 ? *v7 : 0;
        if ( *(_DWORD *)(v9 + 880) == 1 )
          v44 = 0;
      }
    }
  }
  v10 = a1[17];
  if ( v10 == (char *)-1
    || (v11 = &off_1061BE18[4 * ((unsigned int)a1[17] & 0xFFF) + 1],
        v12 = (unsigned int)v10 >> 12,
        off_1061BE18[4 * ((unsigned int)a1[17] & 0xFFF) + 2] != v12)
    || !*v11
    || !*((_BYTE *)a1 + 36) )
  {
    v21 = (*((int (__thiscall **)(char **))*a1 + 13))(a1);
    v22 = sub_1007DB30((_DWORD *)(v21 + 52), 100000);
    sub_10023E00(a1[1], v22);
    goto LABEL_37;
  }
  if ( v44 )
  {
    if ( off_1061BE18[4 * ((unsigned int)a1[17] & 0xFFF) + 2] == v12 )
      v13 = *v11;
    else
      v13 = 0;
    if ( !(*(unsigned __int8 (__thiscall **)(char *, int))(*(_DWORD *)a1[1] + 876))(a1[1], v13) )
      goto LABEL_28;
    v6 = off_1061BE18;
  }
  v14 = a1[17];
  if ( v14 == (char *)-1 || v6[4 * ((unsigned int)a1[17] & 0xFFF) + 2] != (unsigned int)v14 >> 12 )
    v15 = 0;
  else
    v15 = v6[4 * ((unsigned int)a1[17] & 0xFFF) + 1];
  if ( (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)a1[1] + 1432))(a1[1], v15, 0) )
  {
    v16 = a1[1];
    v17 = sub_1026A890((unsigned int *)a1 + 17);
    if ( (*(unsigned __int8 (__thiscall **)(char *, int, int, _DWORD))(*(_DWORD *)v16 + 548))(v16, v17, 16449, 0) )
    {
      a2 = *(float *)(dword_106B31C8 + 12);
      a1[18] = *(char **)(dword_106B31C8 + 12);
      sub_1004C260(a1, 100000);
      goto LABEL_37;
    }
  }
LABEL_28:
  v18 = a1[15];
  if ( v18 != (char *)-1 && off_1061BE18[4 * ((unsigned int)a1[15] & 0xFFF) + 2] == (unsigned int)v18 >> 12 )
  {
    if ( off_1061BE18[4 * ((unsigned int)a1[15] & 0xFFF) + 1] )
    {
      v43 = *(float *)(dword_106B31C8 + 12) - *((float *)a1 + 18);
      a2 = v43;
      if ( v43 >= (double)*(float *)(sub_1026A890((unsigned int *)a1 + 15) + 872) )
      {
        sub_1004C1E0(a1, 100000);
        v19 = sub_1026A890((unsigned int *)a1 + 15);
        (*(void (__thiscall **)(int, char *))(*(_DWORD *)v19 + 764))(v19, a1[1]);
        if ( sub_10295D00(a1) && (*(int (__thiscall **)(char *))(*(_DWORD *)a1[1] + 220))(a1[1]) == 3 )
        {
          v20 = sub_1026A890((unsigned int *)a1 + 17);
          if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v20 + 320))(v20) )
          {
            a2 = *(float *)(dword_106B31C8 + 12) + 4.0;
            *((float *)a1 + 22) = a2;
          }
        }
      }
    }
  }
LABEL_37:
  if ( *((_BYTE *)a1 + 36) )
  {
    v23 = dword_106DB118 + 56 * (_DWORD)a1[14];
    if ( v23 )
    {
      switch ( *(_DWORD *)(v23 + 48) )
      {
        case 0:
          sub_1004C260(a1, 50);
          sub_1004C260(a1, 53);
          sub_1004C260(a1, 54);
          sub_1004C260(a1, 56);
          sub_1004C260(a1, 55);
          break;
        case 2:
          sub_1004C260(a1, 50);
          sub_1004C260(a1, 53);
          sub_1004C260(a1, 54);
          sub_1004C260(a1, 56);
          break;
        case 4:
          sub_1004C260(a1, 55);
          sub_1004C260(a1, 10);
          sub_1004C260(a1, 26);
          break;
        case 5:
          sub_1004C260(a1, 55);
          sub_1004C260(a1, 10);
          sub_1004C260(a1, 26);
          v24 = (_DWORD *)sub_1025FB50(1);
          if ( v24 )
          {
            v39 = (float *)sub_1004BF30(a1);
            v25 = (float *)sub_10019640(v24);
            sub_1004BCD0(v25, v39);
            if ( a2 <= 60.0 )
              sub_10295E70((int)a1);
          }
          break;
        case 6:
          sub_1004C260(a1, 55);
          sub_1004C260(a1, 10);
          sub_1004C260(a1, 26);
          sub_1004C260(a1, 53);
          sub_1004C260(a1, 54);
          sub_1004C260(a1, 56);
          break;
        default:
          break;
      }
    }
  }
  if ( *((_BYTE *)a1 + 84) )
  {
    if ( (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 0, 5) <= 3 )
    {
      v26 = sub_100CF460(a1[1]);
      if ( v26 )
        (*(void (__thiscall **)(int, char *, _DWORD))(*(_DWORD *)v26 + 1396))(v26, a1[1], 0);
    }
  }
  result = dword_106DB0DC;
  if ( *(_DWORD *)(dword_106DB0DC + 48) == 5 )
  {
    v28 = 0;
    if ( (int)a1[27] > 0 )
    {
      v29 = 0;
      do
      {
        v30 = a1[24];
        v31 = *(float *)&v30[v29 + 12];
        v32 = (float *)&v30[v29];
        v33 = v32[1] + v32[4];
        v34 = v31 + *v32;
        v35 = v32[5] + v32[2];
        v36 = v34 * 0.5;
        *(float *)v40 = v36;
        *(float *)&v40[1] = v33 * 0.5;
        v37 = v33 * 0.5;
        v38 = 0.5 * v35;
        *(float *)&v40[2] = v38;
        *(float *)v41 = v36 - *v32;
        *(float *)&v41[1] = v37 - v32[1];
        *(float *)&v41[2] = v38 - v32[2];
        *(float *)v42 = v36 - v32[3];
        *(float *)&v42[1] = v37 - v32[4];
        *(float *)&v42[2] = v38 - v32[5];
        result = sub_1011BB20((int)v40, (int)v41, (int)v42, 255, 0, 255, 64, 0.2);
        ++v28;
        v29 += 24;
      }
      while ( v28 < (int)a1[27] );
    }
  }
  return result;
}
