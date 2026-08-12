float *__thiscall sub_10217860(int this, _DWORD *a2, int a3, int a4)
{
  int v5; // ecx
  float v7[3]; // [esp+8h] [ebp-3Ch] BYREF
  float v8[3]; // [esp+14h] [ebp-30h] BYREF
  float v9[3]; // [esp+20h] [ebp-24h] BYREF
  float v10[3]; // [esp+2Ch] [ebp-18h] BYREF
  float v11[3]; // [esp+38h] [ebp-Ch] BYREF

  (*(void (__thiscall **)(_DWORD, float *))(**((_DWORD **)off_103EE614 + 60) + 48))(*((_DWORD *)off_103EE614 + 60), v7);
  v5 = *(_DWORD *)(this + 44);
  v8[0] = *(float *)(this + 48) + v7[0];
  v8[1] = *(float *)(this + 52) + v7[1];
  v8[2] = *(float *)(this + 56) + v7[2];
  sub_100F16D0(a2, v5, v8);
  (*(void (__thiscall **)(_DWORD, float *, float *, float *))(**((_DWORD **)off_103EE614 + 60) + 52))(
    *((_DWORD *)off_103EE614 + 60),
    v11,
    v10,
    v9);
  return sub_100F1770(a2, *(_DWORD *)(this + 44), v11, v10, v9);
}
