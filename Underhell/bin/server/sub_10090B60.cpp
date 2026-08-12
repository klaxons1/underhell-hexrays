void __thiscall sub_10090B60(_DWORD *this, float *a2, float *a3)
{
  _DWORD *v3; // ecx
  int v4; // eax
  int v5[3]; // [esp+4h] [ebp-24h] BYREF
  int v6[3]; // [esp+10h] [ebp-18h] BYREF
  int v7; // [esp+1Ch] [ebp-Ch] BYREF
  float v8; // [esp+20h] [ebp-8h]
  float v9; // [esp+24h] [ebp-4h]

  v3 = (_DWORD *)*this;
  if ( (v3[59] & 0x4000000) != 0 )
  {
    v4 = (*(int (__thiscall **)(_DWORD *))(*v3 + 576))(v3);
    v7 = *(int *)v4;
    v8 = *(float *)(v4 + 4);
    v9 = *(float *)(v4 + 8);
    *(float *)v6 = *a2 * 20.0 + *(float *)&v7;
    *(float *)&v6[1] = a2[1] * 20.0 + v8;
    *(float *)&v6[2] = a2[2] * 20.0 + v9;
    *(float *)v5 = *(float *)&v7 + *a3 * 20.0;
    *(float *)&v5[1] = v8 + a3[1] * 20.0;
    *(float *)&v5[2] = v9 + 20.0 * a3[2];
    sub_1011BC50((int)&v7, (int)v6, 255, 255, 255, 1, 0.1);
    sub_1011BC50((int)&v7, (int)v5, 255, 255, 0, 1, 0.1);
  }
}
