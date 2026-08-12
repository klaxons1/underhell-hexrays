void __cdecl sub_100A6000(int a1)
{
  int v1; // edi
  char v2; // cl
  int v3; // eax
  float v4; // edx
  float v5; // eax
  double v6; // st7
  _BYTE v7[12]; // [esp+4h] [ebp-50h] BYREF
  _BYTE v8[12]; // [esp+10h] [ebp-44h] BYREF
  float v9[3]; // [esp+1Ch] [ebp-38h] BYREF
  _BYTE v10[12]; // [esp+28h] [ebp-2Ch] BYREF
  float v11[3]; // [esp+34h] [ebp-20h] BYREF
  float v12; // [esp+40h] [ebp-14h] BYREF
  float v13; // [esp+44h] [ebp-10h]
  float v14; // [esp+48h] [ebp-Ch]
  int v15; // [esp+4Ch] [ebp-8h]
  float v16; // [esp+50h] [ebp-4h]

  v1 = sub_100422D0();
  if ( v1 )
  {
    sub_100A5ED0(v9, a1);
    v2 = *(_BYTE *)(a1 + 48);
    v16 = *(float *)(a1 + 56);
    LOBYTE(v15) = v2 & 1;
    v3 = sub_1009B7F0((int *)a1);
    if ( v3 && v3 == *(_DWORD *)(v1 + 80) )
    {
      v4 = *(float *)(a1 + 12);
      v5 = *(float *)(a1 + 16);
      v14 = *(float *)(a1 + 20);
      v12 = v4;
      v13 = v5;
      (*(void (__thiscall **)(int, _BYTE *))(*(_DWORD *)dword_1041315C + 76))(dword_1041315C, v10);
      sub_101EE040(v10, v7, v11, v8);
      v12 = v11[0] * 4.0 + *(float *)(a1 + 12);
      v13 = v11[1] * 4.0 + *(float *)(a1 + 16);
      v14 = 4.0 * v11[2] + *(float *)(a1 + 20) - 0.5;
      sub_1008DDF0(&v12, (float *)a1);
    }
    else
    {
      v6 = v16;
      if ( 0.0 == v16 )
        v6 = 5000.0;
      sub_1008E240(v9, (float *)a1, (int)v6, v15);
    }
  }
}
