void __thiscall sub_10413570(int this)
{
  double v2; // st7
  int v3; // edx
  int *v4; // eax
  int v5; // eax
  void (__thiscall *v6)(int, _DWORD *); // edx
  _DWORD v7[20]; // [esp+14h] [ebp-70h] BYREF
  __int16 v8; // [esp+64h] [ebp-20h]
  char v9; // [esp+67h] [ebp-1Dh]
  __int16 v10; // [esp+68h] [ebp-1Ch]
  float v11[3]; // [esp+6Ch] [ebp-18h] BYREF
  float v12[3]; // [esp+78h] [ebp-Ch] BYREF

  if ( *(float *)(dword_106B31C8 + 12) >= (double)*(float *)(this + 1748) )
  {
    if ( (int)--*(_DWORD *)(this + 1752) <= 0 )
    {
      *(_DWORD *)(this + 1752) = 10;
      v2 = *(float *)(dword_106B31C8 + 12) + 2.0;
    }
    else
    {
      v2 = *(float *)(dword_106B31C8 + 12) + 0.075000003;
    }
    v3 = *(_DWORD *)(this + 1740);
    *(float *)(this + 1748) = v2;
    sub_100BD6D0((void *)this, v3, (int)v12, v11, 0, 0);
    v4 = sub_102D9B20();
    v5 = sub_100B9D10(v4, "AR2");
    *(float *)&v7[17] = 1.0;
    v7[0] = 1;
    *(float *)&v7[1] = v12[0];
    v7[12] = 1;
    v8 = 1;
    *(float *)&v7[2] = v12[1];
    v7[11] = v5;
    v6 = *(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)this + 432);
    *(float *)&v7[3] = v12[2];
    *(float *)&v7[4] = v11[0];
    *(float *)&v7[5] = v11[1];
    v7[19] = 0;
    *(float *)&v7[6] = v11[2];
    memset(&v7[13], 0, 16);
    v10 = 0;
    *(float *)&v7[7] = 0.069760002;
    v9 = 0;
    *(float *)&v7[8] = 0.069760002;
    *(float *)&v7[9] = 0.069760002;
    v7[18] = 0;
    *(float *)&v7[10] = 56755.84;
    v6(this, v7);
    sub_104134D0((_DWORD *)this);
    sub_1023C380((_DWORD *)this, (int)"Weapon_AR2.Single", 0.0, 0);
  }
}
