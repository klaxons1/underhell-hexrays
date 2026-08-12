void __thiscall sub_101A63F0(_BYTE *this)
{
  int (__thiscall *v2)(_BYTE *); // edx
  __int16 v3; // ax
  __int16 v4; // ax
  int v5; // eax
  _BYTE v6[12]; // [esp+2Ch] [ebp-C0h] BYREF
  _DWORD v7[12]; // [esp+38h] [ebp-B4h] BYREF
  const char *v8; // [esp+68h] [ebp-84h]
  int v9; // [esp+6Ch] [ebp-80h]
  int v10; // [esp+70h] [ebp-7Ch]
  float v11; // [esp+74h] [ebp-78h]
  float v12; // [esp+78h] [ebp-74h]
  float v13; // [esp+7Ch] [ebp-70h]
  float v14; // [esp+80h] [ebp-6Ch]
  float v15; // [esp+84h] [ebp-68h]
  float v16; // [esp+88h] [ebp-64h]
  float v17; // [esp+8Ch] [ebp-60h]
  float v18; // [esp+90h] [ebp-5Ch]
  int v19; // [esp+94h] [ebp-58h]
  float v20; // [esp+98h] [ebp-54h]
  float v21; // [esp+9Ch] [ebp-50h]
  float v22; // [esp+A0h] [ebp-4Ch]
  float v23; // [esp+A4h] [ebp-48h]
  char v24; // [esp+A8h] [ebp-44h]
  int v25; // [esp+ACh] [ebp-40h]
  int v26; // [esp+B0h] [ebp-3Ch]
  float v27; // [esp+C8h] [ebp-24h]
  float v28; // [esp+CCh] [ebp-20h]
  float v29; // [esp+D0h] [ebp-1Ch]
  int v30[3]; // [esp+D4h] [ebp-18h] BYREF
  float v31; // [esp+E0h] [ebp-Ch] BYREF
  float v32; // [esp+E4h] [ebp-8h]
  float v33; // [esp+E8h] [ebp-4h]

  if ( this[2140]
    && 0.0 != *((float *)off_103DC81C + 4)
    && !(*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 0, 5) )
  {
    (*(void (__thiscall **)(_BYTE *, int, float *, _BYTE *))(*((_DWORD *)this - 2) + 148))(this - 8, 1, &v31, v6);
    sub_101EDFB0(v6);
    v7[0] = 0;
    v25 = -1;
    v8 = 0;
    v10 = 0;
    v7[11] = -1;
    *(float *)&v7[5] = v31 - v27;
    v9 = -1;
    v24 = 1;
    *(float *)&v7[6] = v32 - v28;
    v26 = 0;
    *(float *)&v7[7] = v33 - v29;
    sub_10042010((float *)v30, -6.0, 2.0);
    v2 = *(int (__thiscall **)(_BYTE *))(*((_DWORD *)this - 1) + 36);
    *(float *)&v7[8] = *(float *)v30 + 2.0 + v31;
    *(float *)&v7[9] = *(float *)&v30[1] + 2.0 + v32;
    *(float *)&v7[10] = *(float *)&v30[2] + 2.0 + v33;
    v3 = v2(this - 4);
    v7[1] = sub_1007A6A0(off_103DCD78, v3 & 0xFFF);
    v4 = (*(int (__thiscall **)(_BYTE *))(*((_DWORD *)this - 1) + 36))(this - 4);
    v5 = sub_1007A6A0(off_103DCD78, v4 & 0xFFF);
    v11 = 0.0;
    v7[3] = v5;
    v7[2] = 1;
    v7[4] = 2;
    v7[0] = 9;
    v8 = "sprites/physbeam.vmt";
    v12 = 0.0099999998;
    v13 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
            dword_10413198,
            0.5,
            2.0);
    v14 = 0.0;
    v15 = 0.0;
    v16 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
            dword_10413198,
            1.0,
            2.0);
    v17 = 255.0;
    v19 = 0;
    v25 = 8;
    v18 = 0.0;
    v24 = 1;
    v26 = 384;
    v20 = 1.0;
    v21 = 255.0;
    v22 = 255.0;
    v23 = 255.0;
    (*((void (__thiscall **)(void ***, _DWORD *))*off_103E773C[0] + 12))(off_103E773C[0], v7);
  }
}
