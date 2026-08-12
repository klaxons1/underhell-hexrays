int __thiscall sub_1026A800(void *this, int a2, _DWORD *a3)
{
  int result; // eax
  int v4; // [esp+20h] [ebp-18h] BYREF
  int v5; // [esp+24h] [ebp-14h] BYREF
  _BYTE v6[4]; // [esp+28h] [ebp-10h] BYREF
  int v7; // [esp+2Ch] [ebp-Ch] BYREF
  int v8; // [esp+30h] [ebp-8h] BYREF
  _BYTE v9[4]; // [esp+34h] [ebp-4h] BYREF

  (*(void (__thiscall **)(void *, int *, _BYTE *, int *, int *))(*(_DWORD *)this + 24))(this, &v7, v6, &v4, &v5);
  (*(void (__thiscall **)(int, _BYTE *, int *, int, _DWORD *))(*(_DWORD *)dword_1047CA6C + 348))(
    dword_1047CA6C,
    v9,
    &v8,
    a2,
    a3);
  result = -20 - v4 - v5;
  *a3 += result;
  return result;
}
