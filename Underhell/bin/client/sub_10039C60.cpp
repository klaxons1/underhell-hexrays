int sub_10039C60()
{
  _DWORD *v0; // esi
  int (__thiscall *v1)(_DWORD *, _BYTE *); // edx
  float *v2; // eax
  int (__thiscall *v3)(_DWORD *); // edx
  float *v4; // eax
  _BYTE v6[44]; // [esp+4h] [ebp-90h] BYREF
  float v7; // [esp+30h] [ebp-64h]
  int v8; // [esp+50h] [ebp-44h]
  float v9[3]; // [esp+58h] [ebp-3Ch] BYREF
  _BYTE v10[12]; // [esp+64h] [ebp-30h] BYREF
  float v11[3]; // [esp+70h] [ebp-24h] BYREF
  float v12[3]; // [esp+7Ch] [ebp-18h] BYREF
  float v13; // [esp+88h] [ebp-Ch]
  float v14; // [esp+8Ch] [ebp-8h]
  float v15; // [esp+90h] [ebp-4h]
  int savedregs; // [esp+94h] [ebp+0h] BYREF

  v0 = (_DWORD *)sub_100422D0();
  if ( !v0 )
    return 0;
  sub_10013260(v0, (int)v11, 0, 0);
  v1 = *(int (__thiscall **)(_DWORD *, _BYTE *))(*v0 + 532);
  v13 = v11[0] * 16384.0;
  v14 = v11[1] * 16384.0;
  v15 = 16384.0 * v11[2];
  v2 = (float *)v1(v0, v10);
  v3 = *(int (__thiscall **)(_DWORD *))(*v0 + 532);
  v12[0] = *v2 + v13;
  v12[1] = v2[1] + v14;
  v12[2] = v2[2] + v15;
  v4 = (float *)v3(v0);
  sub_1000FCE0((int)&savedregs, (int)v0, v4, v9, (int)v12, 33570827, (int)v0, 0);
  if ( 1.0 == v7 )
    return 0;
  if ( (unsigned __int8)sub_100AF310(v6) )
    return v8;
  else
    return 0;
}
