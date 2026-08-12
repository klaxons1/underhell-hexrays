int __thiscall sub_10099500(int this, int a2, int a3, int a4, float i)
{
  int result; // eax
  int v7; // esi
  _DWORD *v8; // eax
  int v9; // edi
  float v10; // esi
  int v11; // esi
  float v12; // esi
  int v13; // edi
  int v14; // eax
  int v15; // esi
  double v16; // st4
  double v17; // st6
  double v18; // st4
  double v19; // st5
  double v20; // st6
  _DWORD *v21; // ecx
  const char *v22; // eax
  int v23; // esi
  int v24; // esi
  char *v25; // eax
  const char *v26; // eax
  double v27; // st4
  double v28; // st6
  double v29; // st4
  double v30; // st5
  double v31; // st6
  int v32; // edi
  _DWORD *v33; // edi
  char *v34; // eax
  const char *v35; // eax
  int v36; // edi
  const char *v37; // eax
  int v38; // edx
  const char *v39; // eax
  const char *v40; // eax
  const char *v41; // eax
  const char *v42; // eax
  _DWORD *v43; // esi
  int v44; // eax
  _DWORD *v45; // edi
  int v46; // ecx
  int v47; // edx
  const char *v48; // [esp-Ch] [ebp-1024h]
  const char *v49; // [esp-Ch] [ebp-1024h]
  _DWORD Src[512]; // [esp+4h] [ebp-1014h] BYREF
  int v51; // [esp+804h] [ebp-814h]
  _DWORD *v52; // [esp+808h] [ebp-810h]
  _DWORD v53[512]; // [esp+80Ch] [ebp-80Ch] BYREF
  int v54; // [esp+100Ch] [ebp-Ch]
  _DWORD *v55; // [esp+1010h] [ebp-8h]
  int v56; // [esp+1014h] [ebp-4h] BYREF

  if ( a3 && *(_DWORD *)(this + 820) == -1 )
    return DevMsg(2, "ai_relationship cannot revert changes before they are applied!\n");
  v7 = *(_DWORD *)(this + 804);
  v51 = 0;
  v54 = 0;
  v52 = Src;
  v55 = v53;
  v8 = (_DWORD *)sub_10162BE0(&v56, "!activator");
  v9 = a4;
  if ( v7 == *v8 )
  {
    v10 = *(float *)&a4;
  }
  else
  {
    if ( v7 != *(_DWORD *)sub_10162BE0(&a4, "!caller") )
      goto LABEL_11;
    v10 = i;
  }
  if ( v10 != 0.0 && (*(int (__thiscall **)(float))(*(_DWORD *)LODWORD(v10) + 288))(COERCE_FLOAT(LODWORD(v10))) )
  {
    a4 = (*(int (__thiscall **)(float))(*(_DWORD *)LODWORD(v10) + 288))(COERCE_FLOAT(LODWORD(v10)));
    sub_100994B0(Src, &a4);
  }
LABEL_11:
  v11 = *(_DWORD *)(this + 212);
  if ( v11 == *(_DWORD *)sub_10162BE0(&a4, "!activator") )
  {
    v12 = *(float *)&v9;
LABEL_15:
    if ( v12 != 0.0 && (*(int (__thiscall **)(float))(*(_DWORD *)LODWORD(v12) + 288))(COERCE_FLOAT(LODWORD(v12))) )
    {
      i = COERCE_FLOAT((*(int (__thiscall **)(float))(*(_DWORD *)LODWORD(v12) + 288))(COERCE_FLOAT(LODWORD(v12))));
      sub_100994B0(v53, &i);
    }
    goto LABEL_18;
  }
  if ( v11 == *(_DWORD *)sub_10162BE0(&a4, "!caller") )
  {
    v12 = i;
    goto LABEL_15;
  }
LABEL_18:
  v13 = 1;
  for ( i = *(float *)(this + 824) * *(float *)(this + 824); v13 <= *(_DWORD *)(dword_106B31C8 + 20); ++v13 )
  {
    if ( v51 == 512 || v54 == 512 )
    {
      v22 = (const char *)sub_100D6390(this);
      DevMsg("Too many entities handled by ai_relationship %s\n", v22);
      break;
    }
    v14 = sub_1025FB50(v13);
    v15 = v14;
    if ( v14 )
    {
      if ( sub_10099360((_DWORD *)this, v14) )
      {
        if ( 0.0 != *(float *)(this + 824) )
        {
          if ( (*(_DWORD *)(v15 + 252) & 0x800) != 0 )
            sub_100DAE60(v15);
          if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
            sub_100DAE60(this);
          v16 = *(float *)(this + 584) - *(float *)(v15 + 584);
          v17 = v16 * v16;
          v18 = *(float *)(this + 580) - *(float *)(v15 + 580);
          v19 = v17;
          v20 = *(float *)(this + 588) - *(float *)(v15 + 588);
          if ( v18 * v18 + v19 + v20 * v20 > i )
            continue;
        }
        v21 = Src;
        goto LABEL_32;
      }
      if ( sub_100993C0((_DWORD *)this, v15) )
      {
        v21 = v53;
LABEL_32:
        a4 = v15;
        sub_100994B0(v21, &a4);
      }
    }
  }
  v23 = 0;
  a4 = 0;
  if ( sub_1016BFB0(&dword_10690DF8) <= 0 )
    goto LABEL_73;
  while ( v51 != 512 && v54 != 512 )
  {
    v24 = *(_DWORD *)(sub_1002A680(&dword_10690DF8) + 4 * v23);
    if ( v24 )
    {
      v25 = *(char **)(this + 804);
      if ( *(char **)(v24 + 260) == v25 )
        goto LABEL_117;
      if ( !v25 )
        v25 = (char *)String;
      if ( (unsigned __int8)sub_100D6190(v25) )
        goto LABEL_117;
      v26 = *(const char **)(this + 804);
      if ( *(const char **)(v24 + 92) == v26 )
        goto LABEL_117;
      if ( !v26 )
        v26 = String;
      if ( (unsigned __int8)sub_100D6240(v26) )
      {
LABEL_117:
        if ( 0.0 != *(float *)(this + 824) )
        {
          if ( (*(_DWORD *)(v24 + 252) & 0x800) != 0 )
            sub_100DAE60(v24);
          if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
            sub_100DAE60(this);
          v27 = *(float *)(this + 584) - *(float *)(v24 + 584);
          v28 = v27 * v27;
          v29 = *(float *)(this + 580) - *(float *)(v24 + 580);
          v30 = v28;
          v31 = *(float *)(this + 588) - *(float *)(v24 + 588);
          if ( v29 * v29 + v30 + v31 * v31 > i )
            goto LABEL_70;
        }
        v32 = v51++;
        v52 = Src;
        if ( v51 - v32 - 1 > 0 )
          memcpy(&Src[v32 + 1], &Src[v32], 4 * (v51 - v32 - 1));
        v33 = &Src[v32];
      }
      else
      {
        v34 = *(char **)(this + 212);
        if ( *(char **)(v24 + 260) != v34 )
        {
          if ( !v34 )
            v34 = (char *)String;
          if ( !(unsigned __int8)sub_100D6190(v34) )
          {
            v35 = *(const char **)(this + 212);
            if ( *(const char **)(v24 + 92) != v35 )
            {
              if ( !v35 )
                v35 = String;
              if ( !(unsigned __int8)sub_100D6240(v35) )
                goto LABEL_70;
            }
          }
        }
        v36 = v54++;
        v55 = v53;
        if ( v54 - v36 - 1 > 0 )
          memcpy(&v53[v36 + 1], &v53[v36], 4 * (v54 - v36 - 1));
        v33 = &v53[v36];
      }
      if ( v33 )
        *v33 = v24;
    }
LABEL_70:
    v23 = ++a4;
    if ( v23 >= sub_1016BFB0(&dword_10690DF8) )
      goto LABEL_73;
  }
  v37 = (const char *)sub_100D6390(this);
  DevMsg("Too many entities handled by ai_relationship %s\n", v37);
LABEL_73:
  v38 = v51;
  if ( !v51 )
  {
    v39 = *(const char **)(this + 804);
    if ( !v39 )
      v39 = String;
    v48 = v39;
    v40 = (const char *)sub_100D6390(this);
    return DevMsg(2, "ai_relationship '%s' finds no subject(s) called: %s\n", v40, v48);
  }
  result = v54;
  if ( !v54 )
  {
    v41 = *(const char **)(this + 212);
    if ( !v41 )
      v41 = String;
    v49 = v41;
    v42 = (const char *)sub_100D6390(this);
    return DevMsg(2, "ai_relationship '%s' finds no target(s) called: %s\n", v42, v49);
  }
  a4 = 0;
  if ( v51 <= 0 )
    return result;
  while ( 2 )
  {
    v43 = (_DWORD *)Src[a4];
    i = 0.0;
    if ( result <= 0 )
      goto LABEL_107;
    while ( 2 )
    {
      v44 = *(_DWORD *)(this + 820);
      v45 = (_DWORD *)v53[LODWORD(i)];
      if ( v44 == -1 && !a3 )
      {
        *(_DWORD *)(this + 820) = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v43 + 1080))(v43, v53[LODWORD(i)]);
        *(_DWORD *)(this + 828) = (*(int (__thiscall **)(_DWORD *, _DWORD *))(*v43 + 1084))(v43, v45);
        goto LABEL_86;
      }
      if ( a3 == 1 )
      {
        (*(void (__thiscall **)(_DWORD *, _DWORD *, int, _DWORD))(*v43 + 1120))(v43, v45, v44, *(_DWORD *)(this + 828));
        if ( *(_BYTE *)(this + 832) )
        {
          v46 = *(_DWORD *)(this + 828);
          v47 = *(_DWORD *)(this + 820);
LABEL_104:
          (*(void (__thiscall **)(_DWORD *, _DWORD *, int, int))(*v45 + 1120))(v45, v43, v47, v46);
        }
      }
      else if ( a3 == 2 )
      {
        (*(void (__thiscall **)(_DWORD *, _DWORD))(*v43 + 1124))(v43, v53[LODWORD(i)]);
        if ( *(_BYTE *)(this + 832) )
          (*(void (__thiscall **)(_DWORD *, _DWORD *))(*v45 + 1124))(v45, v43);
      }
      else
      {
LABEL_86:
        if ( (*(int (__thiscall **)(_DWORD *, _DWORD *))(*v43 + 1080))(v43, v45) != a2
          || (*(int (__thiscall **)(_DWORD *, _DWORD *))(*v43 + 1084))(v43, v45) != *(_DWORD *)(this + 812)
          || (*(_BYTE *)(this + 248) & 1) != 0
          || (*(_DWORD *)(this + 248) & 2) != 0 )
        {
          (*(void (__thiscall **)(_DWORD *, _DWORD *, int, _DWORD))(*v43 + 1120))(v43, v45, a2, *(_DWORD *)(this + 812));
          if ( (*(_BYTE *)(this + 248) & 1) != 0 )
          {
            if ( v45 )
            {
              v56 = sub_100D7680(v43);
              if ( v56 )
              {
                if ( (v45[63] & 0x800) != 0 )
                  sub_100DAE60(v45);
                (*(void (__thiscall **)(int, _DWORD *, _DWORD *, _DWORD))(*(_DWORD *)v56 + 1876))(
                  v56,
                  v45,
                  v45 + 145,
                  0);
              }
            }
          }
          if ( (*(_DWORD *)(this + 248) & 2) != 0 )
          {
            if ( v45 )
            {
              v56 = sub_100D7680(v45);
              if ( v56 )
              {
                if ( (v43[63] & 0x800) != 0 )
                  sub_100DAE60(v43);
                (*(void (__thiscall **)(int, _DWORD *, _DWORD *, _DWORD))(*(_DWORD *)v56 + 1876))(
                  v56,
                  v43,
                  v43 + 145,
                  0);
              }
            }
          }
          if ( *(_BYTE *)(this + 832) )
          {
            v46 = *(_DWORD *)(this + 812);
            v47 = a2;
            goto LABEL_104;
          }
        }
      }
      result = v54;
      ++LODWORD(i);
      if ( SLODWORD(i) < v54 )
        continue;
      break;
    }
    v38 = v51;
LABEL_107:
    if ( ++a4 < v38 )
      continue;
    return result;
  }
}
