void __thiscall sub_10394EB0(int *this)
{
  int v2; // eax
  float *v3; // esi
  float *v4; // eax
  float *v5; // eax
  int (__thiscall *v6)(float *); // edx
  float *v7; // eax
  int (__thiscall *v8)(int *); // edx
  float *v9; // eax
  double v10; // st7
  double v11; // st7
  int v12; // [esp-8h] [ebp-30h]
  float v13; // [esp+4h] [ebp-24h] BYREF
  float v14; // [esp+8h] [ebp-20h]
  float v15; // [esp+10h] [ebp-18h]
  float v16; // [esp+14h] [ebp-14h]
  float v17; // [esp+18h] [ebp-10h]
  float v18; // [esp+1Ch] [ebp-Ch]
  double v19; // [esp+20h] [ebp-8h]

  if ( *(int *)(dword_106B31C8 + 20) <= 1 )
  {
    v2 = sub_10261B20();
    v3 = (float *)v2;
    if ( v2 )
    {
      v4 = (float *)(*(int (__thiscall **)(int, float *))(*(_DWORD *)v2 + 536))(v2, &v13);
      if ( v4[1] * v4[1] + *v4 * *v4 + v4[2] * v4[2] >= 19600.0 )
      {
        v5 = (float *)(*(int (__thiscall **)(float *, float *))(*(_DWORD *)v3 + 536))(v3, &v13);
        v18 = *v5 * 0.40000001;
        *(float *)&v19 = v5[1] * 0.40000001;
        v6 = *(int (__thiscall **)(float *))(*(_DWORD *)v3 + 576);
        *((float *)&v19 + 1) = 0.40000001 * v5[2];
        v7 = (float *)v6(v3);
        v15 = *v7 + v18;
        v16 = v7[1] + *(float *)&v19;
        v8 = *(int (__thiscall **)(int *))(*this + 576);
        v17 = v7[2] + *((float *)&v19 + 1);
        v9 = (float *)v8(this);
        v13 = *v9 - v15;
        v14 = v9[1] - v16;
        v12 = this[419];
        v19 = v9[2] - v17;
        v10 = sub_100737D0(v12) * 0.5;
        if ( v10 > v19 )
        {
          v11 = sub_100737B0(this[419]);
          if ( v14 * v14 + v13 * v13 < v11 * 1.414 * (v11 * 1.414) )
            sub_100347E0((float *)this, v3);
        }
      }
    }
  }
}
