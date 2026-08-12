void __userpurge sub_1038D4D0(int a1@<ecx>, int a2@<ebx>, int a3@<edi>, float a4)
{
  int v5; // edi
  double v6; // st7
  float *v7; // eax
  double v8; // st7
  double v9; // st6
  double v10; // st5
  double v11; // st6
  double v12; // st7
  double v13; // st7
  double v14; // st7
  double v15; // st7
  double v16; // st6
  double v17; // st6
  double v18; // st5
  double v19; // st4
  double v20; // st3
  double v21; // st6
  double v22; // st3
  double v23; // st7
  float v25; // [esp+28h] [ebp-40h] BYREF
  float v26; // [esp+2Ch] [ebp-3Ch]
  float v27; // [esp+30h] [ebp-38h]
  float v28; // [esp+34h] [ebp-34h]
  float v29; // [esp+38h] [ebp-30h]
  float v30; // [esp+3Ch] [ebp-2Ch]
  int v31; // [esp+40h] [ebp-28h] BYREF
  float v32; // [esp+44h] [ebp-24h]
  float v33; // [esp+48h] [ebp-20h]
  int v34; // [esp+4Ch] [ebp-1Ch] BYREF
  float v35; // [esp+50h] [ebp-18h]
  float v36; // [esp+54h] [ebp-14h]
  float v37; // [esp+58h] [ebp-10h]
  float v38; // [esp+5Ch] [ebp-Ch]
  float v39; // [esp+60h] [ebp-8h]
  float v40; // [esp+64h] [ebp-4h]
  float v41; // [esp+70h] [ebp+8h]
  float v42; // [esp+70h] [ebp+8h]

  if ( *(_DWORD *)(a1 + 4268) )
  {
    v41 = *(float *)(dword_106E9D74 + 44) * a4;
    v5 = sub_10389120(a1, v41);
    *(_DWORD *)(a1 + 4236) = (*(int (__thiscall **)(int, _DWORD, int, int, int))(*(_DWORD *)dword_106B31E4 + 8))(
                               dword_106B31E4,
                               *(_DWORD *)(dword_106E9E94 + 48),
                               *(_DWORD *)(dword_106E9E94 + 48) + 1,
                               a3,
                               a2);
    *(_DWORD *)(a1 + 4268) = 2;
    *(_DWORD *)(a1 + 4272) = 2;
    sub_1038C750((_DWORD *)a1, 0.0, 225.0, 0.0, (float *)&v31, (float *)&v34);
    v6 = v36 * 0.0;
    v37 = v35 - v6;
    v38 = v6 - *(float *)&v34;
    v39 = *(float *)&v34 * 0.0 - 0.0 * v35;
    off_10689714();
    v7 = (float *)(*(int (__thiscall **)(int, float *))(*(_DWORD *)a1 + 968))(a1, &v25);
    v8 = *v7 - *(float *)&v31;
    v28 = v8;
    v9 = v7[1] - v32;
    v29 = v9;
    v10 = v7[2] - v33;
    v30 = v10;
    if ( v9 * v38 + v8 * v37 + v10 * v39 <= 0.0 )
      v11 = -1.0;
    else
      v11 = 1.0;
    v40 = v11;
    v12 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
            dword_106B31E4,
            0.0,
            50.0);
    v13 = (v12 + 300.0) * v40;
    v25 = v37 * v13 + *(float *)&v31;
    v26 = v38 * v13 + v32;
    v27 = v13 * v39 + v33;
    v36 = 0.0;
    v14 = off_10689714() * v41 * 0.9;
    if ( v14 < 1000.0 )
      v14 = 1000.0;
    *(float *)(a1 + 4256) = v25;
    *(float *)(a1 + 4260) = v26;
    *(float *)(a1 + 4264) = v27;
    *(float *)(a1 + 4244) = *(float *)&v34 * v14;
    *(float *)(a1 + 4248) = v35 * v14;
    *(float *)(a1 + 4252) = v14 * v36;
    v42 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
            dword_106B31E4,
            25.0,
            50.0);
    off_10689714();
    v15 = v40;
    v16 = v42;
    if ( (v29 * v35 + v28 * *(float *)&v34 + v30 * v36) * v40 < 0.1 )
      v16 = v16 + 100.0;
    v17 = v16 * v15;
    v18 = v37;
    *(float *)(a1 + 4244) = v17 * v37 + *(float *)(a1 + 4244);
    v19 = v38;
    *(float *)(a1 + 4248) = v38 * v17 + *(float *)(a1 + 4248);
    v20 = v17 * v39;
    v21 = v39;
    *(float *)(a1 + 4252) = v20 + *(float *)(a1 + 4252);
    *(float *)(a1 + 4276) = 200.0;
    *(float *)(a1 + 4220) = *(float *)(a1 + 4244);
    *(float *)(a1 + 4224) = *(float *)(a1 + 4248);
    *(float *)(a1 + 4228) = *(float *)(a1 + 4252);
    *(float *)(a1 + 4208) = *(float *)(a1 + 4256);
    *(float *)(a1 + 4212) = *(float *)(a1 + 4260);
    *(float *)(a1 + 4216) = *(float *)(a1 + 4264);
    v22 = v15 * -200.0;
    *(float *)(a1 + 4208) = v18 * v22 + *(float *)(a1 + 4208);
    *(float *)(a1 + 4212) = v19 * v22 + *(float *)(a1 + 4212);
    *(float *)(a1 + 4216) = v22 * v21 + *(float *)(a1 + 4216);
    v23 = 1.0 / (double)(v5 - 1);
    *(float *)(a1 + 4220) = *(float *)(a1 + 4220) * v23;
    *(float *)(a1 + 4224) = *(float *)(a1 + 4224) * v23;
    *(float *)(a1 + 4228) = v23 * *(float *)(a1 + 4228);
  }
}
