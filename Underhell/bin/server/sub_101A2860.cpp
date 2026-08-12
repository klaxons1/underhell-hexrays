void __thiscall sub_101A2860(void *this, int a2)
{
  float *v2; // esi
  float *v4; // edi
  float *v5; // eax
  double v6; // st7
  float v7[3]; // [esp+18h] [ebp-24h] BYREF
  float v8[3]; // [esp+24h] [ebp-18h] BYREF
  float v9; // [esp+30h] [ebp-Ch]
  float v10; // [esp+34h] [ebp-8h]
  float v11; // [esp+38h] [ebp-4h]

  v2 = (float *)a2;
  if ( *(float *)&a2 != 0.0 )
  {
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a2 + 320))(a2) )
    {
      v8[0] = 20.0;
      v8[1] = 20.0;
      v8[2] = -30.0;
      sub_100F7A60(v2, v8);
      v4 = (float *)(*(int (__thiscall **)(void *))(*(_DWORD *)this + 576))(this);
      v5 = (float *)(*(int (__thiscall **)(float *))(*(_DWORD *)v2 + 576))(v2);
      v9 = *v5 - *v4;
      v10 = v5[1] - v4[1];
      v11 = v5[2] - v4[2];
      off_10689714();
      v11 = 0.0;
      v7[0] = v9 * 32.0;
      v7[1] = v10 * 32.0;
      v7[2] = 32.0;
      sub_100DD660((int)v2, v7);
      a2 = -2147483520;
      sub_102600B0((int)v2, (int)&a2, 1.0, 0.1, 1);
      v6 = *(float *)(dword_106B8FBC + 44);
    }
    else
    {
      v6 = 250.0;
    }
    *(float *)&a2 = v6;
    sub_101FB2A0(v2);
    sub_10370AF0((int)this, (int)v2, *(float *)&a2);
  }
}
