bool __thiscall sub_1044CDD0(int *this, int a2, _BYTE *Src)
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
    sub_1044C560(this);
    *this = v3;
    this[2] = sub_104498A0(dword_1068FEE8[v3]);
  }
  switch ( v3 )
  {
    case 16:
      if ( !v6 )
        sub_1044B0C0((_DWORD *)this[2]);
      v7 = sub_1044EEC0(Src, &a2);
      if ( v7 )
      {
        v8 = (int *)sub_1044CA90(this);
        sub_10194990(v8, v8[3], &a2);
      }
      result = v7;
      break;
    case 17:
      if ( !v6 )
        sub_1044B0C0((_DWORD *)this[2]);
      v9 = sub_1044EC20((int)Src, (int)&a2);
      if ( v9 )
      {
        v10 = (int *)sub_1044CAD0(this);
        sub_102E6270(v10, v10[3], (float *)&a2);
      }
      result = v9;
      break;
    case 18:
      if ( !v6 )
        sub_1044B0C0((_DWORD *)this[2]);
      v11 = sub_1044EE40(Src, &a2);
      if ( v11 )
      {
        v12 = (int *)sub_1044CB10(this);
        sub_1044B0E0(v12, v12[3], &a2);
      }
      result = v11;
      break;
    case 19:
      if ( !v6 )
        sub_10241A10((_DWORD *)this[2]);
      sub_10431290(&Uuid);
      v13 = sub_1044EBD0(Src, &Uuid);
      if ( v13 )
      {
        v14 = (int *)sub_1044CB50(this);
        sub_100E1A10(v14, v14[3], (int)&Uuid);
      }
      goto LABEL_25;
    case 20:
      if ( !v6 )
        sub_1044B0C0((_DWORD *)this[2]);
      sub_10431150(&Uuid, 0, 0);
      v13 = sub_1044F210(Src, &Uuid);
      if ( v13 )
      {
        v15 = (int *)sub_1044CB90(this);
        sub_1044B320(v15, v15[3], (int)&Uuid);
      }
LABEL_25:
      sub_1002A150((int *)&Uuid);
      result = v13;
      break;
    case 21:
      if ( !v6 )
        sub_1044B0C0((_DWORD *)this[2]);
      v16 = sub_104333C0(Src, &Uuid);
      if ( v16 )
      {
        v17 = (int *)sub_1044CBD0(this);
        sub_1044B390(v17, v17[3], &Uuid);
      }
      result = v16;
      break;
    case 22:
      if ( !v6 )
        sub_1044B0C0((_DWORD *)this[2]);
      a2 = 0;
      v18 = sub_1044EF10(Src, &a2);
      if ( v18 )
      {
        v19 = (int *)sub_1044CC10(this);
        sub_1041DA00(v19, v19[3], &a2);
      }
      result = v18;
      break;
    case 23:
      if ( !v6 )
        sub_1044B0C0((_DWORD *)this[2]);
      v20 = sub_1044EC80((int)Src, (int)&Uuid);
      if ( v20 )
      {
        v21 = (int *)sub_1044CC50(this);
        sub_1044B140(v21, v21[3], (float *)&Uuid.Data1);
      }
      result = v20;
      break;
    case 24:
      if ( !v6 )
        sub_1044B0C0((_DWORD *)this[2]);
      v22 = sub_1044EDB0((int)Src, (int)&Uuid);
      if ( v22 )
      {
        v23 = (int *)sub_1044CC90(this);
        sub_1013A0E0(v23, v23[3], &Uuid);
      }
      result = v22;
      break;
    case 25:
      if ( !v6 )
        sub_1044B0C0((_DWORD *)this[2]);
      v24 = sub_1044ED00((int)Src, (int)&Uuid);
      if ( v24 )
      {
        v25 = (int *)sub_1044CCD0(this);
        sub_1044B1B0(v25, v25[3], (float *)&Uuid.Data1);
      }
      result = v24;
      break;
    case 26:
      if ( !v6 )
        sub_1044B0C0((_DWORD *)this[2]);
      v26 = sub_1044EDB0((int)Src, (int)&Uuid);
      if ( v26 )
      {
        v27 = (int *)sub_1044CD10(this);
        sub_1044B230(v27, v27[3], &Uuid);
      }
      result = v26;
      break;
    case 27:
      if ( !v6 )
        sub_1044B0C0((_DWORD *)this[2]);
      v28 = sub_1044ED00((int)Src, (int)&Uuid);
      if ( v28 )
      {
        v29 = (int *)sub_1044CD50(this);
        sub_1044B390(v29, v29[3], &Uuid);
      }
      result = v28;
      break;
    case 28:
      if ( !v6 )
        sub_1044B0C0((_DWORD *)this[2]);
      v30 = sub_1044EB50((int)Src, v33);
      if ( v30 )
      {
        v31 = (int *)sub_1044CD90(this);
        sub_1044B2B0(v31, v31[3], v33);
      }
      result = v30;
      break;
    default:
      result = 0;
      break;
  }
  return result;
}
