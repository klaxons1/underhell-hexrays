void __cdecl sub_101AA030(int a1)
{
  int v1; // edi
  char v2; // cl
  int v3; // eax
  float v4; // edx
  float v5; // eax
  void (__thiscall *v6)(int, _BYTE *); // edx
  double v7; // st7
  _BYTE v8[12]; // [esp+4h] [ebp-50h] BYREF
  _BYTE v9[12]; // [esp+10h] [ebp-44h] BYREF
  float v10[3]; // [esp+1Ch] [ebp-38h] BYREF
  _BYTE v11[12]; // [esp+28h] [ebp-2Ch] BYREF
  float v12[3]; // [esp+34h] [ebp-20h] BYREF
  float v13; // [esp+40h] [ebp-14h] BYREF
  float v14; // [esp+44h] [ebp-10h]
  float v15; // [esp+48h] [ebp-Ch]
  int v16; // [esp+4Ch] [ebp-8h]
  float v17; // [esp+50h] [ebp-4h]

  v1 = sub_100422D0();
  if ( v1 )
  {
    sub_100A5ED0(v10, a1);
    v2 = *(_BYTE *)(a1 + 48);
    v17 = *(float *)(a1 + 56);
    LOBYTE(v16) = v2 & 1;
    v3 = sub_1009B7F0((int *)a1);
    if ( v3 && v3 == *(_DWORD *)(v1 + 80) )
    {
      v4 = *(float *)(a1 + 12);
      v5 = *(float *)(a1 + 16);
      v15 = *(float *)(a1 + 20);
      v13 = v4;
      v6 = *(void (__thiscall **)(int, _BYTE *))(*(_DWORD *)dword_1041315C + 76);
      v14 = v5;
      v6(dword_1041315C, v11);
      sub_101EE040(v11, v8, v12, v9);
      v13 = v12[0] * 4.0 + *(float *)(a1 + 12);
      v14 = v12[1] * 4.0 + *(float *)(a1 + 16);
      v15 = 4.0 * v12[2] + *(float *)(a1 + 20) - 0.5;
      sub_101A9D80(&v13, (float *)a1);
    }
    else
    {
      v7 = v17;
      if ( 0.0 == v17 )
        v7 = 8000.0;
      sub_101A9F10(v10, (float *)a1, (int)v7, v16);
    }
  }
}
