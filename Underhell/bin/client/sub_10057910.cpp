void sub_10057910()
{
  int i; // ebx
  _DWORD *v1; // eax
  float *v2; // esi
  int v3; // eax
  int v4; // eax
  int v5; // edi
  int v6; // eax
  int (__thiscall *v7)(int); // eax
  float *v8; // eax
  double v9; // st6
  double v10; // st7
  float v11[3]; // [esp+10h] [ebp-38h] BYREF
  float v12[3]; // [esp+1Ch] [ebp-2Ch] BYREF
  float v13; // [esp+28h] [ebp-20h]
  float v14; // [esp+2Ch] [ebp-1Ch]
  float v15; // [esp+30h] [ebp-18h]
  float v16; // [esp+34h] [ebp-14h]
  float v17; // [esp+38h] [ebp-10h]
  float v18; // [esp+3Ch] [ebp-Ch]
  int v19; // [esp+40h] [ebp-8h] BYREF
  int v20; // [esp+44h] [ebp-4h]

  for ( i = 0; i < 20; ++i )
  {
    v1 = sub_10034900(0x540u);
    if ( v1 )
      v2 = (float *)sub_10057690(v1);
    else
      v2 = 0;
    sub_1009C060(&v19, v2);
    sub_1007A050(*((_DWORD *)v2 + 41), -1293.0);
    sub_10036100((int)v2, 7);
    v3 = (*(int (__thiscall **)(int, const char *, const char *, int, _DWORD))(*(_DWORD *)dword_1047C96C + 280))(
           dword_1047C96C,
           "cable/cable",
           "Other textures",
           1,
           0);
    v2[327] = 5.0;
    *((_DWORD *)v2 + 326) = v3;
    v4 = sub_100422D0();
    v5 = v4;
    if ( !v4 )
      break;
    v6 = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 40))(v4);
    sub_101EDFB0(v6, v12);
    v20 = sub_10115FB0();
    v13 = (double)v20 * 0.000030518509 * 100.0;
    v20 = sub_10115FB0();
    v14 = (double)v20 * 0.000030518509 * 100.0;
    v20 = sub_10115FB0();
    v7 = *(int (__thiscall **)(int))(*(_DWORD *)v5 + 36);
    v15 = (double)v20 * 0.000030518509 * 100.0;
    v16 = v12[0] * 300.0;
    v17 = v12[1] * 300.0;
    v18 = 300.0 * v12[2];
    v8 = (float *)v7(v5);
    v9 = v8[1] + v17;
    v10 = v8[2] + v18;
    v11[0] = *v8 + v16 + v13;
    v11[1] = v9 + v14;
    v11[2] = v10 + v15;
    sub_10034A30(v2, v11);
  }
}
