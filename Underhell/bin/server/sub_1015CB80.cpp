int __thiscall sub_1015CB80(_DWORD *this)
{
  _BYTE *v2; // edi
  _BYTE *v3; // edi
  float *v4; // eax
  float *v5; // edi
  float *v6; // eax
  float *v7; // edi
  float *v8; // eax
  double v9; // st7
  double v10; // st6
  double v11; // st5
  float *v12; // eax
  double v13; // st6
  double v14; // rt0
  float v16; // [esp+8h] [ebp-Ch]
  float v17; // [esp+Ch] [ebp-8h]
  float v18; // [esp+10h] [ebp-4h]

  sub_100EA940((int *)this[1], 2);
  v2 = (_BYTE *)(this[1] + 2272);
  if ( *v2 != 1 )
  {
    (**(void (__thiscall ***)(int, int))(this[1] + 2192))(this[1] + 2192, this[1] + 2272);
    *v2 = 1;
  }
  v3 = (_BYTE *)(this[1] + 2273);
  if ( *v3 )
  {
    (**(void (__thiscall ***)(int, int))(this[1] + 2192))(this[1] + 2192, this[1] + 2273);
    *v3 = 0;
  }
  v4 = (float *)(*(int (__thiscall **)(_DWORD *, int))(*this + 28))(this, 1);
  sub_100DC4E0((float *)this[1], v4);
  v5 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 120))(dword_106B3CDC);
  v6 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 120))(dword_106B3CDC);
  v16 = v6[6] - v5[3];
  v17 = v6[7] - v5[4];
  v18 = v6[8] - v5[5];
  v7 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 120))(dword_106B3CDC);
  v8 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 120))(dword_106B3CDC);
  v9 = v8[12] - v7[9];
  v10 = v8[13] - v7[10];
  v11 = v8[14];
  v12 = (float *)this[2];
  v13 = v17 - v10 + v12[39];
  v14 = v18 - (v11 - v7[11]) + v12[40];
  v12[38] = v16 - v9 + v12[38];
  v12[39] = v13;
  v12[40] = v14;
  sub_1015A590(this, 1);
  return (*(int (__thiscall **)(_DWORD *))(*this + 144))(this);
}
