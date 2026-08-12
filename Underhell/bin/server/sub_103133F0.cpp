int __thiscall sub_103133F0(int *this, float *a2, float *a3, float *a4)
{
  float *v4; // ebx
  long double v6; // st7
  int v8; // eax
  float *v9; // eax
  double v10; // st6
  double v11; // st7
  void (__thiscall *v12)(int *, float *); // edx
  int v13; // eax
  float *v14; // eax
  int v15; // edx
  double v16; // st7
  double v17; // st7
  int v18; // eax
  int (__thiscall *v19)(int *, _DWORD *); // edx
  float v21[22]; // [esp+20h] [ebp-DCh] BYREF
  float v22[3]; // [esp+78h] [ebp-84h] BYREF
  _DWORD v23[20]; // [esp+84h] [ebp-78h] BYREF
  char v24; // [esp+D4h] [ebp-28h]
  __int16 v25; // [esp+D8h] [ebp-24h]
  float v26[3]; // [esp+DCh] [ebp-20h] BYREF
  int v27[3]; // [esp+E8h] [ebp-14h] BYREF
  float v28; // [esp+F4h] [ebp-8h]
  int v29; // [esp+F8h] [ebp-4h]
  float v30; // [esp+104h] [ebp+8h]

  v4 = a3;
  v6 = sin(*(float *)(dword_106E34F4 + 44) * 0.5 * 0.017444445);
  v29 = *(_DWORD *)(dword_106E3584 + 48);
  v28 = v6;
  if ( (_BYTE)a4 )
  {
    if ( (*(int (__thiscall **)(int *))(*this + 368))(this) )
    {
      if ( (*(int (__thiscall **)(int *))(*this + 368))(this) )
      {
        v8 = (*(int (__thiscall **)(int *))(*this + 368))(this);
        v9 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v8 + 576))(v8);
        v26[0] = *v4 * 1024.0 + *a2;
        v10 = v4[1];
        a4 = v9;
        v26[1] = v10 * 1024.0 + a2[1];
        v26[2] = 1024.0 * v4[2] + a2[2];
        sub_10424590(v9, a2, v26, v22, &a3);
        if ( *(float *)&a3 > 0.0 )
        {
          *(float *)v27 = *a4 - *a2;
          *(float *)&v27[1] = a4[1] - a2[1];
          *(float *)&v27[2] = a4[2] - a2[2];
          v11 = off_10689714();
          v30 = v11;
          sub_1004BCD0(a4, v22);
          if ( v11 / v30 <= v28 )
          {
            sub_10312E60(v21, 1, a2, (float *)v27, &flt_106F1CA8, 8192.0, this[1017], 1);
            v12 = *(void (__thiscall **)(int *, float *))(*this + 432);
            LODWORD(v21[12]) = 1;
            v12(this, v21);
            --v29;
          }
        }
      }
    }
  }
  if ( (*(int (__thiscall **)(int *))(*this + 368))(this) )
  {
    v13 = (*(int (__thiscall **)(int *))(*this + 368))(this);
    v14 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v13 + 576))(v13);
    sub_1023D4B0(8, v14, 180, 0.5, (int)this, 2, 0);
  }
  (*(void (__thiscall **)(int *))(*this + 1116))(this);
  *(float *)&v23[1] = *a2;
  v15 = this[1017];
  *(float *)&v23[2] = a2[1];
  v16 = a2[2];
  v23[0] = v29;
  *(float *)&v23[3] = v16;
  memset(&v23[14], 0, 12);
  *(float *)&v23[4] = *v4;
  v23[18] = 0;
  *(float *)&v23[5] = v4[1];
  v23[19] = 0;
  v17 = v4[2];
  v25 = 0;
  v18 = *this;
  *(float *)&v23[6] = v17;
  *(float *)&v23[7] = v28;
  v23[11] = v15;
  v19 = *(int (__thiscall **)(int *, _DWORD *))(v18 + 432);
  *(float *)&v23[8] = v28;
  *(float *)&v23[9] = v28;
  *(float *)&v23[10] = 8192.0;
  v24 = 1;
  v23[12] = 1;
  *(float *)&v23[17] = 1.0;
  return v19(this, v23);
}
