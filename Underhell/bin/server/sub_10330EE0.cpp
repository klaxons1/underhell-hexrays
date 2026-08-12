void __thiscall sub_10330EE0(int this, int a2, float *a3, char a4, char a5, float a6)
{
  float v6; // edx
  bool v8; // zf
  float v9; // ecx
  bool v10; // al
  int v11; // eax
  unsigned __int16 *v12; // eax
  int v13; // esi
  _DWORD *v14; // ebx
  int v15; // eax
  int v16; // eax
  float *v17; // eax
  int v18; // ebx
  float *v19; // eax
  double v20; // st7
  double v21; // st7
  double v22; // st7
  const char *v23; // eax
  int v24; // eax
  const char *v25; // esi
  const char *v26; // eax
  int v27; // eax
  int *v28; // ecx
  int v29; // edx
  int *v30; // ecx
  int v31; // eax
  float v32; // ecx
  float v33; // eax
  _DWORD *v34; // ebx
  void (__thiscall *v35)(int); // eax
  char v36; // [esp+1Ch] [ebp-28h]
  float v37[2]; // [esp+2Ch] [ebp-18h] BYREF
  float v38; // [esp+34h] [ebp-10h]
  float v39; // [esp+38h] [ebp-Ch] BYREF
  float v40; // [esp+3Ch] [ebp-8h]
  float v41; // [esp+40h] [ebp-4h]

  v6 = *(float *)(a2 + 8);
  v8 = *(_BYTE *)(this + 3776) == 0;
  v9 = *(float *)(a2 + 4);
  v37[0] = *(float *)a2;
  v37[1] = v9;
  v38 = v6;
  if ( v8 )
    v38 = v38 - 16.0;
  if ( LOBYTE(a6) )
  {
    v10 = (*(_DWORD *)(this + 256) & 0x8000000) != 0
       && !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 508))(dword_106B3CDC);
    v36 = v10;
    v11 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 2344))(this);
    v12 = sub_10166A90(v11, a2, (float *)(this + 728), (int)a3, 15.0, v36);
    v13 = (int)v12;
    if ( v12 )
    {
      v14 = (_DWORD *)__RTDynamicCast(
                        (int)v12,
                        0,
                        (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
                        (int)&CBaseAnimating `RTTI Type Descriptor',
                        0);
      v15 = sub_100BEF30(this, "headcrab");
      if ( v15 > 0 && v14 )
        sub_1032CA10((void *)this, v15, v14);
      if ( !(*(unsigned __int8 (__thiscall **)(int, _DWORD *))(*(_DWORD *)this + 2280))(this, v14) )
      {
LABEL_13:
        sub_1025FAC0(v13);
        return;
      }
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v13 + 76))(v13, this);
      sub_1005C620(
        (_BYTE *)(v13 + 116),
        *(_DWORD *)(this + 116),
        BYTE1(*(_DWORD *)(this + 116)),
        BYTE2(*(_DWORD *)(this + 116)),
        HIBYTE(*(_DWORD *)(this + 116)));
      if ( sub_10265BF0(1) )
      {
        v16 = *(_DWORD *)v13;
        v39 = 0.0;
        v40 = 0.0;
        v41 = 1.0;
        v17 = (float *)(*(int (__thiscall **)(int))(v16 + 576))(v13);
        sub_10265280(v17, &v39, 1, 1);
        v18 = 3;
        do
        {
          v19 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v13 + 576))(v13);
          v39 = *v19;
          v40 = v19[1];
          v41 = v19[2];
          v20 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                  dword_106B31E4,
                  -8.0,
                  8.0);
          v39 = v20 + v39;
          v21 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                  dword_106B31E4,
                  -8.0,
                  8.0);
          v40 = v21 + v40;
          v22 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                  dword_106B31E4,
                  -8.0,
                  8.0);
          v41 = v22 + v41;
          sub_10265D10(&v39, &flt_106F1CA8, 1, 50);
          --v18;
        }
        while ( v18 );
      }
    }
    goto LABEL_51;
  }
  v23 = (const char *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 2332))(this);
  v24 = sub_101811E0(v23, -1);
  v13 = v24;
  if ( v24 )
  {
    *(_DWORD *)(v24 + 2800) = *(_DWORD *)(this + 2800);
    v27 = *(_DWORD *)(v24 + 248) | 4;
    a6 = *(float *)&v27;
    if ( *(_DWORD *)(v13 + 248) != v27 )
    {
      if ( *(_BYTE *)(v13 + 84) )
      {
        *(_BYTE *)(v13 + 88) |= 1u;
      }
      else
      {
        v28 = *(int **)(v13 + 24);
        if ( v28 )
        {
          sub_100194B0(v28, 248);
          *(float *)&v27 = a6;
        }
      }
      *(float *)(v13 + 248) = *(float *)&v27;
    }
    v29 = *(_DWORD *)(v13 + 248) | *(_DWORD *)(this + 248) & 0x702;
    a6 = *(float *)&v29;
    if ( *(_DWORD *)(v13 + 248) != v29 )
    {
      if ( *(_BYTE *)(v13 + 84) )
      {
        *(_BYTE *)(v13 + 88) |= 1u;
      }
      else
      {
        v30 = *(int **)(v13 + 24);
        if ( v30 )
        {
          sub_100194B0(v30, 248);
          *(float *)&v29 = a6;
        }
      }
      *(float *)(v13 + 248) = *(float *)&v29;
    }
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v13 + 76))(v13, this);
    sub_100E0D20(v13, v37);
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    sub_100E0EA0(v13, (float *)(this + 704));
    sub_10260750((char *)v13);
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    *(float *)(*(_DWORD *)(v13 + 2604) + 20) = *(float *)(this + 708);
    v31 = sub_100BEF30(this, "headcrab");
    if ( v31 > 0 )
    {
      sub_1032CA10((void *)this, v31, (_DWORD *)v13);
      if ( (*(_DWORD *)(v13 + 252) & 0x800) != 0 )
        sub_100DAE60(v13);
      *(float *)(*(_DWORD *)(v13 + 2604) + 20) = *(float *)(v13 + 708);
      if ( (*(_DWORD *)(v13 + 252) & 0x800) != 0 )
        sub_100DAE60(v13);
      v32 = *(float *)(v13 + 712);
      v33 = *(float *)(v13 + 708);
      v39 = 0.0;
      v41 = v32;
      v40 = v33;
      sub_100E0EA0(v13, &v39);
    }
    if ( !(*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)this + 2280))(this, v13) )
      goto LABEL_13;
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v13 + 1416))(v13, 1);
    sub_100EC4A0((int *)v13, *(float *)(dword_106B31C8 + 12), 0);
    (*(void (__thiscall **)(int))(*(_DWORD *)v13 + 400))(v13);
    sub_100DD660(v13, a3);
    v34 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this);
    a6 = *(float *)(dword_106B31C8 + 12) + 1.0;
    sub_1002ABA0((float *)(v13 + 1672), &a6);
    if ( v34 )
      sub_100285C0((_DWORD *)v13, v34, 1);
    if ( (*(_DWORD *)(this + 256) & 0x8000000) != 0
      && !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 508))(dword_106B3CDC) )
    {
      (*(void (__thiscall **)(int, _DWORD, int, _DWORD, _DWORD))(*(_DWORD *)v13 + 808))(v13, 30.0, 1, 0.0, 0);
    }
    sub_1005C620(
      (_BYTE *)(v13 + 116),
      *(_DWORD *)(this + 116),
      BYTE1(*(_DWORD *)(this + 116)),
      BYTE2(*(_DWORD *)(this + 116)),
      HIBYTE(*(_DWORD *)(this + 116)));
    (*(void (__thiscall **)(int))(*(_DWORD *)v13 + 136))(v13);
LABEL_51:
    if ( a4 )
    {
      v35 = *(void (__thiscall **)(int))(*(_DWORD *)this + 2268);
      *(_BYTE *)(this + 3777) = 1;
      v35(this);
    }
    if ( a5 )
      (*(void (__thiscall **)(int, float *))(*(_DWORD *)this + 748))(this, &flt_106F1CA8);
    return;
  }
  v25 = *(const char **)(this + 92);
  if ( !v25 )
    v25 = String;
  v26 = (const char *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 2332))(this);
  Warning("**%s: Can't make %s!\n", v25, v26);
}
