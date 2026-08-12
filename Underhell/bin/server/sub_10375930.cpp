int sub_10375930()
{
  int v0; // ebx
  _DWORD *v1; // edi
  float *v2; // eax
  void *v3; // esi
  _BYTE v5[12]; // [esp+Ch] [ebp-38h] BYREF
  float v6[3]; // [esp+18h] [ebp-2Ch] BYREF
  float v7[3]; // [esp+24h] [ebp-20h] BYREF
  float v8[3]; // [esp+30h] [ebp-14h] BYREF
  int v9; // [esp+3Ch] [ebp-8h]
  float *v10; // [esp+40h] [ebp-4h]

  v0 = dword_10700AC8;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  LOBYTE(v9) = sub_100E8650();
  sub_100E8660(1);
  v1 = (_DWORD *)sub_10153490();
  v2 = (float *)(*(int (__thiscall **)(_DWORD *))(*v1 + 508))(v1);
  v8[0] = *v2;
  v8[1] = v2[1];
  v8[2] = v2[2];
  v10 = (float *)(*(int (__thiscall **)(_DWORD *, _BYTE *))(*v1 + 504))(v1, v5);
  v3 = (void *)sub_101811E0("hunter_flechette", -1);
  sub_1025F370(v3, v10, 0);
  sub_100E0EA0((int)v3, v8);
  (*(void (__thiscall **)(void *))(*(_DWORD *)v3 + 96))(v3);
  (*(void (__thiscall **)(void *))(*(_DWORD *)v3 + 136))(v3);
  (*(void (__thiscall **)(void *, _DWORD *))(*(_DWORD *)v3 + 76))(v3, v1);
  (*(void (__thiscall **)(void *))(*(_DWORD *)v3 + 100))(v3);
  sub_10260750((char *)v3);
  sub_100F5A30(v1, (int)v7, 0, 0);
  v6[0] = v7[0] * 2000.0;
  v6[1] = v7[1] * 2000.0;
  v6[2] = 2000.0 * v7[2];
  sub_103728D0((int)v3, v6, 0);
  sub_100E8660(v9);
  return (*(int (__thiscall **)(int))(*(_DWORD *)v0 + 104))(v0);
}
