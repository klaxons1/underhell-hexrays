int __thiscall sub_1005C5B0(int this)
{
  int v2; // ebx
  double v3; // st7
  int v4; // edi
  int v5; // eax
  float *v6; // eax
  double v7; // st7
  int v8; // eax
  int v9; // eax
  int v10; // ecx
  double v11; // st7
  int v12; // eax
  int v13; // eax
  float *v14; // eax
  int v15; // esi
  int v16; // edi
  int result; // eax
  float v18; // [esp+20h] [ebp-30h]
  float v19[3]; // [esp+34h] [ebp-1Ch] BYREF
  float v20; // [esp+40h] [ebp-10h]
  int v21; // [esp+44h] [ebp-Ch]
  int v22; // [esp+48h] [ebp-8h]
  int v23; // [esp+4Ch] [ebp-4h]

  *(float *)(this + 10404) = 0.1;
  v2 = 0;
  v3 = 0.0;
  *(float *)(this + 10408) = 0.0;
  v22 = 0;
  v23 = -1;
  *(float *)(this + 10412) = 0.050000001;
  *(float *)(this + 10416) = 0.0;
  while ( 1 )
  {
    v19[0] = v3;
    v18 = v3;
    v19[1] = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
               dword_10413198,
               LODWORD(v18),
               360.0);
    v19[2] = 0.0;
    v4 = this + 1304 * v2;
    sub_101EDFB0(v19, v4 + 2552);
    if ( (v2 & 1) != 0 )
      v21 = *(_DWORD *)(this + 1208);
    else
      v21 = *(_DWORD *)(this + 1212);
    v5 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_10413178 + 4))(dword_10413178, v21);
    v20 = COERCE_FLOAT((*(int (__thiscall **)(int, int))(*(_DWORD *)dword_10413178 + 32))(dword_10413178, v5));
    sub_1003B800((_WORD *)(v4 + 1264), v21);
    v6 = (float *)sub_10034A00((char *)this);
    sub_10034A30((float *)(v4 + 1264), v6);
    v20 = COERCE_FLOAT(
            (*(int (__thiscall **)(int, _DWORD, float))(*(_DWORD *)dword_10413198 + 8))(
              dword_10413198,
              0,
              COERCE_FLOAT(LODWORD(v20))));
    v7 = (double)SLODWORD(v20);
    v8 = *(_DWORD *)(v4 + 2484);
    v20 = v7;
    if ( v8 != LODWORD(v20) )
      *(float *)(v4 + 2484) = v7;
    v9 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 15, 20);
    v10 = *(_DWORD *)(v4 + 2480);
    v11 = (double)v9;
    v20 = v11;
    if ( v10 != LODWORD(v20) )
      *(float *)(v4 + 2480) = v11;
    sub_10123F00(*(float *)(this + 1192), COERCE_INT(0.0));
    sub_10035090((_BYTE *)(v4 + 1264), 7, 0);
    v12 = v23;
    *(_BYTE *)(v4 + 1348) = 0;
    if ( *(_DWORD *)(v4 + 1352) != v12 )
      *(_DWORD *)(v4 + 1352) = v12;
    sub_10123ED0(255, 0.0);
    v13 = v22;
    *(_DWORD *)(v4 + 1344) = -1;
    if ( v13 )
      *(float *)(this + 4 * v13 + 9088) = 1.0 - (double)v22 * 0.16666667;
    else
      *(float *)(this + 9088) = 1.0;
    v22 = v13 + 1;
    if ( v13 + 1 >= 6 )
      break;
    v3 = 0.0;
    v2 = v22;
  }
  sub_1003B800((_WORD *)(this + 9112), *(_DWORD *)(this + 1216));
  v14 = (float *)sub_10034A00((char *)this);
  sub_10034A30((float *)(this + 9112), v14);
  sub_10123F00(*(float *)(this + 1192), COERCE_INT(0.0));
  sub_10035090((_BYTE *)(this + 9112), 5, 0);
  v22 = -1;
  *(_BYTE *)(this + 9196) = 0;
  if ( *(_DWORD *)(this + 9200) != -1 )
    *(_DWORD *)(this + 9200) = -1;
  sub_10123ED0(255, 0.0);
  *(float *)(this + 10400) = *(float *)(this + 1192);
  *(_DWORD *)(this + 9192) = -1;
  sub_10036100(this + 9112, 8);
  v15 = this + 1264;
  v16 = 6;
  do
  {
    result = sub_10036100(v15, 8);
    v15 += 1304;
    --v16;
  }
  while ( v16 );
  return result;
}
