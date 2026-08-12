float *__thiscall sub_10244A40(_WORD *this, float *a2, int a3, int (__thiscall ***a4)(void *, int, int), int a5)
{
  float *v5; // ebp
  unsigned __int16 v6; // di
  int v8; // edi
  int v9; // eax
  int (__thiscall ***v10)(_DWORD); // eax
  bool v11; // zf
  float *result; // eax
  int (__thiscall ***v13)(_DWORD); // eax
  int (__thiscall ***v14)(void *, int, int); // eax
  int v15; // ecx
  int v16; // edx
  int (__thiscall ***v17)(void *, int, int); // eax
  int v18; // ecx
  int v19; // edx
  int (__thiscall ***v20)(void *, int, int); // eax
  int v21; // eax
  int v22; // edi
  int (__thiscall ***v23)(_DWORD); // eax
  int (__thiscall ***v24)(void *, int, int); // eax
  _DWORD *v25; // esi
  const char *v26; // eax
  _DWORD *v27; // ebx
  char *v28; // eax
  _DWORD *v29; // eax
  _DWORD *v30; // esi
  double v31; // st7
  int v32; // ecx
  int v33; // edx
  int (__thiscall ***v34)(void *, int, int); // eax
  char *v35; // [esp+0h] [ebp-20h]
  char *v36; // [esp+0h] [ebp-20h]
  char *v37; // [esp+0h] [ebp-20h]
  int v38; // [esp+18h] [ebp-8h] BYREF
  _BYTE v39[4]; // [esp+1Ch] [ebp-4h] BYREF

  v5 = a2;
  *a2 = 0.0;
  v5[1] = 0.0;
  v6 = a5;
  v5[2] = 0.0;
  v5[3] = 0.0;
  if ( v6 == this[136] )
  {
    sub_10236170(a4, (int)&a2, (int)&v38);
    v8 = a3;
    if ( *(_BYTE *)(a3 + 60) )
    {
      v35 = (char *)sub_10230460(dword_1047CCCC, *(_WORD *)(a3 + 62));
      v10 = (int (__thiscall ***)(_DWORD))(*(int (__thiscall **)(_WORD *))(*(_DWORD *)this + 144))(this);
      v9 = sub_10239950(v10, v35, 1);
      if ( v9 )
      {
        sub_10236250((int (__thiscall ***)(void *, int, int))v9, (int)&a5, (int)v39, (int)&a4, (int)&a3);
        switch ( *(_DWORD *)(v8 + 64) )
        {
          case 1:
            v9 = ((int)a4 + a5) / 2;
            break;
          case 2:
            v9 = (int)a4 + a5;
            break;
          case 4:
            v9 = ((int)a4 + a5) / 2;
            break;
          case 5:
            v9 = (int)a4 + a5;
            break;
          case 7:
            v9 = ((int)a4 + a5) / 2;
            break;
          case 8:
            v9 = (int)a4 + a5;
            break;
          default:
            v9 = a5;
            break;
        }
      }
    }
    else
    {
      v9 = 0;
    }
    v11 = *(_BYTE *)(v8 + 60) == 0;
    a5 = (int)a2 - v9;
    *v5 = (float)((int)a2 - v9);
    if ( v11
      || (v36 = (char *)sub_10230460(dword_1047CCCC, *(_WORD *)(v8 + 62)),
          v13 = (int (__thiscall ***)(_DWORD))(*(int (__thiscall **)(_WORD *))(*(_DWORD *)this + 144))(this),
          (v14 = (int (__thiscall ***)(void *, int, int))sub_10239950(v13, v36, 1)) == 0) )
    {
      a5 = v38;
      result = v5;
      v5[1] = (float)v38;
    }
    else
    {
      sub_10236250(v14, (int)v39, (int)&a5, (int)&a3, (int)&a4);
      switch ( *(_DWORD *)(v8 + 64) )
      {
        case 3:
          a5 = v38 - ((int)a4 + a5) / 2;
          result = v5;
          v5[1] = (float)a5;
          break;
        case 4:
          a5 = v38 - ((int)a4 + a5) / 2;
          result = v5;
          v5[1] = (float)a5;
          break;
        case 5:
          a5 = v38 - ((int)a4 + a5) / 2;
          result = v5;
          v5[1] = (float)a5;
          break;
        case 6:
          a5 = v38 - ((_DWORD)a4 + a5);
          result = v5;
          v5[1] = (float)a5;
          break;
        case 7:
          a5 = v38 - ((_DWORD)a4 + a5);
          result = v5;
          v5[1] = (float)a5;
          break;
        case 8:
          a5 = v38 - ((_DWORD)a4 + a5);
          result = v5;
          v5[1] = (float)a5;
          break;
        default:
          a5 = v38 - a5;
          result = v5;
          v5[1] = (float)a5;
          break;
      }
    }
    return result;
  }
  if ( v6 == this[137] )
  {
    sub_102361D0(a4, (int)&a5, (int)&a4);
    result = v5;
    *v5 = (float)a5;
    v5[1] = (float)(int)a4;
    return result;
  }
  if ( v6 == this[138] )
  {
    ((void (__thiscall *)(int (__thiscall ***)(void *, int, int), int *))(*a4)[57])(a4, &a5);
    v15 = HIBYTE(a5);
    v16 = BYTE1(a5);
    *v5 = (float)(unsigned __int8)a5;
    v17 = (int (__thiscall ***)(void *, int, int))BYTE2(a5);
    a5 = v15;
    a4 = v17;
    result = v5;
    v5[1] = (float)v16;
    v5[2] = (float)(int)a4;
    v5[3] = (float)a5;
    return result;
  }
  if ( v6 == this[139] )
  {
    ((void (__thiscall *)(int (__thiscall ***)(void *, int, int), int *))(*a4)[56])(a4, &a5);
    v18 = HIBYTE(a5);
    v19 = BYTE1(a5);
    *v5 = (float)(unsigned __int8)a5;
    v20 = (int (__thiscall ***)(void *, int, int))BYTE2(a5);
    a5 = v18;
    a4 = v20;
    result = v5;
    v5[1] = (float)v19;
    v5[2] = (float)(int)a4;
    v5[3] = (float)a5;
    return result;
  }
  if ( v6 == this[140] )
  {
    sub_10236170(a4, (int)&a5, (int)&a4);
    v21 = sub_10244860(this, a3 + 60, 1);
    a5 -= v21;
    result = v5;
    *v5 = (float)a5;
    return result;
  }
  if ( v6 != this[141] )
  {
    if ( v6 == this[142] )
    {
      sub_102361D0(a4, (int)&a5, (int)&a4);
      result = v5;
      *v5 = (float)a5;
      return result;
    }
    if ( v6 == this[143] )
    {
      sub_102361D0(a4, (int)&a4, (int)&a5);
      result = v5;
      *v5 = (float)a5;
      return result;
    }
    v25 = (_DWORD *)sub_10229D00(32);
    if ( v25 )
    {
      v26 = sub_10230460(dword_1047CCCC, v6);
      v27 = sub_10229D20(v25, (int)v26);
    }
    else
    {
      v27 = 0;
    }
    if ( !((unsigned __int8 (__thiscall *)(int (__thiscall ***)(void *, int, int), _DWORD *))(*a4)[11])(a4, v27) )
      goto LABEL_58;
    v28 = (char *)sub_10230460(dword_1047CCCC, v6);
    v29 = sub_1022A6A0(v27, v28, 0);
    v30 = v29;
    if ( !v29 )
      goto LABEL_58;
    if ( sub_1022AEE0(v29, 0) == 3 )
    {
      *v5 = sub_1022A940(v30, 0, 0.0);
      v31 = 0.0;
      v5[1] = 0.0;
      v5[2] = 0.0;
    }
    else
    {
      if ( sub_1022AEE0(v30, 0) != 6 )
      {
LABEL_58:
        sub_1022AF00(v27);
        return v5;
      }
      sub_1022AA10(v30, &a5, 0);
      v32 = HIBYTE(a5);
      v33 = BYTE1(a5);
      *v5 = (float)(unsigned __int8)a5;
      v34 = (int (__thiscall ***)(void *, int, int))BYTE2(a5);
      a5 = v32;
      a4 = v34;
      v5[1] = (float)v33;
      v5[2] = (float)(int)a4;
      v31 = (double)a5;
    }
    v5[3] = v31;
    goto LABEL_58;
  }
  sub_10236170(a4, (int)v39, (int)&a2);
  v22 = a3;
  if ( *(_BYTE *)(a3 + 60)
    && (v37 = (char *)sub_10230460(dword_1047CCCC, *(_WORD *)(a3 + 62)),
        v23 = (int (__thiscall ***)(_DWORD))(*(int (__thiscall **)(_WORD *))(*(_DWORD *)this + 144))(this),
        (v24 = (int (__thiscall ***)(void *, int, int))sub_10239950(v23, v37, 1)) != 0) )
  {
    sub_10236250(v24, (int)&v38, (int)&a5, (int)&a3, (int)&a4);
    switch ( *(_DWORD *)(v22 + 64) )
    {
      case 3:
        a5 = (int)a2 - ((int)a4 + a5) / 2;
        result = v5;
        *v5 = (float)a5;
        break;
      case 4:
        a5 = (int)a2 - ((int)a4 + a5) / 2;
        result = v5;
        *v5 = (float)a5;
        break;
      case 5:
        a5 = (int)a2 - ((int)a4 + a5) / 2;
        result = v5;
        *v5 = (float)a5;
        break;
      case 6:
        a5 = (char *)a2 - ((char *)a4 + a5);
        result = v5;
        *v5 = (float)a5;
        break;
      case 7:
        a5 = (char *)a2 - ((char *)a4 + a5);
        result = v5;
        *v5 = (float)a5;
        break;
      case 8:
        a5 = (char *)a2 - ((char *)a4 + a5);
        result = v5;
        *v5 = (float)a5;
        break;
      default:
        a5 = (int)a2 - a5;
        result = v5;
        *v5 = (float)a5;
        break;
    }
  }
  else
  {
    a5 = (int)a2;
    result = v5;
    *v5 = (float)(int)a2;
  }
  return result;
}
