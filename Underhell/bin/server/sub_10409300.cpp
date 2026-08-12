void __thiscall sub_10409300(int this, float *a2)
{
  unsigned int v3; // eax
  int v4; // ecx
  bool v5; // zf
  int v6; // eax
  float v7; // [esp+8h] [ebp-18h] BYREF
  float v8; // [esp+Ch] [ebp-14h]
  float v9; // [esp+10h] [ebp-10h]
  float v10; // [esp+14h] [ebp-Ch]
  float v11; // [esp+18h] [ebp-8h]
  float v12; // [esp+1Ch] [ebp-4h]
  int savedregs; // [esp+20h] [ebp+0h] BYREF

  sub_104091D0(this, (int)&savedregs);
  *(_BYTE *)(this + 1393) = 1;
  v3 = *(_DWORD *)(this + 1408);
  if ( v3 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 1408) & 0xFFF) + 2] != v3 >> 12 )
    v4 = 0;
  else
    v4 = off_1061BE18[4 * (*(_DWORD *)(this + 1408) & 0xFFF) + 1];
  v5 = *(_BYTE *)(v4 + 896) == 0;
  *(_BYTE *)(v4 + 897) = 1;
  if ( !v5 )
    sub_10242BA0(v4);
  v6 = sub_100D1940((_DWORD *)this);
  (*(void (__thiscall **)(int, float *))(*(_DWORD *)v6 + 968))(v6, &v7);
  v10 = *a2 - v7;
  v11 = a2[1] - v8;
  v12 = a2[2] - v9;
  off_10689714();
  v10 = v10 * 56755.84 + v7;
  v11 = v11 * 56755.84 + v8;
  v12 = 56755.84 * v12 + v9;
  sub_104059F0((_DWORD *)this, (int)&savedregs, v7, v8, v9, v10, v11, v12);
  *(float *)(this + 1396) = *a2;
  *(float *)(this + 1400) = a2[1];
  *(float *)(this + 1404) = a2[2];
}
