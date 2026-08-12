void __thiscall sub_10413D50(float *this, int a2, int a3)
{
  int v4; // eax
  int v5; // edx
  int v6; // ebx
  int v7; // esi
  float v8; // eax
  float v9; // ecx
  void (__thiscall *v10)(float *, float *, _DWORD, _DWORD); // edx
  void (__thiscall *v11)(float *, _DWORD *, float *, _DWORD, _DWORD); // eax
  void (__thiscall *v12)(float *, _DWORD *, float *, _DWORD, _DWORD); // edx
  _BYTE v13[84]; // [esp+48h] [ebp-B4h] BYREF
  float v14[3]; // [esp+9Ch] [ebp-60h] BYREF
  float v15[3]; // [esp+A8h] [ebp-54h] BYREF
  float v16[3]; // [esp+B4h] [ebp-48h] BYREF
  _DWORD v17[3]; // [esp+C0h] [ebp-3Ch] BYREF
  _DWORD v18[4]; // [esp+CCh] [ebp-30h] BYREF
  float v19; // [esp+DCh] [ebp-20h]
  int v20; // [esp+E0h] [ebp-1Ch]
  float v21; // [esp+E4h] [ebp-18h] BYREF
  float v22; // [esp+E8h] [ebp-14h]
  float v23; // [esp+ECh] [ebp-10h]
  int v24; // [esp+F0h] [ebp-Ch] BYREF
  float v25; // [esp+F4h] [ebp-8h]
  float v26; // [esp+F8h] [ebp-4h]
  int savedregs; // [esp+FCh] [ebp+0h] BYREF

  if ( *(float *)(dword_106B31C8 + 12) >= (double)this[60] )
  {
    v4 = *((_DWORD *)this - 308);
    v5 = *((_DWORD *)this - 187);
    v6 = *((_DWORD *)this - 189);
    v7 = (int)(this - 371);
    v19 = *(this - 188);
    v20 = v5;
    if ( (v4 & 0x800) != 0 )
      sub_100DAE60((int)(this - 371));
    v8 = *(float *)(v7 + 588);
    v9 = *(float *)(v7 + 580);
    v22 = *(float *)(v7 + 584);
    v10 = *(void (__thiscall **)(float *, float *, _DWORD, _DWORD))(*(_DWORD *)v7 + 528);
    v23 = v8;
    v21 = v9;
    v10(this - 371, v14, 0, 0);
    *(float *)&v24 = v14[0] * 600.0 + v21;
    v25 = v14[1] * 600.0 + v22;
    v26 = 600.0 * v14[2] + v23;
    sub_1023D4B0(8, (float *)&v24, 400, 0.1, (int)(this - 371), 0, 0);
    v11 = *(void (__thiscall **)(float *, _DWORD *, float *, _DWORD, _DWORD))(*(_DWORD *)v7 + 856);
    *(float *)&v17[1] = v19 + 20.0;
    v17[2] = v20;
    v17[0] = v6;
    v11(this - 371, v17, v16, 0, 0);
    *(float *)&v24 = v16[0] * 400.0 + v21;
    v25 = v16[1] * 400.0 + v22;
    v26 = 400.0 * v16[2] + v23;
    sub_1002A5F0((int)&savedregs, v7, &v21, (float *)&v24, 1174421507, (int)(this - 371), 0, (int)v13);
    sub_1023D4B0(8, (float *)&v24, 400, 0.1, (int)(this - 371), 0, 0);
    v18[2] = v20;
    *(float *)&v18[1] = v19 - 20.0;
    v12 = *(void (__thiscall **)(float *, _DWORD *, float *, _DWORD, _DWORD))(*(_DWORD *)v7 + 856);
    v18[0] = v6;
    v12(this - 371, v18, v15, 0, 0);
    *(float *)&v24 = v15[0] * 400.0 + v21;
    v25 = v15[1] * 400.0 + v22;
    v26 = 400.0 * v15[2] + v23;
    sub_1002A5F0((int)&savedregs, v7, &v21, (float *)&v24, 1174421507, (int)(this - 371), 0, (int)v13);
    sub_1023D4B0(8, (float *)&v24, 400, 0.1, (int)(this - 371), 0, 0);
    this[60] = *(float *)(dword_106B31C8 + 12) + 0.3;
  }
}
