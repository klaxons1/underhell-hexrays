int sub_10039B60()
{
  int v0; // esi
  int result; // eax
  _DWORD *v2; // edi
  double v3; // st6
  double v4; // st7
  double v5; // st7
  _BYTE v6[12]; // [esp+8h] [ebp-78h] BYREF
  float v7; // [esp+14h] [ebp-6Ch]
  float v8; // [esp+18h] [ebp-68h]
  float v9; // [esp+1Ch] [ebp-64h]
  float v10[3]; // [esp+5Ch] [ebp-24h] BYREF
  float v11[3]; // [esp+68h] [ebp-18h] BYREF
  float v12; // [esp+74h] [ebp-Ch] BYREF
  float v13; // [esp+78h] [ebp-8h]
  float v14; // [esp+7Ch] [ebp-4h]
  int savedregs; // [esp+80h] [ebp+0h] BYREF

  v0 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_10413164 + 16))(dword_10413164, 1);
  result = sub_100422D0();
  v2 = (_DWORD *)result;
  if ( result )
  {
    (*(void (__thiscall **)(int, float *))(*(_DWORD *)result + 532))(result, v11);
    sub_10013260(v2, (int)&v12, 0, 0);
    v10[0] = v12 * 56755.84 + v11[0];
    v10[1] = v13 * 56755.84 + v11[1];
    v10[2] = 56755.84 * v14 + v11[2];
    result = sub_1000FCE0((int)&savedregs, v0, v11, v10, 100679683, (int)v2, 0, (int)v6);
    v3 = v9 - 12.0 * v14;
    v4 = v8 - v13 * 12.0;
    *(float *)(v0 + 4) = v7 - v12 * 12.0;
    *(float *)(v0 + 8) = v4;
    *(float *)(v0 + 12) = v3;
    *(float *)(v0 + 16) = 200.0;
    *(float *)(v0 + 28) = 40.0;
    v5 = *((float *)off_103DC81C + 3);
    *(_DWORD *)(v0 + 20) = 88129791;
    *(float *)(v0 + 24) = v5 + 5.0;
  }
  return result;
}
