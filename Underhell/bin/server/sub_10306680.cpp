void __thiscall sub_10306680(int this)
{
  double v2; // st7
  int v3; // eax
  int (__thiscall *v4)(int); // edx
  double v5; // st6
  double v6; // st5
  float *v7; // eax
  int (__thiscall *v8)(int); // eax
  char v9; // bl
  float *v10; // eax
  double v11; // st6
  double v12; // rtt
  int (__thiscall *v13)(int); // eax
  float *v14; // eax
  double v15; // st6
  double v16; // rt1
  _BYTE v17[12]; // [esp+28h] [ebp-94h] BYREF
  float v18[3]; // [esp+34h] [ebp-88h] BYREF
  float v19[3]; // [esp+40h] [ebp-7Ch] BYREF
  float v20[3]; // [esp+4Ch] [ebp-70h] BYREF
  float v21[3]; // [esp+58h] [ebp-64h] BYREF
  float v22[3]; // [esp+64h] [ebp-58h] BYREF
  float v23; // [esp+70h] [ebp-4Ch] BYREF
  float v24; // [esp+74h] [ebp-48h]
  float v25; // [esp+78h] [ebp-44h]
  float v26; // [esp+7Ch] [ebp-40h] BYREF
  float v27; // [esp+80h] [ebp-3Ch]
  float v28; // [esp+84h] [ebp-38h]
  float v29; // [esp+88h] [ebp-34h] BYREF
  float v30; // [esp+8Ch] [ebp-30h]
  float v31; // [esp+90h] [ebp-2Ch]
  float v32; // [esp+94h] [ebp-28h] BYREF
  float v33; // [esp+98h] [ebp-24h]
  float v34; // [esp+9Ch] [ebp-20h]
  float v35; // [esp+A0h] [ebp-1Ch]
  float v36; // [esp+A4h] [ebp-18h]
  float v37; // [esp+A8h] [ebp-14h]
  float v38; // [esp+ACh] [ebp-10h] BYREF
  float v39; // [esp+B0h] [ebp-Ch]
  float v40; // [esp+B4h] [ebp-8h]
  char v41; // [esp+BBh] [ebp-1h]
  int savedregs; // [esp+BCh] [ebp+0h] BYREF

  (*(void (__thiscall **)(int, float *, _BYTE *, float *))(*(_DWORD *)this + 528))(this, &v23, v17, &v26);
  v2 = -v26;
  v3 = *(_DWORD *)this;
  v26 = v2;
  v4 = *(int (__thiscall **)(int))(v3 + 576);
  v5 = -v27;
  v27 = v5;
  v6 = -v28;
  v28 = v6;
  v35 = v2 * -8.0;
  v36 = v5 * -8.0;
  v37 = -8.0 * v6;
  v7 = (float *)v4(this);
  v29 = *v7 + v35;
  v30 = v7[1] + v36;
  v31 = v7[2] + v37;
  if ( sub_10306560(this, COERCE_FLOAT(&savedregs), this, &v29, &v26, v22, v20) )
  {
    sub_1025F370((void *)this, v22, 0);
    v8 = *(int (__thiscall **)(int))(*(_DWORD *)this + 576);
    v38 = v23 * 12.0;
    v9 = 1;
    v39 = v24 * 12.0;
    v40 = 12.0 * v25;
    v10 = (float *)v8(this);
    v11 = v10[1] - v39;
    v12 = v10[2] - v40;
    v38 = *v10 - v38 + v35;
    v39 = v11 + v36;
    v40 = v12 + v37;
    if ( !sub_10306560(this, COERCE_FLOAT(&savedregs), this, &v38, &v26, v21, &v29) )
    {
      v13 = *(int (__thiscall **)(int))(*(_DWORD *)this + 576);
      v38 = v23 * 12.0;
      v39 = v24 * 12.0;
      v40 = 12.0 * v25;
      v14 = (float *)v13(this);
      v15 = v14[1] + v39;
      v16 = v14[2] + v40;
      v38 = *v14 + v38 + v35;
      v39 = v15 + v36;
      v40 = v16 + v37;
      if ( !sub_10306560(this, COERCE_FLOAT(&savedregs), this, &v38, &v26, v21, &v29) )
      {
        sub_1025F370((void *)this, v22, 0);
        sub_10422620(&v23, v20, &v29);
        sub_100E0EA0(this, &v29);
        return;
      }
      v41 = 0;
      v9 = 0;
    }
    v32 = v21[0] - v22[0];
    v33 = v21[1] - v22[1];
    v34 = v21[2] - v22[2];
    off_10689714();
    if ( v9 )
    {
      v32 = -v32;
      v33 = -v33;
      v34 = -v34;
    }
    v19[0] = (v29 + v20[0]) * 0.5;
    v19[1] = (v30 + v20[1]) * 0.5;
    v19[2] = 0.5 * (v31 + v20[2]);
    sub_10422620(&v32, v19, v18);
    sub_100E0EA0(this, v18);
  }
  else
  {
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    Warning(
      "Antlion grub stranded in space at (%.02f, %.02f, %.02f) : REMOVED\n",
      *(float *)(this + 580),
      *(float *)(this + 584),
      *(float *)(this + 588));
    sub_1025FAC0(this);
  }
}
