void __usercall sub_1024E650(float *a1@<ecx>, int a2@<edi>)
{
  int v3; // edx
  const char *v4; // eax
  double v5; // st7
  float *v6; // eax
  double v7; // st7
  _BYTE v8[4]; // [esp+4h] [ebp-4h] BYREF

  if ( 0.0 == a1[234] )
    a1[234] = 80.0;
  if ( a1[233] == 0.0 )
    a1[233] = 10.0;
  sub_100E11A0((int)a1, &flt_106F1CB4);
  sub_10112C00((int)(a1 + 80), 1);
  sub_100E0970((int)a1, v3, 7, 0);
  v4 = *(const char **)(*(int (__thiscall **)(float *, _BYTE *, int))(*(_DWORD *)a1 + 28))(a1, v8, a2);
  if ( !v4 )
    v4 = String;
  (*(void (__thiscall **)(float *, const char *))(*(_DWORD *)a1 + 104))(a1, v4);
  a1[204] = a1[179];
  a1[205] = a1[180];
  a1[206] = a1[181];
  a1[207] = a1[179];
  a1[208] = a1[180];
  a1[209] = a1[181];
  v5 = 0.0;
  if ( 0.0 == a1[219] )
  {
    v6 = (float *)sub_10022D70();
    *v6 = a1[85] - a1[82];
    v6[1] = a1[86] - a1[83];
    v7 = a1[87] - a1[84];
    v6[2] = v7;
    a1[209] = a1[181] - v7 + 8.0;
    v5 = 0.0;
  }
  else
  {
    a1[209] = a1[181] - a1[219];
  }
  if ( v5 == a1[27] )
    a1[27] = 150.0;
  if ( a1[232] == v5 )
    a1[232] = 0.85000002;
}
