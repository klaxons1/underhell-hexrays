void __usercall sub_101F02B0(float *a1@<ecx>, int a2@<edi>)
{
  float *v3; // eax
  double v4; // st7
  double v5; // st6
  double v6; // st5
  float *v7; // eax
  _BYTE v8[4]; // [esp+20h] [ebp-C8h] BYREF
  float v9; // [esp+24h] [ebp-C4h]
  float v10; // [esp+28h] [ebp-C0h]
  float v11; // [esp+2Ch] [ebp-BCh]
  float v12; // [esp+30h] [ebp-B8h]
  int v13; // [esp+34h] [ebp-B4h]
  int v14; // [esp+38h] [ebp-B0h]
  int v15[3]; // [esp+70h] [ebp-78h] BYREF
  float v16[8]; // [esp+7Ch] [ebp-6Ch] BYREF
  float v17; // [esp+9Ch] [ebp-4Ch]
  _DWORD *v18; // [esp+BCh] [ebp-2Ch]
  float v19; // [esp+C4h] [ebp-24h] BYREF
  float v20; // [esp+C8h] [ebp-20h]
  float v21; // [esp+CCh] [ebp-1Ch]
  float v22; // [esp+D0h] [ebp-18h] BYREF
  float v23; // [esp+D4h] [ebp-14h]
  float v24; // [esp+D8h] [ebp-10h]
  float v25; // [esp+DCh] [ebp-Ch] BYREF
  float v26; // [esp+E0h] [ebp-8h]
  float v27; // [esp+E4h] [ebp-4h]
  int savedregs; // [esp+E8h] [ebp+0h] BYREF

  if ( a1[532] + 90.0 - *(float *)(dword_106B31C8 + 12) > 0.0
    && (*(unsigned __int8 (__thiscall **)(float *))(*(_DWORD *)a1 + 320))(a1) )
  {
    sub_101E3110(a1, 9u, 0, 4u);
    (*(void (__thiscall **)(float *, float *))(*(_DWORD *)a1 + 968))(a1, &v19);
    v3 = (float *)(*(int (__thiscall **)(float *, float *, _DWORD, _DWORD))(*(_DWORD *)a1 + 1500))(a1, &v25, 1.0, 70.0);
    v4 = *v3;
    v22 = *v3;
    v5 = v3[1];
    v23 = v3[1];
    v6 = v3[2];
    v24 = v3[2];
    v25 = v4 * 70.0 + v19;
    v26 = v5 * 70.0 + v20;
    v27 = v6 * 70.0 + v21;
    sub_1002A5F0((int)&savedregs, (int)a1, &v19, &v25, 100679691, (int)a1, 0, (int)v15);
    sub_10248110((int)a1, (int)a1, 20.0, 128, 0);
    v12 = *(float *)v15;
    v13 = v15[1];
    v14 = v15[2];
    v9 = v22;
    v10 = v23;
    v11 = v24;
    sub_10023860((int)&savedregs, (int)v8, (float *)v15, v16, (int *)&v22);
    if ( 1.0 == v17 )
    {
      v25 = v25 - v22 * 55.424;
      v26 = v26 - v23 * 55.424;
      v27 = v27 - 55.424 * v24;
      sub_100231A0((int)&savedregs, (int)a1, &v19, &v25, flt_1063C5AC, flt_1063C5B8, 100679691, (int)a1, 0, (int)v15);
      if ( v17 < 1.0 )
      {
        if ( v18 )
        {
          v7 = (float *)sub_10019640(v18);
          v25 = *v7 - v19;
          v26 = v7[1] - v20;
          v27 = v7[2] - v21;
          off_10689714();
          if ( v26 * v23 + v25 * v22 + v27 * v24 >= 0.70721 )
            sub_101EBCC0((int)&savedregs, a2, (int)a1, (int)v15, (int)flt_1063C5AC, (int)flt_1063C5B8, (int)a1);
          else
            v17 = 1.0;
        }
      }
    }
    (*(void (__thiscall **)(int, float *, int, const char *))(*(_DWORD *)off_10627F88 + 116))(
      off_10627F88,
      a1,
      1,
      "weapon_flare_hit");
    if ( 1.0 != v17 )
      sub_101E58B0(a1, (int)v15);
  }
}
