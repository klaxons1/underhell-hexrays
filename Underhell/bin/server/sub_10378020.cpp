char __thiscall sub_10378020(int this, int *a2, int a3)
{
  int v6; // esi
  int v7; // eax
  float *v8; // eax
  _DWORD *v9; // esi
  double v10; // st7
  _DWORD *v11; // eax
  int v12; // edx
  float *v13; // eax
  float v14; // [esp+4h] [ebp-98h]
  float v15[3]; // [esp+1Ch] [ebp-80h] BYREF
  _BYTE v16[12]; // [esp+28h] [ebp-74h] BYREF
  float v17[3]; // [esp+4Ch] [ebp-50h] BYREF
  _BYTE v18[12]; // [esp+58h] [ebp-44h] BYREF
  int v19[3]; // [esp+64h] [ebp-38h] BYREF
  int v20; // [esp+70h] [ebp-2Ch] BYREF
  float v21; // [esp+74h] [ebp-28h]
  float v22; // [esp+78h] [ebp-24h]
  int v23[3]; // [esp+7Ch] [ebp-20h] BYREF
  float v24; // [esp+88h] [ebp-14h] BYREF
  float v25; // [esp+8Ch] [ebp-10h]
  float v26; // [esp+90h] [ebp-Ch]
  int v27; // [esp+94h] [ebp-8h]
  float v28; // [esp+98h] [ebp-4h]
  char v29; // [esp+A7h] [ebp+Bh]

  if ( !a2 )
    return 0;
  v6 = *(_DWORD *)(dword_106E86DC + 48) - *(_DWORD *)(this + 4540);
  v7 = a2[23];
  v27 = v6;
  if ( v7 == dword_106E8514 || (LOBYTE(v28) = 0, v7 == dword_106E8510) )
    LOBYTE(v28) = 1;
  if ( *(_BYTE *)(this + 4228) )
  {
    sub_100BCCA0((void *)this, dword_10674308, (int)v19, (int)v18);
    sub_10371C80((_DWORD *)this, dword_10674308);
  }
  else
  {
    sub_100BCCA0((void *)this, dword_1067430C, (int)v19, (int)v18);
    sub_10371C80((_DWORD *)this, dword_1067430C);
  }
  v14 = v28;
  *(_BYTE *)(this + 4228) = *(_BYTE *)(this + 4228) == 0;
  sub_10371D30(this, (float *)v23, (float *)v19, a2, v14, v6, a3);
  v29 = 0;
  if ( *(_DWORD *)(dword_106E8ACC + 48) )
    v29 = sub_10372130((void *)this, (int)v23);
  v15[0] = *(float *)v23;
  v15[1] = *(float *)&v23[1];
  v15[2] = *(float *)&v23[2];
  sub_10421D80(v15, v16);
  if ( !*(_DWORD *)(this + 4624) || v6 < 2 || (v6 & 1) != 0 )
  {
    *(float *)&v20 = 0.034899998;
    v21 = 0.034899998;
    v22 = 0.034899998;
    v8 = sub_10022E00(v15, (float *)&v20, 1.0);
  }
  else
  {
    *(float *)&v20 = 0.0043649999;
    v21 = 0.0043649999;
    v22 = 0.0043649999;
    v8 = sub_10022E00(v15, (float *)&v20, 1.0);
  }
  v24 = *v8;
  v25 = v8[1];
  v26 = v8[2];
  sub_10422540(&v24, v17);
  v9 = (_DWORD *)sub_101811E0("hunter_flechette", -1);
  sub_1025F370(v9, (float *)v19, 0);
  sub_100E0EA0((int)v9, v17);
  (*(void (__thiscall **)(_DWORD *))(*v9 + 96))(v9);
  (*(void (__thiscall **)(_DWORD *))(*v9 + 136))(v9);
  (*(void (__thiscall **)(_DWORD *, int))(*v9 + 76))(v9, this);
  sub_100EAB80(v9, 16);
  v10 = *(float *)(dword_106E8724 + 44);
  v24 = v24 * v10;
  v25 = v25 * v10;
  v26 = v10 * v26;
  sub_103728D0((int)v9, &v24, SLOBYTE(v28));
  if ( sub_10374570((_DWORD *)this, a2, SLOBYTE(v28)) )
  {
    v11 = (_DWORD *)(*(int (__thiscall **)(int *))(*a2 + 8))(a2);
    v12 = off_10674260;
    v9[426] = *v11;
    sub_100EC3F0(v9, (int)sub_103726A0, *(float *)(dword_106B31C8 + 12), v12);
  }
  if ( v27 == 1 && (*(int (__thiscall **)(int *))(*a2 + 220))(a2) == 3 )
  {
    v13 = (float *)(*(int (__thiscall **)(int *, int *))(*a2 + 504))(a2, &v20);
    sub_1023D4B0(83886088, v13, 180, 2.0, this, 0, 0);
  }
  return v29;
}
