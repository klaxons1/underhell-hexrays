int __thiscall sub_101360C0(char *this)
{
  double v2; // st7
  float v3; // eax
  int v4; // esi
  unsigned __int8 (__thiscall *v5)(int); // eax
  int *v6; // eax
  int v7; // eax
  float *v8; // eax
  float v9; // ecx
  int v10; // edx
  double v11; // st7
  int (__thiscall *v12)(_DWORD); // eax
  float *v13; // eax
  float *v14; // esi
  float *v15; // edi
  double (__thiscall *v16)(int); // eax
  bool v17; // al
  int result; // eax
  float v19; // [esp+Ch] [ebp-24h] BYREF
  float v20; // [esp+10h] [ebp-20h]
  float v21; // [esp+14h] [ebp-1Ch]
  float v22; // [esp+18h] [ebp-18h]
  float v23; // [esp+1Ch] [ebp-14h]
  float v24; // [esp+20h] [ebp-10h]
  char v25; // [esp+24h] [ebp-Ch]
  _BYTE *v26; // [esp+28h] [ebp-8h]
  float v27; // [esp+2Ch] [ebp-4h]

  v2 = ((double (__thiscall *)(char *))*(_DWORD *)(*(_DWORD *)this + 104))(this);
  *((float *)this + 19) = v2;
  v3 = *(float *)this;
  *((float *)this + 21) = v2;
  *((float *)this + 18) = ((double (__thiscall *)(char *))*(_DWORD *)(LODWORD(v3) + 100))(this);
  *((float *)this + 20) = 1.0;
  *((float *)this + 10) = *(float *)(dword_1044CC6C + 44);
  this[20] = 0;
  (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)dword_10413184 + 64))(dword_10413184, 172, 0);
  v4 = sub_100422D0();
  v5 = *(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_1041315C + 320);
  v26 = (_BYTE *)v4;
  if ( v5(dword_1041315C) )
  {
    v6 = sub_100B1EE0();
    sub_100B2E20((int)v6, (float *)this + 12, (float *)this + 15, (float *)this + 10);
  }
  else
  {
    if ( v4 )
    {
      if ( v4 != -3356 && *(_BYTE *)(v4 + 3420) )
        this[144] = 1;
      (*(void (__thiscall **)(int, char *, char *, char *, char *, char *))(*(_DWORD *)v4 + 800))(
        v4,
        this + 48,
        this + 60,
        this + 72,
        this + 76,
        this + 40);
      v27 = COERCE_FLOAT((*(int (__thiscall **)(int))(*(_DWORD *)dword_10413168 + 108))(dword_10413168));
      if ( !dword_10407388 && (*(int (__thiscall **)(int))(*(_DWORD *)(v4 + 8) + 36))(v4 + 8) != LODWORD(v27) )
      {
        *(float *)&v7 = COERCE_FLOAT(sub_1007A6A0(off_103DCD78, SLODWORD(v27)));
        v27 = *(float *)&v7;
        if ( *(float *)&v7 != 0.0 )
        {
          v8 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v7 + 36))(v7);
          v9 = v27;
          *((float *)this + 12) = *v8;
          v10 = *(_DWORD *)LODWORD(v9);
          *((float *)this + 13) = v8[1];
          v11 = v8[2];
          v12 = *(int (__thiscall **)(_DWORD))(v10 + 40);
          *((float *)this + 14) = v11;
          v13 = (float *)v12(LODWORD(v9));
          *((float *)this + 15) = *v13;
          *((float *)this + 16) = v13[1];
          *((float *)this + 17) = v13[2];
        }
      }
      (*(void (__thiscall **)(int, char *, char *))(*(_DWORD *)v4 + 804))(v4, this + 48, this + 60);
    }
    (*(void (__thiscall **)(int, char *))(*(_DWORD *)dword_1044CC48 + 64))(dword_1044CC48, this + 4);
  }
  v14 = (float *)(this + 60);
  v15 = (float *)(this + 48);
  sub_101BCA10(this + 48, this + 60, this + 40);
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_1041315C + 300))(dword_1041315C) )
  {
    if ( *(float *)(dword_10439F2C + 44) <= 0.0 )
    {
      flt_10439F58 = *v15;
      flt_10439F5C = *((float *)this + 13);
      flt_10439F60 = *((float *)this + 14);
      flt_10439F64 = *v14;
      flt_10439F68 = *((float *)this + 16);
      flt_10439F6C = *((float *)this + 17);
    }
    else
    {
      sub_101358B0(v15, v14);
    }
  }
  v16 = *(double (__thiscall **)(int))(*(_DWORD *)dword_1044CC48 + 128);
  v27 = *(float *)(dword_1044CC6C + 44) - *((float *)this + 10);
  *((float *)this + 11) = fabs(v16(dword_1044CC48) - v27);
  (*(void (__thiscall **)(int, int, int))(*(_DWORD *)dword_10413184 + 64))(dword_10413184, 172, 1);
  sub_1002B550();
  sub_1002E510(1, 1, (int)"CViewRender::SetUpView->OnRenderEnd");
  sub_10135AA0((float *)this + 12, (int)(this + 60), flt_1043999C, flt_104399A8, flt_104399B4, flt_10439C48);
  v19 = *v15;
  v20 = *((float *)this + 13);
  v21 = *((float *)this + 14);
  v22 = *v14;
  v23 = *((float *)this + 16);
  v24 = *((float *)this + 17);
  if ( !v26 || (v17 = sub_100426D0(v26, *(_DWORD *)v15, *((_DWORD *)this + 13), *((_DWORD *)this + 14)), v25 = 1, !v17) )
    v25 = 0;
  sub_101BCA40(&v19);
  *v15 = v19;
  *((float *)this + 13) = v20;
  *((float *)this + 14) = v21;
  *v14 = v22;
  *((float *)this + 16) = v23;
  *((float *)this + 17) = v24;
  result = (*(int (__thiscall **)(int, float *))(*(_DWORD *)dword_1041315C + 232))(dword_1041315C, &v19);
  flt_10439984 = flt_1043996C;
  flt_10439988 = flt_10439970;
  flt_1043998C = flt_10439974;
  flt_10439990 = flt_10439978;
  flt_10439994 = flt_1043997C;
  flt_10439998 = flt_10439980;
  flt_1043996C = *v15;
  flt_10439970 = *((float *)this + 13);
  flt_10439974 = *((float *)this + 14);
  flt_10439978 = *v14;
  flt_1043997C = *((float *)this + 16);
  flt_10439980 = *((float *)this + 17);
  return result;
}
