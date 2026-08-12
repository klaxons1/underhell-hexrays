int __thiscall sub_100D5DE0(_DWORD *this, int a2, int a3, float a4, int a5, int a6, int a7, int a8)
{
  _DWORD *v8; // esi
  float *v9; // edi
  float *v10; // eax
  double v11; // st7
  double v12; // st6
  double v13; // st5
  int (__thiscall *v14)(_DWORD *); // edx
  float *v15; // ecx
  int v16; // eax
  float *v17; // eax
  int v19[3]; // [esp+1Ch] [ebp-18h] BYREF
  float v20; // [esp+28h] [ebp-Ch] BYREF
  float v21; // [esp+2Ch] [ebp-8h]
  float v22; // [esp+30h] [ebp-4h]

  v8 = this + 80;
  v9 = (float *)(*(int (__thiscall **)(_DWORD *))(this[80] + 8))(this + 80);
  v10 = (float *)(*(int (__thiscall **)(_DWORD *))(*v8 + 4))(v8);
  v11 = *v10 + *v9;
  v20 = v11;
  v12 = v10[1] + v9[1];
  v21 = v12;
  v13 = v10[2] + v9[2];
  v14 = *(int (__thiscall **)(_DWORD *))(*v8 + 36);
  v20 = v11 * 0.5;
  v21 = v12 * 0.5;
  v22 = 0.5 * v13;
  v15 = (float *)v14(v8);
  if ( *v15 == flt_106F1CB4 && v15[1] == flt_106F1CB8 && v15[2] == flt_106F1CBC
    || v20 == flt_106F1CA8 && v21 == flt_106F1CAC && v22 == flt_106F1CB0 )
  {
    v17 = (float *)(*(int (__thiscall **)(_DWORD *))(*v8 + 32))(v8);
    *(float *)v19 = *v17 + v20;
    *(float *)&v19[1] = v17[1] + v21;
    *(float *)&v19[2] = v17[2] + v22;
  }
  else
  {
    v16 = (*(int (__thiscall **)(_DWORD *))(*v8 + 40))(v8);
    sub_10421B40(&v20, v16, v19);
  }
  return sub_1011BA70((int)v19, a2, a3, a4, a5, a6, a7, a8);
}
