void __thiscall sub_103C8EC0(float *this)
{
  float *v2; // eax
  double v3; // st7
  int (__thiscall *v4)(float *, int *, float *, _DWORD); // eax
  float *v5; // eax
  double v6; // st7
  double v7; // st6
  double v8; // st5
  int (__thiscall *v9)(float *); // eax
  float *v10; // eax
  int v11; // edx
  double v12; // st7
  int (__thiscall *v13)(float *); // eax
  float *v14; // eax
  float v15[3]; // [esp+18h] [ebp-30h] BYREF
  int v16[3]; // [esp+24h] [ebp-24h] BYREF
  float v17[3]; // [esp+30h] [ebp-18h] BYREF
  float v18; // [esp+3Ch] [ebp-Ch]
  float v19; // [esp+40h] [ebp-8h]
  float v20; // [esp+44h] [ebp-4h]

  if ( *(float *)(dword_106B31C8 + 12) > (double)this[1462] )
  {
    if ( (*(int (__thiscall **)(float *))(*(_DWORD *)this + 368))(this) )
    {
      v2 = (float *)(*(int (__thiscall **)(float *, int *))(*(_DWORD *)this + 968))(this, v16);
      v17[0] = *v2;
      v17[1] = v2[1];
      v3 = v2[2];
      v4 = *(int (__thiscall **)(float *, int *, float *, _DWORD))(*(_DWORD *)this + 2096);
      v17[2] = v3;
      v5 = (float *)v4(this, v16, v17, 0);
      v6 = *v5;
      v15[0] = *v5;
      v7 = v5[1];
      v15[1] = v5[1];
      v8 = v5[2];
      v15[2] = v5[2];
      if ( *(_DWORD *)(dword_106EC13C + 48) )
      {
        v9 = *(int (__thiscall **)(float *))(*(_DWORD *)this + 576);
        v18 = v6 * 256.0;
        v19 = v7 * 256.0;
        v20 = 256.0 * v8;
        v10 = (float *)v9(this);
        v11 = *(_DWORD *)this;
        *(float *)v16 = *v10 + v18;
        *(float *)&v16[1] = v10[1] + v19;
        v12 = v10[2];
        v13 = *(int (__thiscall **)(float *))(v11 + 576);
        *(float *)&v16[2] = v12 + v20;
        v14 = (float *)v13(this);
        sub_1011BC50(v14, (float *)v16, 255, 0, 0, 1, 0.1);
      }
      (*(void (__thiscall **)(float *, float *))(*(_DWORD *)this + 1836))(this, v15);
    }
    else
    {
      (*(void (__thiscall **)(float *))(*(_DWORD *)this + 1840))(this);
    }
  }
}
