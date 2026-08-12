int __thiscall sub_10256CC0(int this, __int64 *a2)
{
  double v3; // st7
  __int64 v4; // rax
  int v5; // ecx
  float v7; // [esp+4h] [ebp-24h]
  float v8[3]; // [esp+10h] [ebp-18h] BYREF
  float v9[3]; // [esp+1Ch] [ebp-Ch] BYREF

  sub_10422220(this + 728, v9);
  v3 = *(float *)(this + 1116);
  v4 = *a2;
  v8[0] = v9[0] * v3;
  v8[1] = v9[1] * v3;
  v8[2] = v3 * v9[2];
  sub_1017CC60((float *)(this + 1128), v8, v4);
  v5 = *(_DWORD *)(this + 424);
  *(_BYTE *)(this + 916) = 0;
  if ( v5 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v5 + 48))(v5, 1);
  if ( (*(_BYTE *)(this + 356) & 8) == 0 )
  {
    sub_101129A0((unsigned __int16 *)(this + 320), *(_WORD *)(this + 356) | 8);
    sub_100DCB50((void *)this, 0);
  }
  v7 = *(float *)(dword_106B31C8 + 12) + 0.1;
  sub_100EC4A0((int *)this, v7, 0);
  return sub_100EC3F0((_DWORD *)this, (int)sub_10255D50, 0.0, 0);
}
