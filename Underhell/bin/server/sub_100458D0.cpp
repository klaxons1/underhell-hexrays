void __thiscall sub_100458D0(int this, int a2)
{
  unsigned int v3; // eax
  int *v4; // ecx
  unsigned int v5; // eax
  int v6; // edi
  double v7; // st4
  double v8; // st6
  double v9; // st4
  double v10; // st5
  double v11; // st6
  int v12; // edi
  char *v13; // eax
  bool v14; // zf
  int (__thiscall *v15)(int, int); // edx
  const char *v16; // eax
  const char *v17; // eax
  _DWORD *v18; // eax
  _DWORD *v19; // eax
  float v20; // [esp+8h] [ebp-40h]
  const char *v21; // [esp+8h] [ebp-40h]
  const char *v22; // [esp+8h] [ebp-40h]
  _DWORD v23[12]; // [esp+18h] [ebp-30h] BYREF

  v3 = *(_DWORD *)(this + 2420);
  if ( v3 == -1 )
    goto LABEL_19;
  v4 = &off_1061BE18[4 * (*(_DWORD *)(this + 2420) & 0xFFF) + 1];
  v5 = v3 >> 12;
  if ( v4[1] != v5 || !*v4 )
    goto LABEL_19;
  if ( v4[1] == v5 )
    v6 = *v4;
  else
    v6 = 0;
  if ( (*(_DWORD *)(v6 + 252) & 0x800) != 0 )
    sub_100DAE60(v6);
  v7 = *(float *)(v6 + 584) - *(float *)(this + 720);
  v8 = v7 * v7;
  v9 = *(float *)(v6 + 580) - *(float *)(this + 716);
  v10 = v8;
  v11 = *(float *)(v6 + 588) - *(float *)(this + 724);
  v20 = v9 * v9 + v10 + v11 * v11;
  if ( off_10689708(v20) < 1.0 )
  {
    sub_10027CD0((_DWORD *)this, 0);
    goto LABEL_33;
  }
  if ( a2 == 9 )
  {
    v12 = 6;
    goto LABEL_17;
  }
  if ( a2 == 10 )
  {
    v12 = 11;
    goto LABEL_17;
  }
  v12 = sub_10044C60((_DWORD *)this);
  if ( v12 != 16 )
  {
LABEL_17:
    if ( sub_10039AE0((_DWORD *)this, v12, 0) == -1 )
      goto LABEL_33;
  }
  if ( (unsigned __int8)sub_1012B040(0) )
  {
LABEL_19:
    (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 1312))(this, 1);
    goto LABEL_33;
  }
  sub_10042370(v23, 1, v12, -1.0, 0, SLODWORD(flt_10601D4C));
  if ( *(_DWORD *)(this + 2324) == 4 )
  {
    if ( *(_DWORD *)(this + 2692) == -1 )
    {
      if ( *(_DWORD *)(this + 2696) )
      {
        v13 = *(char **)(this + 2696);
        if ( !v13 )
          v13 = (char *)String;
        v23[7] = sub_100BDF40(v13);
      }
    }
    else
    {
      v23[6] = *(_DWORD *)(this + 2692);
    }
  }
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD *, int))(**(_DWORD **)(this + 2588) + 20))(
         *(_DWORD *)(this + 2588),
         v23,
         4) )
  {
    v18 = (_DWORD *)sub_1026A890(this + 2420);
    v19 = sub_1001F410(v18);
    sub_1007DF50(v19);
  }
  else
  {
    v14 = sub_10149340(*(_DWORD *)(this + 2588)) == 0;
    v15 = *(int (__thiscall **)(int, int))(*(_DWORD *)this + 1316);
    if ( v14 )
    {
      v21 = (const char *)v15(this, a2);
      v16 = (const char *)sub_100D6390(this);
      DevWarning("%s %s failed Urgent Movement, retrying\n", v16, v21);
      return;
    }
    v22 = (const char *)v15(this, a2);
    v17 = (const char *)sub_100D6390(this);
    DevWarning("%s %s failed Urgent Movement, abandoning schedule\n", v17, v22);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 1312))(this, 11);
  }
LABEL_33:
  *(_DWORD *)(this + 2692) = -1;
  *(_DWORD *)(this + 2696) = 0;
  sub_10027CD0((_DWORD *)this, 0);
}
