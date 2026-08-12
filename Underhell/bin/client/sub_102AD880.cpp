bool __thiscall sub_102AD880(int *this, int a2, _BYTE *Src)
{
  int v3; // edi
  bool result; // al
  bool v6; // bl
  char v7; // bl
  int *v8; // eax
  char v9; // bl
  int *v10; // eax
  char v11; // bl
  int *v12; // eax
  char v13; // bl
  int *v14; // eax
  int *v15; // eax
  bool v16; // bl
  int *v17; // eax
  char v18; // bl
  int *v19; // eax
  char v20; // bl
  int *v21; // eax
  char v22; // bl
  int *v23; // eax
  char v24; // bl
  int *v25; // eax
  char v26; // bl
  int *v27; // eax
  char v28; // bl
  int *v29; // eax
  char v30; // bl
  int *v31; // eax
  UUID Uuid; // [esp+8h] [ebp-50h] BYREF
  _BYTE v33[64]; // [esp+18h] [ebp-40h] BYREF

  v3 = a2;
  if ( (unsigned int)(a2 - 15) > 0xD )
    return 0;
  v6 = *this == a2;
  if ( *this != a2 )
  {
    sub_102AD010(this);
    *this = v3;
    this[2] = sub_102AAF30(dword_103FEFB8[v3]);
  }
  switch ( v3 )
  {
    case 16:
      if ( !v6 )
        sub_102ABC30((_DWORD *)this[2]);
      v7 = sub_102AFF50(Src, &a2);
      if ( v7 )
      {
        v8 = (int *)sub_102AD540(this);
        sub_100C2010(v8, v8[3], &a2);
      }
      result = v7;
      break;
    case 17:
      if ( !v6 )
        sub_102ABC30((_DWORD *)this[2]);
      v9 = sub_102AFCB0((int)Src, (int)&a2);
      if ( v9 )
      {
        v10 = (int *)sub_102AD580(this);
        sub_102ABC50(v10, v10[3], (float *)&a2);
      }
      result = v9;
      break;
    case 18:
      if ( !v6 )
        sub_102ABC30((_DWORD *)this[2]);
      v11 = sub_102AFED0(Src, &a2);
      if ( v11 )
      {
        v12 = (int *)sub_102AD5C0(this);
        sub_10088160(v12, v12[3], &a2);
      }
      result = v11;
      break;
    case 19:
      if ( !v6 )
        sub_102ABC30((_DWORD *)this[2]);
      sub_1022D3E0(&Uuid);
      v13 = sub_102AFC60(Src, &Uuid);
      if ( v13 )
      {
        v14 = (int *)sub_102AD600(this);
        sub_100CCED0(v14, v14[3], (int)&Uuid);
      }
      goto LABEL_25;
    case 20:
      if ( !v6 )
        sub_102ABC30((_DWORD *)this[2]);
      sub_1022D2A0(&Uuid, 0, 0);
      v13 = sub_102B02A0(Src, &Uuid);
      if ( v13 )
      {
        v15 = (int *)sub_102AD640(this);
        sub_102ABF20(v15, v15[3], (int)&Uuid);
      }
LABEL_25:
      sub_10008580((int *)&Uuid);
      result = v13;
      break;
    case 21:
      if ( !v6 )
        sub_102ABC30((_DWORD *)this[2]);
      v16 = sub_102331A0(Src, &Uuid);
      if ( v16 )
      {
        v17 = (int *)sub_102AD680(this);
        sub_102ABE30(v17, v17[3], &Uuid);
      }
      result = v16;
      break;
    case 22:
      if ( !v6 )
        sub_102ABC30((_DWORD *)this[2]);
      a2 = 0;
      v18 = sub_102AFFA0(Src, &a2);
      if ( v18 )
      {
        v19 = (int *)sub_102AD6C0(this);
        sub_100C2010(v19, v19[3], &a2);
      }
      result = v18;
      break;
    case 23:
      if ( !v6 )
        sub_102ABC30((_DWORD *)this[2]);
      v20 = sub_102AFD10((int)Src, (int)&Uuid);
      if ( v20 )
      {
        v21 = (int *)sub_102AD700(this);
        sub_102ABCC0(v21, v21[3], (float *)&Uuid.Data1);
      }
      result = v20;
      break;
    case 24:
      if ( !v6 )
        sub_102ABC30((_DWORD *)this[2]);
      v22 = sub_102AFE40((int)Src, (int)&Uuid);
      if ( v22 )
      {
        v23 = (int *)sub_102AD740(this);
        sub_1003BE10(v23, v23[3], &Uuid);
      }
      result = v22;
      break;
    case 25:
      if ( !v6 )
        sub_102ABC30((_DWORD *)this[2]);
      v24 = sub_102AFD90((int)Src, (int)&Uuid);
      if ( v24 )
      {
        v25 = (int *)sub_102AD780(this);
        sub_102ABD30(v25, v25[3], (float *)&Uuid.Data1);
      }
      result = v24;
      break;
    case 26:
      if ( !v6 )
        sub_102ABC30((_DWORD *)this[2]);
      v26 = sub_102AFE40((int)Src, (int)&Uuid);
      if ( v26 )
      {
        v27 = (int *)sub_102AD7C0(this);
        sub_102ABDB0(v27, v27[3], &Uuid);
      }
      result = v26;
      break;
    case 27:
      if ( !v6 )
        sub_102ABC30((_DWORD *)this[2]);
      v28 = sub_102AFD90((int)Src, (int)&Uuid);
      if ( v28 )
      {
        v29 = (int *)sub_102AD800(this);
        sub_102ABE30(v29, v29[3], &Uuid);
      }
      result = v28;
      break;
    case 28:
      if ( !v6 )
        sub_102ABC30((_DWORD *)this[2]);
      v30 = sub_102AFBE0((int)Src, v33);
      if ( v30 )
      {
        v31 = (int *)sub_102AD840(this);
        sub_102ABEB0(v31, v31[3], v33);
      }
      result = v30;
      break;
    default:
      result = 0;
      break;
  }
  return result;
}
