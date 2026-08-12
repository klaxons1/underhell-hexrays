char __thiscall sub_10417B50(void *this, float *a2, float *a3, int a4)
{
  int v4; // eax
  int v5; // esi
  float *v7; // eax
  float v8[3]; // [esp+4h] [ebp-Ch] BYREF

  v4 = (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 4))(this, a4);
  if ( !v4 )
    v4 = sub_10261B20();
  v5 = v4;
  if ( !v4 )
    return 0;
  v7 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v4 + 532))(v4);
  v8[0] = *a2 - *v7;
  v8[1] = a2[1] - v7[1];
  v8[2] = a2[2] - v7[2];
  sub_100E0D20(v5, v8);
  sub_101E1CC0(v5, a3, 0);
  (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v5 + 140))(v5, 0, -1);
  return 1;
}
