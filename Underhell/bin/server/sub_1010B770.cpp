int __usercall sub_1010B770@<eax>(_DWORD *a1@<ecx>, int a2@<edi>)
{
  char *v3; // eax
  float *v4; // edi
  int v5; // edx
  const char *v6; // eax
  double v7; // st7
  float *v8; // eax
  float v9; // ecx
  float v10; // edx
  float v11; // eax
  long double v12; // st7
  long double v13; // st5
  long double v14; // st6
  long double v15; // st7
  double v16; // st4
  double v17; // st6
  double v18; // st4
  double v19; // st5
  double v20; // st6
  int v21; // eax
  int v22; // ecx
  int v23; // edx
  int v24; // eax
  float v26; // [esp+Ch] [ebp-42Ch]
  float v27; // [esp+10h] [ebp-428h]
  char Buffer[1024]; // [esp+1Ch] [ebp-41Ch] BYREF
  float v30[6]; // [esp+41Ch] [ebp-1Ch] BYREF
  char *Str; // [esp+434h] [ebp-4h] BYREF

  if ( a1[245] )
  {
    sub_10429A00(Buffer, 0x400u, "Buttons.snd%d", a1[245]);
    sub_10162BE0(&Str, Buffer);
    v3 = Str;
    a1[248] = Str;
    if ( !v3 )
      v3 = (char *)String;
    sub_1023B8B0(v3);
  }
  else
  {
    a1[248] = 0;
  }
  (*(void (__thiscall **)(_DWORD *))(*a1 + 100))(a1);
  if ( (a1[62] & 0x1000) != 0 )
  {
    sub_100EC3F0(a1, (int)sub_10107F90, 0.0, 0);
    v27 = *(float *)(dword_106B31C8 + 12) + 0.5;
    sub_100EC4A0(a1, v27, 0);
  }
  v30[0] = *((float *)a1 + 229);
  v4 = (float *)(a1 + 229);
  v30[1] = *((float *)a1 + 230);
  v30[2] = *((float *)a1 + 231);
  sub_10422220(v30, a1 + 229);
  sub_100E0970((int)a1, v5, 7, 0);
  sub_10112C00(1);
  v6 = *(const char **)(*(int (__thiscall **)(_DWORD *, char **, int))(*a1 + 28))(a1, &Str, a2);
  if ( !v6 )
    v6 = String;
  (*(void (__thiscall **)(_DWORD *, const char *))(*a1 + 104))(a1, v6);
  v7 = 0.0;
  if ( 0.0 == *((float *)a1 + 27) )
    *((float *)a1 + 27) = 40.0;
  if ( *((_BYTE *)a1 + 225) != 2 )
  {
    (*(void (__thiscall **)(_DWORD *, int))(*a1 + 480))(a1, (int)a1 + 225);
    v7 = 0.0;
    *((_BYTE *)a1 + 225) = 2;
  }
  if ( v7 == *((float *)a1 + 202) )
    *((float *)a1 + 202) = 1.0;
  if ( *((float *)a1 + 203) == v7 )
    *((float *)a1 + 203) = 4.0;
  a1[200] = 1;
  *((float *)a1 + 204) = *((float *)a1 + 179);
  *((float *)a1 + 205) = *((float *)a1 + 180);
  *((float *)a1 + 206) = *((float *)a1 + 181);
  v8 = (float *)sub_10022D70();
  *v8 = *((float *)a1 + 85) - *((float *)a1 + 82);
  v8[1] = *((float *)a1 + 86) - *((float *)a1 + 83);
  v8[2] = *((float *)a1 + 87) - *((float *)a1 + 84);
  v9 = *v8;
  v10 = v8[1];
  v11 = v8[2];
  v30[3] = v9;
  v30[4] = v10;
  v30[5] = v11;
  v12 = fabs((v10 - 2.0) * *((float *)a1 + 230))
      + fabs((v9 - 2.0) * *v4)
      + fabs((v11 - 2.0) * *((float *)a1 + 231))
      - *((float *)a1 + 203);
  v13 = *v4 * v12;
  v14 = *((float *)a1 + 230) * v12 + *((float *)a1 + 205);
  v15 = v12 * *((float *)a1 + 231) + *((float *)a1 + 206);
  *((float *)a1 + 207) = v13 + *((float *)a1 + 204);
  *((float *)a1 + 208) = v14;
  *((float *)a1 + 209) = v15;
  v16 = *((float *)a1 + 208) - *((float *)a1 + 205);
  v17 = v16 * v16;
  v18 = *((float *)a1 + 207) - *((float *)a1 + 204);
  v19 = v17;
  v20 = *((float *)a1 + 209) - *((float *)a1 + 206);
  v26 = v18 * v18 + v19 + v20 * v20;
  if ( off_10689708(v26) < 1.0 || (a1[62] & 1) != 0 )
  {
    *((float *)a1 + 207) = *((float *)a1 + 204);
    *((float *)a1 + 208) = *((float *)a1 + 205);
    *((float *)a1 + 209) = *((float *)a1 + 206);
  }
  *((_BYTE *)a1 + 928) = -1.0 == *((float *)a1 + 202);
  v21 = a1[62];
  *((_BYTE *)a1 + 929) = 0;
  if ( (v21 & 0x800) != 0 )
    *((_BYTE *)a1 + 976) = 1;
  v22 = -((v21 & 0x400) != 0);
  v23 = BYTE1(v21) & 1;
  v24 = *a1;
  a1[50] = (unsigned int)sub_1010A910 & v22;
  a1[49] = v23 != 0 ? sub_1010AA70 : 0;
  return (*(int (__thiscall **)(_DWORD *))(v24 + 584))(a1);
}
