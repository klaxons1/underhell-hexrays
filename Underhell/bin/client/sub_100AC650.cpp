int __thiscall sub_100AC650(_DWORD *this)
{
  float *v2; // eax
  float *v3; // ecx
  float *v4; // edi
  float *v5; // eax
  float *v6; // edi
  float *v7; // eax
  double v8; // st7
  double v9; // st6
  double v10; // st5
  float *v11; // eax
  double v12; // st6
  double v13; // rt0
  float v15; // [esp+8h] [ebp-Ch]
  float v16; // [esp+Ch] [ebp-8h]
  float v17; // [esp+10h] [ebp-4h]

  sub_1000DEB0((_DWORD *)this[1], 2);
  *(_BYTE *)(this[1] + 3528) = 1;
  *(_BYTE *)(this[1] + 3529) = 0;
  v2 = (float *)(*(int (__thiscall **)(_DWORD *, int))(*this + 28))(this, 1);
  v3 = (float *)this[1];
  v3[55] = *v2;
  v3[56] = v2[1];
  v3[57] = v2[2];
  v4 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)dword_10412D50 + 120))(dword_10412D50);
  v5 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)dword_10412D50 + 120))(dword_10412D50);
  v15 = v5[6] - v4[3];
  v16 = v5[7] - v4[4];
  v17 = v5[8] - v4[5];
  v6 = (float *)(*(int (**)(void))(*(_DWORD *)dword_10412D50 + 120))();
  v7 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)dword_10412D50 + 120))(dword_10412D50);
  v8 = v7[12] - v6[9];
  v9 = v7[13] - v6[10];
  v10 = v7[14];
  v11 = (float *)this[2];
  v12 = v16 - v9 + v11[39];
  v13 = v17 - (v10 - v6[11]) + v11[40];
  v11[38] = v15 - v8 + v11[38];
  v11[39] = v12;
  v11[40] = v13;
  sub_100AC020(this, 1);
  return (*(int (__thiscall **)(_DWORD *))(*this + 144))(this);
}
