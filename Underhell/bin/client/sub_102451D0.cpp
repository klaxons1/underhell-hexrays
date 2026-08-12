void __thiscall sub_102451D0(_WORD *this, int a2, int (__thiscall ***a3)(void *, int, int), int a4, float *a5)
{
  unsigned __int16 v5; // di
  int v7; // edi
  int v8; // ebx
  int (__thiscall ***v9)(_DWORD); // eax
  int (__thiscall ***v10)(void *, int, int); // eax
  int v11; // eax
  int v12; // ebp
  int v13; // esi
  int (__thiscall ***v14)(_DWORD); // eax
  int (__thiscall ***v15)(void *, int, int); // eax
  int v16; // eax
  int (__thiscall ***v17)(void *, int, int); // esi
  float *v18; // ecx
  int (__thiscall *v19)(void *, int, int); // edx
  int (__thiscall ***v20)(void *, int, int); // esi
  float *v21; // ecx
  int (__thiscall *v22)(void *, int, int); // edx
  int v23; // esi
  int (__thiscall ***v24)(void *, int, int); // edi
  int v25; // esi
  int v26; // edi
  int v27; // edi
  int (__thiscall ***v28)(_DWORD); // eax
  int (__thiscall ***v29)(void *, int, int); // eax
  int v30; // eax
  int v31; // esi
  int (__thiscall ***v32)(void *, int, int); // edi
  double v33; // st7
  int (__thiscall ***v34)(void *, int, int); // edi
  double v35; // st7
  int (__thiscall ***v36)(void *, int, int); // edi
  _DWORD *v37; // esi
  const char *v38; // eax
  _DWORD *v39; // esi
  float *v40; // ecx
  char *v41; // eax
  char *v42; // eax
  char *v43; // [esp-4h] [ebp-28h]
  char *v44; // [esp-4h] [ebp-28h]
  char *v45; // [esp-4h] [ebp-28h]
  float v46; // [esp+0h] [ebp-24h]
  int v47; // [esp+0h] [ebp-24h]
  int v48; // [esp+14h] [ebp-10h] BYREF
  int v49; // [esp+18h] [ebp-Ch] BYREF
  char v50[4]; // [esp+1Ch] [ebp-8h] BYREF
  char v51[4]; // [esp+20h] [ebp-4h] BYREF

  v5 = a4;
  if ( (_WORD)a4 == this[136] )
  {
    v7 = a2;
    if ( *(_BYTE *)(a2 + 60) )
    {
      v43 = (char *)sub_10230460(dword_1047CCCC, *(_WORD *)(a2 + 62));
      v9 = (int (__thiscall ***)(_DWORD))(*(int (__thiscall **)(_WORD *))(*(_DWORD *)this + 144))(this);
      v10 = (int (__thiscall ***)(void *, int, int))sub_10239950(v9, v43, 1);
      if ( v10 )
      {
        sub_10236250(v10, (int)&a4, (int)&v48, (int)&a2, (int)&v49);
        switch ( *(_DWORD *)(v7 + 64) )
        {
          case 1:
            v11 = (a4 + a2) / 2;
            break;
          case 2:
            v11 = a2 + a4;
            break;
          case 4:
            v11 = (a4 + a2) / 2;
            break;
          case 5:
            v11 = a4 + a2;
            break;
          case 7:
            v11 = (a2 + a4) / 2;
            break;
          case 8:
            v11 = a4 + a2;
            break;
          default:
            v11 = a4;
            break;
        }
        v8 = v11;
      }
      else
      {
        v8 = 0;
      }
    }
    else
    {
      v8 = 0;
    }
    v12 = v8 + (int)*a5;
    if ( *(_BYTE *)(v7 + 60)
      && (v44 = (char *)sub_10230460(dword_1047CCCC, *(_WORD *)(v7 + 62)),
          v14 = (int (__thiscall ***)(_DWORD))(*(int (__thiscall **)(_WORD *))(*(_DWORD *)this + 144))(this),
          (v15 = (int (__thiscall ***)(void *, int, int))sub_10239950(v14, v44, 1)) != 0) )
    {
      sub_10236250(v15, (int)&v48, (int)&a4, (int)&v49, (int)&a2);
      switch ( *(_DWORD *)(v7 + 64) )
      {
        case 3:
          v16 = (a4 + a2) / 2;
          break;
        case 4:
          v16 = (a2 + a4) / 2;
          break;
        case 5:
          v16 = (a4 + a2) / 2;
          break;
        case 6:
          v16 = a4 + a2;
          break;
        case 7:
          v16 = a2 + a4;
          break;
        case 8:
          v16 = a4 + a2;
          break;
        default:
          v16 = a4;
          break;
      }
      v13 = v16;
    }
    else
    {
      v13 = 0;
    }
    sub_10236140(a3, v12, v13 + (int)a5[1]);
  }
  else if ( (_WORD)a4 == this[137] )
  {
    sub_102361A0(a3, (int)*a5, (int)a5[1]);
  }
  else if ( (_WORD)a4 == this[138] )
  {
    v17 = a3;
    ((void (__thiscall *)(int (__thiscall ***)(void *, int, int), int (__thiscall ****)(void *, int, int)))(*a3)[57])(
      a3,
      &a3);
    v18 = a5;
    a5 = (float *)((unsigned __int16)a4 | 0xC00);
    a5 = (float *)(int)*v18;
    LOBYTE(a3) = (_BYTE)a5;
    a5 = (float *)(int)v18[1];
    BYTE1(a3) = (_BYTE)a5;
    v19 = (*v17)[55];
    a5 = (float *)(int)v18[2];
    BYTE2(a3) = (_BYTE)a5;
    a5 = (float *)(int)v18[3];
    HIBYTE(a3) = (_BYTE)a5;
    ((void (__thiscall *)(int (__thiscall ***)(void *, int, int), int (__thiscall ***)(void *, int, int)))v19)(v17, a3);
  }
  else if ( (_WORD)a4 == this[139] )
  {
    v20 = a3;
    ((void (__thiscall *)(int (__thiscall ***)(void *, int, int), int (__thiscall ****)(void *, int, int)))(*a3)[56])(
      a3,
      &a3);
    v21 = a5;
    a5 = (float *)((unsigned __int16)a4 | 0xC00);
    a5 = (float *)(int)*v21;
    LOBYTE(a3) = (_BYTE)a5;
    a5 = (float *)(int)v21[1];
    BYTE1(a3) = (_BYTE)a5;
    v22 = (*v20)[54];
    a5 = (float *)(int)v21[2];
    BYTE2(a3) = (_BYTE)a5;
    a5 = (float *)(int)v21[3];
    HIBYTE(a3) = (_BYTE)a5;
    ((void (__thiscall *)(int (__thiscall ***)(void *, int, int), int (__thiscall ***)(void *, int, int)))v22)(v20, a3);
  }
  else if ( (_WORD)a4 == this[140] )
  {
    v23 = sub_10244860(this, a2 + 60, 1);
    v24 = a3;
    v25 = (int)*a5 + v23;
    sub_10236170(a3, (int)&a4, (int)&a2);
    a4 = v25;
    sub_10236140(v24, v25, a2);
  }
  else if ( (_WORD)a4 == this[141] )
  {
    v26 = a2;
    if ( *(_BYTE *)(a2 + 60)
      && (v45 = (char *)sub_10230460(dword_1047CCCC, *(_WORD *)(a2 + 62)),
          v28 = (int (__thiscall ***)(_DWORD))(*(int (__thiscall **)(_WORD *))(*(_DWORD *)this + 144))(this),
          (v29 = (int (__thiscall ***)(void *, int, int))sub_10239950(v28, v45, 1)) != 0) )
    {
      sub_10236250(v29, (int)v51, (int)&a4, (int)v50, (int)&a2);
      switch ( *(_DWORD *)(v26 + 64) )
      {
        case 3:
          v30 = (a4 + a2) / 2;
          break;
        case 4:
          v30 = (a2 + a4) / 2;
          break;
        case 5:
          v30 = (a4 + a2) / 2;
          break;
        case 6:
          v30 = a4 + a2;
          break;
        case 7:
          v30 = a2 + a4;
          break;
        case 8:
          v30 = a4 + a2;
          break;
        default:
          v30 = a4;
          break;
      }
      v27 = v30;
    }
    else
    {
      v27 = 0;
    }
    v31 = v27 + (int)*a5;
    v32 = a3;
    sub_10236170(a3, (int)&v49, (int)&v48);
    v48 = v31;
    sub_10236140(v32, v49, v31);
  }
  else if ( (_WORD)a4 == this[142] )
  {
    v33 = *a5;
    v34 = a3;
    sub_102361D0(a3, (int)&a4, (int)&a5);
    a4 = (int)v33;
    sub_102361A0(v34, (int)v33, (int)a5);
  }
  else if ( (_WORD)a4 == this[143] )
  {
    v35 = *a5;
    v36 = a3;
    sub_102361D0(a3, (int)&a5, (int)&a4);
    a4 = (int)v35;
    sub_102361A0(v36, (int)a5, (int)v35);
  }
  else
  {
    v37 = (_DWORD *)sub_10229D00(32);
    if ( v37 )
    {
      v38 = sub_10230460(dword_1047CCCC, v5);
      v39 = sub_10229D20(v37, (int)v38);
    }
    else
    {
      v39 = 0;
    }
    v40 = a5;
    if ( 0.0 == a5[1] && 0.0 == a5[2] && 0.0 == a5[3] )
    {
      v46 = *a5;
      v41 = (char *)sub_10230460(dword_1047CCCC, v5);
      sub_1022ACC0(v39, v41, v46);
    }
    else
    {
      a5 = (float *)(int)a5[3];
      HIBYTE(a4) = (_BYTE)a5;
      a5 = (float *)(int)v40[2];
      BYTE2(a4) = (_BYTE)a5;
      a5 = (float *)(int)v40[1];
      a2 = (unsigned __int8)a5;
      a5 = (float *)(int)*v40;
      LOBYTE(a4) = (_BYTE)a5;
      BYTE1(a4) = a2;
      v47 = a4;
      v42 = (char *)sub_10230460(dword_1047CCCC, v5);
      sub_1022AB60(v39, v42, v47);
    }
    ((void (__thiscall *)(int (__thiscall ***)(void *, int, int), _DWORD *))(*a3)[48])(a3, v39);
    sub_1022AF00(v39);
  }
}
