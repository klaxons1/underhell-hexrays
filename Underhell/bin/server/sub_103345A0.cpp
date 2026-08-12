int __thiscall sub_103345A0(void *this, _DWORD *a2, int a3)
{
  int (__thiscall *v4)(void *); // edx
  float *v5; // eax
  double v6; // st7
  int v7; // eax
  float *v8; // eax
  float *v9; // eax
  double v10; // st7
  double v11; // st6
  double v12; // st5
  double v13; // st5
  double v14; // rt2
  double v15; // st5
  double v16; // rtt
  double v17; // st5
  double v18; // st7
  double v19; // st7
  int v20; // eax
  int v21; // edi
  int result; // eax
  int v23; // edi
  char v24; // al
  bool v25; // zf
  double v26; // st7
  double (__cdecl *v27)(_DWORD, _DWORD); // eax
  double v28; // st7
  int (__thiscall *v29)(int, float *, float *); // edx
  float v30; // [esp+30h] [ebp-70h]
  float v31; // [esp+34h] [ebp-6Ch]
  float v32; // [esp+38h] [ebp-68h]
  _DWORD v33[4]; // [esp+3Ch] [ebp-64h] BYREF
  _BYTE v34[12]; // [esp+4Ch] [ebp-54h] BYREF
  _BYTE v35[12]; // [esp+58h] [ebp-48h] BYREF
  float v36[3]; // [esp+64h] [ebp-3Ch] BYREF
  float v37; // [esp+70h] [ebp-30h] BYREF
  float v38; // [esp+74h] [ebp-2Ch]
  float v39; // [esp+78h] [ebp-28h]
  float v40; // [esp+7Ch] [ebp-24h] BYREF
  float v41; // [esp+80h] [ebp-20h]
  float v42; // [esp+84h] [ebp-1Ch]
  float v43; // [esp+88h] [ebp-18h] BYREF
  float v44; // [esp+8Ch] [ebp-14h]
  float v45; // [esp+90h] [ebp-10h]
  float v46; // [esp+94h] [ebp-Ch] BYREF
  float v47; // [esp+98h] [ebp-8h]
  float v48; // [esp+9Ch] [ebp-4h]
  int savedregs; // [esp+A0h] [ebp+0h] BYREF
  float v50; // [esp+A8h] [ebp+8h]
  float v51; // [esp+ACh] [ebp+Ch]

  (*(void (__thiscall **)(void *, float *, _BYTE *, _BYTE *))(*(_DWORD *)this + 528))(this, v36, v34, v35);
  v4 = *(int (__thiscall **)(void *))(*(_DWORD *)this + 576);
  v37 = v36[0] * 20.0;
  v38 = v36[1] * 20.0;
  v39 = 20.0 * v36[2];
  v5 = (float *)v4(this);
  v40 = *v5 + v37;
  v41 = v5[1] + v38;
  v6 = v5[2] + v39;
  v7 = a2[63] >> 11;
  v42 = v6;
  if ( (v7 & 1) != 0 )
    sub_100DAE60((int)a2);
  sub_10421B40(a3, a2 + 125, &v43);
  v45 = *(float *)((*(int (__thiscall **)(_DWORD *, float *))(*a2 + 504))(a2, &v37) + 8);
  if ( *(_DWORD *)(dword_106E6184 + 48) )
  {
    v9 = sub_101695D0(
           (int)&savedregs,
           (int)a2,
           (int)this,
           &v37,
           (int)this,
           &v40,
           v43,
           v44,
           v45,
           *(float *)(dword_106E61CC + 44),
           1.0,
           0,
           0);
    v10 = *v9;
    v46 = *v9;
    v11 = v9[1];
    v47 = v9[1];
    v12 = v9[2];
    v48 = v9[2];
    if ( flt_106F1CA8 == v10 && flt_106F1CAC == v11 && flt_106F1CB0 == v12 )
    {
      v13 = v43 - v40;
      v46 = v13;
      v14 = v13;
      v15 = v44 - v41;
      v47 = v15;
      v16 = v15;
      v17 = v45 - v42;
      v48 = v17;
      v30 = v17 * v17 + v14 * v14 + v16 * v16;
      v18 = *(float *)(dword_106E61CC + 44) / off_10689708(v30);
      v46 = v46 * v18;
      v47 = v47 * v18;
      v19 = v18 * v48;
      v48 = v19;
      v48 = v19 + *(float *)(dword_106E61CC + 44) * 0.5773502691896257;
    }
  }
  else
  {
    sub_10265720(v33, (int)this, (int)a2, 0);
    v8 = sub_10168EB0((int)&savedregs, &v37, (int)this, (int)v33, v40, v41, v42, v43, v44, v45, 0.233, 1.0, 0, 0, 0);
    v46 = *v8;
    v47 = v8[1];
    v48 = v8[2];
  }
  v20 = sub_101811E0("item_healthkit", -1);
  v21 = v20;
  if ( !v20 )
    return Warning("Citizen tried to heal but could not spawn item_healthkit!\n");
  sub_100E0D20(v20, &v40);
  (*(void (__thiscall **)(int, void *))(*(_DWORD *)v21 + 76))(v21, this);
  result = sub_10260750((char *)v21);
  v23 = *(_DWORD *)(v21 + 424);
  if ( v23 )
  {
    v24 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 0, 255);
    v32 = 600.0;
    v25 = (v24 & 1) == 0;
    v26 = 200.0;
    v27 = *(double (__cdecl **)(_DWORD, _DWORD))(*(_DWORD *)dword_106B31E4 + 4);
    v31 = 200.0;
    if ( v25 )
      v26 = v27(LODWORD(v31), LODWORD(v32)) * -1.0;
    else
      v27(LODWORD(v31), LODWORD(v32));
    v50 = v26;
    v51 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
            dword_106B31E4,
            -200.0,
            200.0);
    v28 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
            dword_106B31E4,
            -200.0,
            200.0);
    v29 = *(int (__thiscall **)(int, float *, float *))(*(_DWORD *)v23 + 196);
    v37 = v51;
    v38 = v28;
    v39 = v50;
    return v29(v23, &v46, &v37);
  }
  return result;
}
