void __thiscall sub_1038C750(_DWORD *this, float a2, float a3, float a4, float *a5, float *a6)
{
  _BYTE *v7; // edi
  int v8; // eax
  float *v9; // eax
  int v10; // esi
  int v11; // ecx
  double v12; // st7
  double v13; // st7
  double v14; // st6
  double v15; // st5
  double v16; // st4
  double v17; // st6
  double v18; // st5
  double v19; // rt1
  double v20; // st5
  double v21; // st4
  double v22; // rt1
  double v23; // rt2
  double v24; // st4
  double v25; // st5
  double v26; // rtt
  double v27; // st4
  double v28; // st6
  double v29; // rt0
  double v30; // st4
  double v31; // st7
  double v32; // st7
  double v33; // st5
  double v34; // st6
  double v35; // rtt
  double v36; // st4
  float v37; // [esp+Ch] [ebp-8Ch]
  int v38[16]; // [esp+1Ch] [ebp-7Ch] BYREF
  _BYTE v39[12]; // [esp+5Ch] [ebp-3Ch] BYREF
  int v40[3]; // [esp+68h] [ebp-30h] BYREF
  float v41[3]; // [esp+74h] [ebp-24h] BYREF
  float v42; // [esp+80h] [ebp-18h] BYREF
  float v43; // [esp+84h] [ebp-14h]
  float v44; // [esp+88h] [ebp-10h]
  float v45; // [esp+8Ch] [ebp-Ch] BYREF
  float v46; // [esp+90h] [ebp-8h]
  float v47; // [esp+94h] [ebp-4h]

  v7 = (_BYTE *)(*(int (__thiscall **)(_DWORD *))(*this + 368))(this);
  if ( v7 )
  {
    if ( (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)v7 + 320))(v7) )
    {
      v8 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v7 + 1096))(v7);
      if ( v8 )
        v7 = (_BYTE *)v8;
    }
  }
  if ( (this[63] & 0x800) != 0 )
    sub_100DAE60((int)this);
  v9 = sub_1038C4E0(this, v41, (int)(this + 145), 1);
  *a5 = *v9;
  a5[1] = v9[1];
  a5[2] = v9[2];
  (*(void (__thiscall **)(_BYTE *, float *))(*(_DWORD *)v7 + 536))(v7, &v42);
  if ( (v7[256] & 1) == 0 )
    v44 = 0.0;
  v10 = (*(int (__thiscall **)(_DWORD *))(*this + 368))(this);
  if ( !v10
    || !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v10 + 320))(v10)
    || (v11 = (*(int (__thiscall **)(int))(*(_DWORD *)v10 + 1096))(v10)) == 0 )
  {
    v11 = v10;
  }
  (*(void (__thiscall **)(int, _BYTE *, int *))(*(_DWORD *)v11 + 540))(v11, v39, v40);
  v12 = off_10689714() - 30.0;
  if ( v12 <= 0.0 )
  {
    v45 = v42;
    v46 = v43;
    v47 = v44;
    v16 = a2;
    v13 = v44;
    v14 = v43;
    v15 = v42;
  }
  else
  {
    v37 = v12 * a2 * 0.333;
    sub_10425F00((int)v38, (int)v40, v37);
    sub_10425E60(v38, &v42, &v45);
    v13 = v47;
    v14 = v46;
    v15 = v45;
    v16 = a2;
  }
  if ( 0.0 != a4 )
  {
    (*(void (__thiscall **)(_BYTE *, float *, _DWORD, _DWORD))(*(_DWORD *)v7 + 528))(v7, v41, 0, 0);
    v17 = v41[0] * a4 + v45;
    v45 = v17;
    v18 = v41[1] * a4 + v46;
    v46 = v18;
    v19 = v18;
    v20 = a4 * v41[2] + v47;
    v47 = v20;
    v13 = v20;
    v21 = v17;
    v14 = v19;
    v22 = v21;
    v16 = a2;
    v15 = v22;
  }
  v23 = v16;
  v24 = v15;
  v25 = v23;
  *a6 = v24;
  v26 = v24;
  v27 = v14;
  v28 = v26;
  a6[1] = v27;
  v29 = v27;
  v30 = v13;
  v31 = v29;
  a6[2] = v30;
  if ( a3 * a3 <= (v26 * v26 + v29 * v29 + v30 * v30) * v23 * v23 )
  {
    v35 = v30;
    v36 = v31;
    v32 = v28 * v25;
    v34 = v36 * v25;
    v33 = v25 * v35;
  }
  else
  {
    off_10689714();
    v32 = v45 * a3;
    v33 = a3 * v47;
    v34 = v46 * a3;
  }
  *a5 = v32 + *a5;
  a5[1] = v34 + a5[1];
  a5[2] = v33 + a5[2];
}
