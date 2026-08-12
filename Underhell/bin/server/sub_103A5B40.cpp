void __userpurge sub_103A5B40(int a1@<ecx>, int a2@<ebx>, int a3@<edi>, float a4, float *a5)
{
  int v6; // eax
  int v7; // edi
  int v8; // eax
  int v9; // edi
  void (__cdecl *v10)(_DWORD); // edx
  double v11; // st7
  double v12; // st6
  double v13; // st7
  double v14; // st5
  double v15; // rt1
  double v16; // st5
  double v17; // st7
  double v18; // st7
  double v19; // st7
  double v20; // st6
  double v21; // st7
  double v22; // st7
  float v23; // [esp+10h] [ebp-58h]
  float v24; // [esp+14h] [ebp-54h]
  float v25; // [esp+18h] [ebp-50h]
  _BYTE v26[12]; // [esp+20h] [ebp-48h] BYREF
  _BYTE v27[12]; // [esp+2Ch] [ebp-3Ch] BYREF
  float v28[3]; // [esp+38h] [ebp-30h] BYREF
  float v29[3]; // [esp+44h] [ebp-24h] BYREF
  float v30; // [esp+50h] [ebp-18h]
  float v31; // [esp+54h] [ebp-14h]
  float v32; // [esp+58h] [ebp-10h]
  int v33; // [esp+5Ch] [ebp-Ch] BYREF
  float v34; // [esp+60h] [ebp-8h]
  float v35; // [esp+64h] [ebp-4h]
  float v36; // [esp+70h] [ebp+8h]

  if ( *(float *)(dword_106B31C8 + 12) >= (double)*(float *)(a1 + 3796) )
  {
    if ( (*(int (__thiscall **)(int, int, int))(*(_DWORD *)a1 + 368))(a1, a3, a2) )
    {
      v6 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 368))(a1);
      v7 = *(_DWORD *)a1;
      v8 = (*(int (__thiscall **)(int, float *))(*(_DWORD *)v6 + 504))(v6, v28);
      (*(void (__thiscall **)(int, _DWORD, int))(v7 + 2212))(a1, LODWORD(a4), v8);
    }
    else
    {
      if ( sub_103A5070(a1) )
      {
        v9 = *(_DWORD *)a1;
        sub_103A50F0((float *)a1, v28);
        v10 = *(void (__cdecl **)(_DWORD))(v9 + 2212);
      }
      else
      {
        v10 = *(void (__cdecl **)(_DWORD))(*(_DWORD *)a1 + 2212);
      }
      v10(LODWORD(a4));
    }
    v30 = *(float *)(a1 + 3624);
    v31 = *(float *)(a1 + 3628);
    v32 = *(float *)(a1 + 3632);
    off_10689714();
    if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
      sub_100DAE60(a1);
    *(float *)&v33 = *a5 - *(float *)(a1 + 580);
    v34 = a5[1] - *(float *)(a1 + 584);
    v35 = a5[2] - *(float *)(a1 + 588);
    v11 = off_10689714();
    if ( v31 * v34 + v30 * *(float *)&v33 + v35 * v32 <= 0.25 )
      v12 = 128.0;
    else
      v12 = 250.0;
    v13 = v11 / a4;
    v14 = v12;
    if ( v12 > v13 )
      v14 = v13;
    v15 = v14;
    v16 = v13;
    v17 = v15;
    if ( v16 >= 400.0 )
      v16 = (float)400.0;
    v24 = v16;
    v23 = v17;
    sub_10328520((float *)a1, a4, (float *)&v33, v23, v24, 0.15000001);
    (*(void (__thiscall **)(int, _BYTE *, float *, _BYTE *))(*(_DWORD *)a1 + 528))(a1, v26, v29, v27);
    v18 = *(float *)&v33;
    *(float *)(a1 + 3636) = *(float *)&v33;
    *(float *)(a1 + 3644) = (v18 * v29[0] + v29[1] * v34 + v29[2] * v35) * 120.0;
    *(float *)(a1 + 3640) = 0.0;
    v25 = *(float *)(a1 + 3632) * *(float *)(a1 + 3632)
        + *(float *)(a1 + 3624) * *(float *)(a1 + 3624)
        + *(float *)(a1 + 3628) * *(float *)(a1 + 3628);
    v36 = off_10689708(v25);
    v19 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)a1 + 2232))(a1);
    if ( v19 == 0.0 )
    {
      v20 = v19;
      v21 = 0.0;
      if ( v20 <= v36 )
        v21 = 1.0;
    }
    else
    {
      v22 = v36 / v19;
      v21 = 3.0 * (v22 * v22) - v22 * (v22 * v22 + v22 * v22);
      if ( v21 <= 1.0 )
      {
        if ( v21 < 0.0 )
          v21 = 0.0;
      }
      else
      {
        v21 = 1.0;
      }
    }
    *(float *)(a1 + 3636) = *(float *)(a1 + 3636) * v21;
    *(float *)(a1 + 3640) = v21 * *(float *)(a1 + 3640);
    *(float *)(a1 + 3644) = v21 * *(float *)(a1 + 3644);
  }
}
