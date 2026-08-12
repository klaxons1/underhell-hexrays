int __thiscall sub_1032CA10(void *this, int a2, _DWORD *a3)
{
  _BYTE v4[48]; // [esp+4h] [ebp-E4h] BYREF
  _BYTE v5[48]; // [esp+34h] [ebp-B4h] BYREF
  _BYTE v6[48]; // [esp+64h] [ebp-84h] BYREF
  _BYTE v7[48]; // [esp+94h] [ebp-54h] BYREF
  float v8[3]; // [esp+C4h] [ebp-24h] BYREF
  float v9[3]; // [esp+D0h] [ebp-18h] BYREF
  float v10; // [esp+DCh] [ebp-Ch] BYREF
  float v11; // [esp+E0h] [ebp-8h]
  float v12; // [esp+E4h] [ebp-4h]

  (*(void (__thiscall **)(void *, int, _BYTE *))(*(_DWORD *)this + 796))(this, a2, v4);
  v10 = 0.0;
  v11 = 0.0;
  v12 = 0.0;
  sub_100E0D20((int)a3, &v10);
  v10 = 0.0;
  v11 = 0.0;
  v12 = 0.0;
  sub_100E0EA0((int)a3, &v10);
  sub_100BCCF0(a3);
  (*(void (__thiscall **)(_DWORD *, _DWORD, _BYTE *))(*a3 + 772))(a3, 0, v5);
  sub_10424F80(v5, v6);
  sub_10421E30(v4, v6, v7);
  sub_10421A90(v7, v9);
  sub_10421CE0(v7, 3, v8);
  sub_100E0D20((int)a3, v8);
  v9[2] = 0.0;
  sub_100E0EA0((int)a3, v9);
  return sub_100BCCF0(a3);
}
