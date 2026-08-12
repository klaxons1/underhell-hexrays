void __thiscall sub_10044DC0(float *this, float *a2, float *a3, float *a4)
{
  int v5; // edi
  float *v6; // eax
  int (__thiscall *v7)(int); // edx
  float *v8; // eax
  int v9; // eax
  float *v10; // eax
  float v11; // ecx
  float v12; // edx
  float v13; // [esp+Ch] [ebp-24h] BYREF
  float v14; // [esp+10h] [ebp-20h]
  float v15; // [esp+14h] [ebp-1Ch]
  float v16[5]; // [esp+18h] [ebp-18h] BYREF
  float v17; // [esp+2Ch] [ebp-4h]

  v5 = (*(int (__thiscall **)(float *))(*(_DWORD *)this + 848))(this);
  if ( !v5 )
    v5 = (int)this;
  this[1023] = 0.0;
  v6 = (float *)(*(int (__thiscall **)(int, float *))(*(_DWORD *)v5 + 532))(v5, &v13);
  *a2 = *v6;
  a2[1] = v6[1];
  v7 = *(int (__thiscall **)(int))(*(_DWORD *)v5 + 536);
  a2[2] = v6[2];
  v8 = (float *)v7(v5);
  *a3 = *v8;
  a3[1] = v8[1];
  a3[2] = v8[2];
  if ( *(int *)(dword_10407404 + 48) > 0 )
  {
    v9 = sub_1007A6A0(*(_DWORD *)(dword_10407404 + 48));
    if ( v9 )
    {
      v10 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v9 + 36))(v9);
      v11 = *v10;
      v12 = v10[1];
      v17 = v10[2];
      v16[3] = v11;
      v16[4] = v12;
      v13 = v11 - *a2;
      v14 = v12 - a2[1];
      v15 = v17 + 54.0 - a2[2];
      sub_101EE190(&v13, v16);
      sub_10076970(v16);
      *a3 = v16[0];
      a3[1] = v16[1];
      a3[2] = v16[2];
      (*(void (__thiscall **)(int, float *))(*(_DWORD *)dword_1041315C + 80))(dword_1041315C, v16);
    }
  }
  sub_10043310(this, &v13);
  *a2 = *a2 + v13;
  a2[1] = a2[1] + v14;
  a2[2] = a2[2] + v15;
  *a4 = ((double (__thiscall *)(float *))*(_DWORD *)(*(_DWORD *)this + 952))(this);
}
