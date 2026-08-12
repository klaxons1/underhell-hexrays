int __thiscall sub_10133730(_DWORD *this)
{
  char v3; // [esp+0h] [ebp-610h]
  char v4[1024]; // [esp+4h] [ebp-60Ch] BYREF
  char Buffer[512]; // [esp+404h] [ebp-20Ch] BYREF
  _BYTE v6[4]; // [esp+604h] [ebp-Ch] BYREF
  int v7; // [esp+608h] [ebp-8h] BYREF
  int v8; // [esp+60Ch] [ebp-4h] BYREF

  sub_10228370(Buffer, 0x200u, "fps:  435  ping: 533 ms lerp 112.3 ms   0/0", v3);
  (*(void (__thiscall **)(int, char *, char *, int))(*(_DWORD *)dword_1047CA78 + 12))(dword_1047CA78, Buffer, v4, 1024);
  (*(void (__thiscall **)(int, _DWORD, char *, _DWORD *, _BYTE *))(*(_DWORD *)dword_1047CA64 + 288))(
    dword_1047CA64,
    this[14428],
    v4,
    this + 14439,
    v6);
  (*(void (__thiscall **)(int, int *, int *))(*(_DWORD *)dword_1047CA6C + 148))(dword_1047CA6C, &v7, &v8);
  sub_102361A0(v7, v8);
  sub_10236140(0, 0);
  return sub_101334F0(this);
}
