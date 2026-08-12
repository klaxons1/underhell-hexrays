void __thiscall sub_103F5FF0(_BYTE *this, _DWORD *a2)
{
  float *v4; // eax
  double v5; // st7
  double v6; // st6
  double v7; // st5
  void (__thiscall *v8)(_DWORD *, float *, _DWORD); // edx
  float *v9; // ebx
  int (__thiscall *v10)(_DWORD *, _BYTE *); // edx
  float *v11; // eax
  int (__thiscall *v12)(_DWORD *); // edx
  float *v13; // eax
  float v14; // [esp+58h] [ebp-A0h]
  _BYTE v15[12]; // [esp+80h] [ebp-78h] BYREF
  float v16[3]; // [esp+8Ch] [ebp-6Ch] BYREF
  _BYTE v17[12]; // [esp+98h] [ebp-60h] BYREF
  float v18[3]; // [esp+A4h] [ebp-54h] BYREF
  float v19[3]; // [esp+B0h] [ebp-48h] BYREF
  float v20[3]; // [esp+BCh] [ebp-3Ch] BYREF
  float v21; // [esp+C8h] [ebp-30h]
  float v22; // [esp+CCh] [ebp-2Ch]
  float v23; // [esp+D0h] [ebp-28h]
  float v24; // [esp+D4h] [ebp-24h] BYREF
  float v25; // [esp+D8h] [ebp-20h]
  float v26; // [esp+DCh] [ebp-1Ch]
  float v27; // [esp+E0h] [ebp-18h] BYREF
  float v28; // [esp+E4h] [ebp-14h]
  float v29; // [esp+E8h] [ebp-10h]
  float v30; // [esp+ECh] [ebp-Ch] BYREF
  float v31; // [esp+F0h] [ebp-8h]
  float v32; // [esp+F4h] [ebp-4h]
  int savedregs; // [esp+F8h] [ebp+0h] BYREF
  int v34; // [esp+100h] [ebp+8h]

  sub_100F5A30(a2, (int)&v30, (int)v18, (int)v15);
  v4 = (float *)(*(int (__thiscall **)(_DWORD *, float *))(*a2 + 504))(a2, v20);
  v5 = *v4;
  v24 = *v4;
  v6 = v4[1];
  v25 = v4[1];
  v7 = v4[2];
  v8 = *(void (__thiscall **)(_DWORD *, float *, _DWORD))(*a2 + 540);
  v24 = v5 + v30 * 18.0 + v18[0] * 12.0;
  v25 = v6 + v31 * 18.0 + v18[1] * 12.0;
  v26 = 12.0 * v18[2] + v7 + 18.0 * v32;
  v8(a2, &v27, 0);
  v27 = v30 * 1000.0 + v27;
  v28 = v31 * 1000.0 + v28;
  v29 = 1000.0 * v32 + v29;
  v34 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, -1200, 1200);
  v19[0] = 600.0;
  v19[1] = (float)v34;
  v19[2] = 0.0;
  v9 = sub_102D4840(&v24, &flt_106F1CB4, &v27, v19, (int)a2);
  if ( v9 )
  {
    v10 = *(int (__thiscall **)(_DWORD *, _BYTE *))(*a2 + 504);
    v21 = v30 * 128.0;
    v22 = v31 * 128.0;
    v23 = 128.0 * v32;
    v11 = (float *)v10(a2, v17);
    v12 = *(int (__thiscall **)(_DWORD *))(*a2 + 504);
    v20[0] = *v11 + v21;
    v20[1] = v11[1] + v22;
    v20[2] = v11[2] + v23;
    v13 = (float *)v12(a2);
    sub_1002A5F0((int)&savedregs, (int)a2, v13, v16, (int)v20, 1174421507, (int)this, 0);
    if ( 1.0 == v14 )
      sub_102D4920((int)v9, 0.1);
  }
  this[1393] = 1;
}
