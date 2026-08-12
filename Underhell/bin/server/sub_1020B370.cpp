int __userpurge sub_1020B370@<eax>(unsigned int a1@<ecx>, int a2@<edi>, int a3)
{
  int *v5; // eax
  int v6; // eax
  int v7; // eax
  double v8; // st7
  char v9; // bl
  _BYTE *v10; // edi
  int v11; // esi
  int v12; // eax
  int v13; // eax
  float *v14; // edi
  float *v15; // eax
  double v16; // st7
  double v17; // st7
  double v18; // st7
  double v19; // st7
  double v20; // st6
  double v21; // st7
  double v22; // st6
  double v23; // st6
  double v24; // st7
  int v25; // edi
  double v26; // st7
  int v27; // edi
  int v28; // edi
  double v29; // st7
  int v30; // eax
  int v31; // ecx
  float v32; // [esp+20h] [ebp-74h]
  float v33; // [esp+28h] [ebp-6Ch]
  float v34; // [esp+28h] [ebp-6Ch]
  _DWORD v35[11]; // [esp+38h] [ebp-5Ch] BYREF
  unsigned int v36; // [esp+64h] [ebp-30h]
  float v37; // [esp+6Ch] [ebp-28h]
  char v38; // [esp+78h] [ebp-1Ch]
  float v39; // [esp+88h] [ebp-Ch] BYREF
  double v40; // [esp+8Ch] [ebp-8h]

  sub_1001E4E0(v35, a3);
  if ( (double)*(int *)(a1 + 1204) > v37 )
    return 0;
  if ( !(*(unsigned __int8 (__thiscall **)(unsigned int, _DWORD *))(*(_DWORD *)a1 + 244))(a1, v35) )
    return 1;
  if ( v36 != -1 )
  {
    v5 = &off_1061BE18[4 * (v36 & 0xFFF) + 1];
    if ( off_1061BE18[4 * (v36 & 0xFFF) + 2] == v36 >> 12 )
    {
      if ( *v5 )
      {
        v6 = off_1061BE18[4 * (v36 & 0xFFF) + 2] == v36 >> 12 ? *v5 : 0;
        if ( (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 288))(v6) )
        {
          v7 = sub_1001E870(v35);
          if ( v7 )
            *(_DWORD *)(a1 + 1428) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v7 + 8))(v7);
          else
            *(_DWORD *)(a1 + 1428) = -1;
        }
      }
    }
  }
  v8 = sub_102073C0((int)v35, a1 + 1120);
  v37 = v8;
  if ( *(_DWORD *)(a1 + 1220) == *(_DWORD *)(dword_106B31C8 + 24) )
  {
    v9 = *(_BYTE *)(a1 + 225);
    v10 = (_BYTE *)(a1 + 225);
    if ( v9 != 1 )
    {
      (*(void (__thiscall **)(unsigned int, unsigned int))(*(_DWORD *)a1 + 480))(a1, a1 + 225);
      *v10 = 1;
    }
    v11 = sub_100DC590(a1, (int)v35);
    if ( v9 != *v10 )
    {
      (*(void (__thiscall **)(_BYTE *, _BYTE *))(*(_DWORD *)(v10 - 225) + 480))(v10 - 225, v10);
      *v10 = v9;
    }
    return v11;
  }
  else if ( (*(_DWORD *)(a1 + 256) & 0x8000000) != 0
         && (v12 = *(_DWORD *)(a3 + 64), (v12 & 8) != 0)
         && (v12 & 0x10000000) == 0 )
  {
    return 0;
  }
  else
  {
    if ( (double)*(int *)(a1 + 220) > v8 )
      goto LABEL_42;
    if ( (v38 & 0x40) != 0
      && (*(unsigned __int8 (__thiscall **)(unsigned int, int))(*(_DWORD *)(a1 + 1120) + 92))(a1 + 1120, 9)
      && sub_100232D0(v35) )
    {
      v13 = sub_100232D0(v35);
      v14 = (float *)(*(int (__thiscall **)(int, int))(*(_DWORD *)v13 + 576))(v13, a2);
      v15 = (float *)(*(int (__thiscall **)(unsigned int))(*(_DWORD *)a1 + 576))(a1);
      v39 = *v15 - *v14;
      *(float *)&v40 = v15[1] - v14[1];
      v16 = v15[2] - v14[2];
      *((float *)&v40 + 1) = v16;
      sub_100D7A40(&v39);
      if ( v16 < 32.0 )
      {
        v19 = ((double (__thiscall *)(int, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(dword_106B31E4, 0.1);
      }
      else
      {
        if ( v16 > 256.0 )
          v16 = 256.0;
        v17 = v16 * 0.00390625 * 5.0;
        v40 = v17 >= 0.5 ? v17 : 0.5;
        v18 = ((double (__thiscall *)(int, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(dword_106B31E4, 0.0);
        v19 = v18 + v40;
      }
      v20 = v19;
      v21 = (double)*(int *)(a1 + 220);
      v22 = v20 * 5.0;
      if ( v22 <= v21 )
        v21 = v22;
      v23 = ((double)*(int *)(a1 + 220) - v21) / v37 * v37;
      v24 = (double)*(int *)(a1 + 220);
      v37 = v23;
      if ( v23 < v24 )
      {
LABEL_42:
        if ( (v38 & 0x40) != 0 || (v38 & 8) != 0 )
        {
          v25 = *(_DWORD *)a1;
          v33 = ((double (__thiscall *)(int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4
                                                                                               + 4))(
                  dword_106B31E4,
                  10.0,
                  15.0,
                  0,
                  0.0,
                  0);
          (*(void (__thiscall **)(unsigned int, _DWORD))(v25 + 808))(a1, LODWORD(v33));
        }
        else if ( (v38 & 2) != 0
               && (*(unsigned __int8 (__thiscall **)(unsigned int, int))(*(_DWORD *)(a1 + 1120) + 92))(a1 + 1120, 10) )
        {
          v26 = (double)*(int *)(a1 + 220);
          if ( (double)(*(_DWORD *)(a1 + 216) / 2) < v26 - v37 || (*(_DWORD *)(a1 + 256) & 0x8000000) != 0 )
          {
            if ( (*(_DWORD *)(a1 + 256) & 0x8000000) != 0 )
              v37 = v26 / v37 * v37;
          }
          else
          {
            sub_1002AB00((_DWORD *)(a1 + 220), (_DWORD *)(a1 + 216));
            v27 = *(_DWORD *)a1;
            v34 = ((double (__thiscall *)(int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4
                                                                                                 + 4))(
                    dword_106B31E4,
                    10.0,
                    15.0,
                    0,
                    0.0,
                    0);
            (*(void (__thiscall **)(unsigned int, _DWORD))(v27 + 808))(a1, LODWORD(v34));
          }
        }
      }
    }
    v28 = sub_100DC590(a1, (int)v35);
    v29 = (double)*(int *)(a1 + 220) / (double)*(int *)(a1 + 216);
    if ( v29 <= 1.0 )
    {
      if ( v29 < 0.0 )
        v29 = 0.0;
    }
    else
    {
      v29 = 1.0;
    }
    if ( v36 == -1 || off_1061BE18[4 * (v36 & 0xFFF) + 2] != v36 >> 12 )
      v30 = 0;
    else
      v30 = off_1061BE18[4 * (v36 & 0xFFF) + 1];
    v32 = v29;
    sub_10108AE0((int *)(a1 + 1152), SLOBYTE(v32), v30, a1);
    if ( v36 == -1 || off_1061BE18[4 * (v36 & 0xFFF) + 2] != v36 >> 12 )
      v31 = 0;
    else
      v31 = off_1061BE18[4 * (v36 & 0xFFF) + 1];
    sub_1010DD80((_DWORD *)(a1 + 1176), __SPAIR64__(a1, v31), 0.0);
    return v28;
  }
}
