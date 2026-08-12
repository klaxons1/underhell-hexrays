void sub_1011D2A0()
{
  _DWORD *v0; // eax
  _DWORD *v1; // esi
  _BYTE v2[12]; // [esp+Ch] [ebp-84h] BYREF
  int v3; // [esp+18h] [ebp-78h]
  float v4; // [esp+1Ch] [ebp-74h]
  float v5; // [esp+20h] [ebp-70h]
  float v6; // [esp+24h] [ebp-6Ch]
  float v7; // [esp+28h] [ebp-68h]
  float v8; // [esp+2Ch] [ebp-64h]
  float v9; // [esp+38h] [ebp-58h]
  float v10[3]; // [esp+60h] [ebp-30h] BYREF
  float v11[3]; // [esp+6Ch] [ebp-24h] BYREF
  int v12; // [esp+78h] [ebp-18h] BYREF
  float v13; // [esp+7Ch] [ebp-14h]
  float v14; // [esp+80h] [ebp-10h]
  int v15; // [esp+84h] [ebp-Ch] BYREF
  float v16; // [esp+88h] [ebp-8h]
  float v17; // [esp+8Ch] [ebp-4h]
  int savedregs; // [esp+90h] [ebp+0h] BYREF

  v0 = (_DWORD *)sub_1025FB50(dword_1060F300);
  v1 = v0;
  if ( v0 )
  {
    (*(void (__thiscall **)(_DWORD *, float *))(*v0 + 504))(v0, v11);
    sub_100F5A30(v1, (int)v10, 0, 0);
    *(float *)&v15 = v10[0] * 2048.0 + v11[0];
    v16 = v10[1] * 2048.0 + v11[1];
    v17 = 2048.0 * v10[2] + v11[2];
    sub_1002A5F0((int)&savedregs, (int)v1, v11, (float *)&v15, 33570827, (int)v1, 0, (int)v2);
    if ( 1.0 != v9 && (v6 + v7) * 0.0 + v8 > 0.5 )
    {
      v5 = v5 + 1.0;
      *(float *)&v15 = *(float *)&v3 - 6.0;
      v16 = v4;
      v17 = v5;
      *(float *)&v12 = *(float *)&v3 + 6.0;
      v13 = v4;
      v14 = v5;
      sub_1011BC50((float *)&v15, (float *)&v12, 255, 0, 0, 0, 0.0);
      v15 = v3;
      v16 = v4 - 6.0;
      v17 = v5;
      v12 = v3;
      v13 = v4 + 6.0;
      v14 = v5;
      sub_1011BC50((float *)&v15, (float *)&v12, 255, 0, 0, 0, 0.0);
    }
  }
}
