void __thiscall sub_1036E7E0(float *this, _DWORD *a2)
{
  int v3; // ebx
  float *v4; // eax
  int v5; // ecx
  int v6; // edx
  _DWORD *v7; // ebx
  int v8; // eax
  bool v9; // sf
  float *v10; // ecx
  int v11; // [esp+20h] [ebp-D0h]
  _BYTE v12[12]; // [esp+2Ch] [ebp-C4h] BYREF
  int v13[18]; // [esp+38h] [ebp-B8h] BYREF
  int v14[14]; // [esp+80h] [ebp-70h] BYREF
  float v15[3]; // [esp+B8h] [ebp-38h] BYREF
  float v16[3]; // [esp+C4h] [ebp-2Ch] BYREF
  float *v17; // [esp+D0h] [ebp-20h]
  float *v18; // [esp+D4h] [ebp-1Ch]
  float v19; // [esp+D8h] [ebp-18h] BYREF
  float v20; // [esp+DCh] [ebp-14h]
  float v21; // [esp+E0h] [ebp-10h]
  float v22; // [esp+E4h] [ebp-Ch]
  float v23; // [esp+E8h] [ebp-8h]
  float v24; // [esp+ECh] [ebp-4h]
  int savedregs; // [esp+F0h] [ebp+0h] BYREF
  char v26; // [esp+FBh] [ebp+Bh]

  if ( *a2 != 150 )
  {
    sub_1036E000((int)this, (int)a2);
    return;
  }
  (*(void (__thiscall **)(float *, float *, float *, _DWORD))(*(_DWORD *)this + 528))(this, v16, &v19, 0);
  v26 = 0;
  if ( (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 0, 100) < 50 )
  {
    v26 = 1;
    v19 = -v19;
    v20 = -v20;
    v21 = -v21;
  }
  v22 = v16[0] * 2.0 + v19;
  v23 = v16[1] * 2.0 + v20;
  v24 = 2.0 * v16[2] + v21;
  off_10689714();
  v3 = *((_DWORD *)this + 105);
  v11 = *((_DWORD *)this + 419);
  v22 = v22 * 150.0;
  v23 = v23 * 150.0;
  v24 = 150.0 * v24;
  v17 = (float *)sub_10073730(v11);
  v4 = (float *)sub_10073710(*((_DWORD *)this + 419));
  v5 = *((_DWORD *)this + 63) >> 11;
  v18 = v4;
  if ( (v5 & 1) != 0 )
    sub_100DAE60((int)this);
  v6 = *((_DWORD *)this + 63) >> 11;
  v15[0] = this[145] + v22;
  v15[1] = this[146] + v23;
  v15[2] = this[147] + v24;
  if ( (v6 & 1) != 0 )
    sub_100DAE60((int)this);
  sub_100231A0((int)&savedregs, (int)this, this + 145, v15, v18, v17, 1174421507, (int)this, v3, (int)v12);
  if ( 1.0 != *(float *)&v13[8] )
  {
    v10 = this;
LABEL_17:
    sub_10027CD0(v10, 0);
    return;
  }
  memset(v14, 0, sizeof(v14));
  if ( ((_DWORD)this[63] & 0x800) != 0 )
    sub_100DAE60((int)this);
  v7 = (_DWORD *)*((_DWORD *)this + 650);
  v8 = (*(int (__thiscall **)(float *))(*(_DWORD *)this + 368))(this);
  sub_1007C550(v7, 1, this + 145, (float *)v13, 33701899, v8, 100.0, 0, (float *)v14);
  v9 = v14[0] < 0;
  this[924] = *(float *)&v14[10];
  this[925] = *(float *)&v14[11];
  v10 = this;
  this[926] = *(float *)&v14[12];
  if ( v9 )
    goto LABEL_17;
  sub_100DD660((int)this, this + 924);
  this[138] = sub_10260720(1600.0);
  sub_101C73D0((unsigned int *)this, 0);
  sub_100223F0(1);
  if ( v26 )
  {
    sub_10039F40((int *)this, dword_106E811C);
    sub_1007DD70(dword_106E811C);
  }
  else
  {
    sub_10039F40((int *)this, dword_106E8118);
    sub_1007DD70(dword_106E8118);
  }
}
