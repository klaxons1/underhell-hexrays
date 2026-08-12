int __thiscall sub_101B19C0(int this, int a2, int a3)
{
  int v4; // ecx
  int v5; // ebx
  int v6; // eax
  int v7; // ecx
  double v8; // st6
  int v9; // edi
  unsigned __int16 v10; // ax
  _BYTE v12[48]; // [esp+Ch] [ebp-D8h] BYREF
  _BYTE v13[48]; // [esp+3Ch] [ebp-A8h] BYREF
  _BYTE v14[48]; // [esp+6Ch] [ebp-78h] BYREF
  _BYTE v15[48]; // [esp+9Ch] [ebp-48h] BYREF
  float v16; // [esp+CCh] [ebp-18h]
  float v17; // [esp+D0h] [ebp-14h]
  float v18; // [esp+D4h] [ebp-10h]
  float v19; // [esp+D8h] [ebp-Ch]
  float v20; // [esp+DCh] [ebp-8h]
  bool v21; // [esp+E0h] [ebp-4h]

  sub_10422700(v15);
  v17 = 0.0;
  v4 = *(_DWORD *)(a3 + 24);
  v18 = 0.0;
  v5 = *(_DWORD *)(a3 + 28);
  v16 = 1.0;
  v21 = 1;
  v19 = 1.0;
  v20 = 1.0;
  (*(void (__thiscall **)(int, _BYTE *))(*(_DWORD *)v4 + 192))(v4, v12);
  sub_10424F80(v12, v13);
  (*(void (__thiscall **)(int, _BYTE *))(*(_DWORD *)v5 + 192))(v5, v14);
  sub_10421E30(v13, v14, v15);
  v6 = *(_DWORD *)(this + 248);
  v16 = 1.0;
  v7 = *(_DWORD *)(a3 + 24);
  v8 = *(float *)(this + 820) * 0.45454544;
  v21 = (v6 & 4) == 0;
  v17 = v8;
  v18 = 0.45454544 * *(float *)(this + 824);
  v19 = *(float *)(a3 + 36);
  v20 = *(float *)(a3 + 40);
  if ( v7 == dword_106BAFEC )
  {
    v9 = *(_DWORD *)(a3 + 28);
    v10 = (*(int (__thiscall **)(int))(*(_DWORD *)v9 + 76))(v9);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v9 + 72))(v9, v10 | 2);
  }
  return (*(int (__thiscall **)(int, _DWORD, _DWORD, int, _BYTE *))(*(_DWORD *)dword_106BAFF4 + 68))(
           dword_106BAFF4,
           *(_DWORD *)(a3 + 24),
           *(_DWORD *)(a3 + 28),
           a2,
           v15);
}
