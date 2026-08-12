int __thiscall sub_1014BB00(int this)
{
  float *v2; // edi
  float *v3; // ebx
  int v4; // eax
  int v5; // esi
  int v7; // [esp+20h] [ebp-4h]

  v2 = (float *)(this + 64);
  v3 = (float *)(this + 52);
  v7 = dword_103E7E94;
  sub_10144510((float *)(this + 52), (float *)(this + 64), 4);
  sub_1014B3A0(
    (_DWORD *)this,
    (int)v2,
    *(float *)(this - 196),
    *(_DWORD *)(this + 132),
    COERCE_INT(*(float *)(this - 192)),
    -1);
  (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_10413168 + 120))(
    dword_10413168,
    *(_DWORD *)(this - 184),
    1);
  sub_101443F0();
  sub_1014B480((int *)this, *(float *)(this - 196), 4, *(float *)(this - 192));
  sub_10144510(v3, v2, v7);
  v4 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C96C + 380))(dword_1047C96C);
  v5 = v4;
  if ( v4 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 8))(v4);
  (*(void (__thiscall **)(int, _DWORD, _DWORD, _DWORD, int))(*(_DWORD *)v5 + 292))(v5, 0, 0, 0, 255);
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v5 + 16))(v5, 0);
  (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 12))(v5);
  return (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 4))(v5);
}
