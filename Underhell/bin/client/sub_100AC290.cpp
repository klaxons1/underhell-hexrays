int __thiscall sub_100AC290(_DWORD *this)
{
  float *v2; // eax
  int v3; // ecx
  int i; // esi
  int v5; // eax
  double v6; // st7
  float *v7; // esi
  float *v8; // eax
  int (__thiscall *v9)(int); // edx
  float *v10; // esi
  float *v11; // eax
  double v12; // st7
  double v13; // st6
  float *v14; // eax
  float *v15; // ecx
  float *v16; // eax
  float v18; // [esp+8h] [ebp-1Ch]
  float v19; // [esp+Ch] [ebp-18h]
  float v20; // [esp+10h] [ebp-14h]
  float v21; // [esp+14h] [ebp-10h]
  float v22; // [esp+18h] [ebp-Ch]
  float v23; // [esp+1Ch] [ebp-8h]
  float v24; // [esp+20h] [ebp-4h]

  v2 = (float *)this[2];
  v3 = this[1];
  v21 = v2[38];
  v22 = v2[39];
  v23 = v2[40];
  if ( sub_100F7AF0(v3) )
  {
    for ( i = 0; i < 12; *(float *)((char *)&v20 + i) = v6 + *(float *)((char *)&v20 + i) )
    {
      v24 = *(float *)(i + (*(int (__thiscall **)(int))(*(_DWORD *)dword_10412D50 + 120))(dword_10412D50) + 36);
      v5 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_10412D50 + 120))(dword_10412D50);
      v6 = v24 - *(float *)(i + v5 + 12);
      i += 4;
    }
  }
  else
  {
    v7 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)dword_10412D50 + 120))(dword_10412D50);
    v8 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)dword_10412D50 + 120))(dword_10412D50);
    v18 = v8[6] - v7[3];
    v19 = v8[7] - v7[4];
    v9 = *(int (__thiscall **)(int))(*(_DWORD *)dword_10412D50 + 120);
    v20 = v8[8] - v7[5];
    v10 = (float *)v9(dword_10412D50);
    v11 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)dword_10412D50 + 120))(dword_10412D50);
    v12 = -(v19 - (v11[13] - v10[10]));
    v13 = -(v20 - (v11[14] - v10[11]));
    v21 = v21 - (v18 - (v11[12] - v10[9]));
    v22 = v12 + v22;
    v23 = v13 + v23;
  }
  *(_BYTE *)(this[1] + 3528) = 0;
  sub_1000DEC0((_DWORD *)this[1], 2);
  *(_BYTE *)(this[1] + 3529) = 0;
  *(_BYTE *)(this[1] + 3530) = 0;
  v14 = (float *)(*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 28))(this, 0);
  v15 = (float *)this[1];
  v15[55] = *v14;
  v15[56] = v14[1];
  v15[57] = v14[2];
  v15[883] = 0.0;
  v16 = (float *)this[2];
  v16[38] = v21;
  v16[39] = v22;
  v16[40] = v23;
  return (*(int (__thiscall **)(_DWORD *))(*this + 144))(this);
}
