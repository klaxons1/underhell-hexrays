bool __thiscall sub_1029F240(_DWORD *this, float *a2)
{
  int v3; // eax
  int v4; // ecx
  _DWORD *v5; // ebx
  float *v6; // eax
  double v7; // st7
  double v8; // st3
  double v9; // st6
  double v10; // st3
  double v11; // st4
  int v13[14]; // [esp+18h] [ebp-44h] BYREF
  float v14[3]; // [esp+50h] [ebp-Ch] BYREF

  memset(v13, 0, sizeof(v13));
  v3 = sub_1008D680(*(_DWORD *)(this[1] + 2596), (int)this, (int)a2, a2);
  if ( v3 == -1 )
    return 0;
  v4 = this[1];
  v5 = *(_DWORD **)(v4 + 2600);
  v6 = sub_10084FD0((_DWORD *)dword_106935D8, v14, *(_DWORD *)(v4 + 1676), v3);
  sub_1007C550(v5, 0, v6, a2, 16395, 0, 0.0, 0, (float *)v13);
  v7 = sub_100737B0(*(_DWORD *)(this[1] + 1676));
  v8 = *(float *)&v13[1] - *a2;
  v9 = v8 * v8;
  v10 = *(float *)&v13[2] - a2[1];
  v11 = *(float *)&v13[3] - a2[2];
  return v11 * v11 + v10 * v10 + v9 < v7 * v7 && sub_1007A470(*(_DWORD *)(this[1] + 2600), (float *)&v13[1], 16395);
}
