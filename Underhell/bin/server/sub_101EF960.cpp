void __usercall sub_101EF960(int a1@<ecx>, float *a2@<edi>)
{
  double v3; // st6
  double v4; // st7
  double v5; // st7
  double v6; // st6
  double v7; // st7
  float *v8; // eax
  bool v9; // c3
  int v10; // eax
  double v11; // st6
  double v12; // st7
  float *v13; // eax
  float *v14; // eax
  double v15; // st7
  bool v16; // zf
  int (*v17)(void); // eax
  int v18; // eax
  unsigned int v19; // ecx
  int *v20; // eax
  unsigned int v21; // ecx
  int v22; // eax
  unsigned int v23; // eax
  int v24; // ecx
  _DWORD *v25; // eax
  float v26; // ecx
  int v27; // edx
  int *v28; // ecx
  float *v29; // eax
  int v30; // [esp+4h] [ebp-80h]
  int v31; // [esp+14h] [ebp-70h]
  _BYTE v32[76]; // [esp+1Ch] [ebp-68h] BYREF
  int v33; // [esp+68h] [ebp-1Ch]
  int v34[3]; // [esp+70h] [ebp-14h] BYREF
  float v35; // [esp+7Ch] [ebp-8h] BYREF
  float v36; // [esp+80h] [ebp-4h] BYREF
  int savedregs; // [esp+84h] [ebp+0h] BYREF

  if ( (*(_DWORD *)(a1 + 252) & 0x1000) != 0 )
    sub_100DAFD0(a1);
  v3 = 0.1 * *(float *)(a1 + 484) + 0.89999998 * *(float *)(a1 + 3620);
  v4 = *(float *)(a1 + 480) * 0.1 + *(float *)(a1 + 3616) * 0.89999998;
  *(float *)(a1 + 3612) = *(float *)(a1 + 476) * 0.1 + *(float *)(a1 + 3612) * 0.89999998;
  *(float *)(a1 + 3616) = v4;
  *(float *)(a1 + 3620) = v3;
  if ( !byte_106B4F38 && !*(_DWORD *)(a1 + 4020) )
  {
    v5 = 0.0;
    if ( (*(unsigned __int8 (__thiscall **)(int, float *))(*(_DWORD *)a1 + 264))(a1, a2) )
    {
      if ( (*(_DWORD *)(a1 + 256) & 0x4000) != 0 )
      {
        v36 = 0.0;
        sub_10172570((_DWORD *)(a1 + 2188), &v36);
      }
      else if ( *(_DWORD *)(dword_106BB604 + 48) && *(_BYTE *)(a1 + 2329) && 0.0 != *(float *)(a1 + 2156) )
      {
        v6 = 0.0;
        v36 = *(float *)(a1 + 2188);
        if ( v36 != 0.0 )
        {
          v7 = (double)SLODWORD(v36) * 0.006;
          v36 = v7;
          v8 = (float *)sub_10019660((_DWORD *)a1);
          sub_100D7A40(v8);
          v9 = 0.0 == v7;
          v5 = 0.0;
          v6 = v36;
          if ( v9 )
          {
            v6 = v6 * 0.5;
          }
          else if ( *(_BYTE *)(a1 + 5216) )
          {
            v6 = v6 + v6;
          }
        }
        v10 = *(_DWORD *)(a1 + 220);
        if ( v10 >= 25 || (v6 = v6 + (double)*(int *)(a1 + 2184) * -0.00075, v36 = v6, v10 > 1) )
        {
          v5 = v6;
        }
        else
        {
          if ( (*(_DWORD *)(a1 + 236) & 0x2000000) != 0 || v10 <= 0 )
            v36 = v5;
          else
            v5 = v6;
          if ( v10 <= 0 )
          {
            (*(void (__cdecl **)(int, _DWORD, const char *))(*(_DWORD *)dword_106B31D0 + 152))(
              dword_106B31D0,
              *(_DWORD *)(a1 + 24),
              "kill");
            v5 = v36;
          }
        }
        v11 = *(float *)(dword_106B31C8 + 12);
        *(float *)(a1 + 2152) = *(float *)(dword_106B31C8 + 12);
        v12 = v5 * (v11 - *(float *)(a1 + 2156)) + *(float *)(a1 + 2144);
        *(float *)(a1 + 2144) = v12;
        a2 = (float *)(int)v12;
        LODWORD(v36) = (int)v12;
        if ( (int)v12 )
        {
          sub_10125F80((int *)(a1 + 220), &v36);
          if ( (int)a2 <= 0 )
          {
            if ( ++*(_DWORD *)(a1 + 2160) == 10 )
            {
              *(_DWORD *)(a1 + 2160) = 0;
              sub_101EEFF0((int *)(a1 + 2184), 0);
              if ( *(int *)(a1 + 2184) < 0 )
              {
                v35 = 0.0;
                sub_101E9E60((_DWORD *)(a1 + 2184), &v35);
              }
            }
          }
          else
          {
            v13 = (float *)sub_10019640((_DWORD *)a1);
            v34[0] = *(int *)v13;
            v34[1] = *((int *)v13 + 1);
            *(float *)&v34[2] = v13[2] - 32.0;
            v14 = (float *)sub_10019640((_DWORD *)a1);
            sub_1002A5F0((int)&savedregs, a1, v14, (float *)v34, 1174421507, a1, 0, (int)v32);
            if ( v33 )
              (*(void (__thiscall **)(int, _BYTE *, const char *))(*(_DWORD *)a1 + 304))(a1, v32, "blood_drop");
            sub_101E9E10((int *)(a1 + 2188), &v36);
            if ( *(int *)(a1 + 2188) <= 10 )
            {
              v35 = 0.0;
              sub_10172570((_DWORD *)(a1 + 2188), &v35);
            }
          }
          *(float *)(a1 + 2144) = 0.0;
        }
        if ( *(int *)(a1 + 2188) < 0 )
        {
          v35 = 0.0;
          sub_10172570((_DWORD *)(a1 + 2188), &v35);
        }
        v15 = (0.2 - (double)*(int *)(a1 + 220) * 0.000875) * (*(float *)(a1 + 2152) - *(float *)(a1 + 2156))
            + *(float *)(a1 + 2148);
        *(float *)(a1 + 2148) = v15;
        if ( (int)v15 )
        {
          sub_101E9EB0((int *)(a1 + 2184), &v36);
          if ( *(int *)(a1 + 2184) < 0 )
          {
            v35 = 0.0;
            sub_101E9E60((_DWORD *)(a1 + 2184), &v35);
          }
          *(float *)(a1 + 2148) = 0.0;
        }
      }
      v16 = (*(_BYTE *)(a1 + 256) & 2) == 0;
      *(float *)(a1 + 2156) = *(float *)(dword_106B31C8 + 12);
      v17 = *(int (**)(void))(*(_DWORD *)dword_106B3CDC + 120);
      if ( v16 )
      {
        v31 = v17() + 24;
        v18 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 120))(dword_106B3CDC) + 12;
      }
      else
      {
        v31 = v17() + 48;
        v18 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 120))(dword_106B3CDC) + 36;
      }
      sub_100D5D10(v18, v31);
      v19 = *(_DWORD *)(a1 + 3404);
      if ( v19 != -1 )
      {
        v20 = &off_1061BE18[4 * (*(_DWORD *)(a1 + 3404) & 0xFFF) + 1];
        v21 = v19 >> 12;
        if ( off_1061BE18[4 * (*(_DWORD *)(a1 + 3404) & 0xFFF) + 2] == v21 )
        {
          if ( *v20 )
          {
            if ( off_1061BE18[4 * (*(_DWORD *)(a1 + 3404) & 0xFFF) + 2] == v21 )
              v22 = *v20;
            else
              v22 = 0;
            if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)v22 + 312))(v22, a1)
              && (!sub_100CF460((_DWORD *)a1)
               || (*(_DWORD *)(sub_100CF460((_DWORD *)a1) + 192) & 0x20) != 0
               || *(_DWORD *)(sub_100CF460((_DWORD *)a1) + 1160) == 173) )
            {
              v23 = *(_DWORD *)(a1 + 3404);
              if ( v23 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 3404) & 0xFFF) + 2] != v23 >> 12 )
                v24 = 0;
              else
                v24 = off_1061BE18[4 * (*(_DWORD *)(a1 + 3404) & 0xFFF) + 1];
              (*(void (__stdcall **)(int, int, int, _DWORD))(*(_DWORD *)v24 + 372))(a1, a1, 2, 2.0);
            }
            else
            {
              sub_101E99A0((_DWORD *)a1);
            }
          }
        }
      }
      (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 1436))(a1);
      if ( (*(_BYTE *)(a1 + 256) & 1) != 0 )
      {
        a2 = (float *)(a1 + 2292);
        if ( *(float *)(a1 + 2292) > 64.0
          && !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 132))(dword_106B3CDC) )
        {
          v30 = (int)*a2;
          v25 = sub_10019640((_DWORD *)a1);
          sub_1023D4B0(4, (int)v25, v30, 0.2, a1, 0, 0);
        }
        v26 = *a2;
        v35 = 0.0;
        if ( LODWORD(v26) != COERCE_INT(0.0) )
        {
          (**(void (__thiscall ***)(int, int))(a1 + 2192))(a1 + 2192, a1 + 2292);
          *a2 = 0.0;
        }
      }
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a1 + 1088))(a1) )
      {
        (*(void (__thiscall **)(int, int))(*(_DWORD *)a1 + 1300))(a1, 6);
      }
      else
      {
        if ( (*(_DWORD *)(a1 + 252) & 0x1000) != 0 )
          sub_100DAFD0(a1);
        if ( 0.0 == *(float *)(a1 + 476) && 0.0 == *((float *)sub_10019660((_DWORD *)a1) + 1) )
        {
          (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)a1 + 1300))(a1, 0);
        }
        else if ( (0.0 != *(float *)sub_10019660((_DWORD *)a1) || 0.0 != *((float *)sub_10019660((_DWORD *)a1) + 1))
               && (*(_BYTE *)(a1 + 256) & 1) != 0
               || *(_BYTE *)(a1 + 447) > 1u )
        {
          (*(void (__thiscall **)(int, int))(*(_DWORD *)a1 + 1300))(a1, 1);
        }
      }
    }
    if ( *(_DWORD *)(a1 + 908) == -1 )
      sub_100C1170(a1, 0);
    (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 728))(a1);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)a1 + 784))(a1, a1);
    v27 = *(_DWORD *)(a1 + 128);
    v36 = *(float *)(dword_106B31C8 + 12);
    if ( v27 != LODWORD(v36) )
    {
      if ( *(_BYTE *)(a1 + 84) )
      {
        *(_BYTE *)(a1 + 88) |= 1u;
      }
      else
      {
        v28 = *(int **)(a1 + 24);
        if ( v28 )
          sub_100194B0(v28, 128);
      }
      *(float *)(a1 + 128) = v36;
    }
    (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 940))(a1);
    sub_101E4CA0(a1);
    if ( *(_BYTE *)(a1 + 4212) )
    {
      sub_100E10C0(a1, (float *)(a1 + 4200));
      a2 = (float *)(a1 + 2304);
      sub_100E11A0(a1, (float *)(a1 + 2304));
      v29 = sub_1014AE30((float *)v34, -25.0, 25.0);
      sub_100F5E90((float *)(a1 + 2304), v29);
      sub_1015B0B0((float *)(a1 + 2316), 0.0, 0.0, 0.0);
    }
    sub_101E5110(a1, (int)a2);
  }
  sub_100F6B30((_DWORD *)a1);
}
