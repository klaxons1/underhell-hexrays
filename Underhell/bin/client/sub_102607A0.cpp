int __thiscall sub_102607A0(int (__thiscall ***this)(void *, int, int))
{
  char v2; // al
  unsigned __int16 v3; // ax
  int v4; // edi
  _WORD v6[2]; // [esp+14h] [ebp-14h] BYREF
  int v7; // [esp+18h] [ebp-10h] BYREF
  int v8; // [esp+1Ch] [ebp-Ch] BYREF
  int v9; // [esp+20h] [ebp-8h] BYREF
  int v10; // [esp+24h] [ebp-4h] BYREF

  (*(void (__thiscall **)(int, int (__thiscall **)(void *, int, int)))(*(_DWORD *)dword_1047CA6C + 68))(
    dword_1047CA6C,
    this[95]);
  v2 = ((int (__thiscall *)(int (__thiscall ***)(void *, int, int)))(*this)[233])(this);
  v6[1] = 0;
  v3 = v2 != 0 ? 54 : 52;
  v4 = v3;
  v6[0] = v3;
  sub_102361D0(this, (int)&v9, (int)&v7);
  (*(void (__thiscall **)(int, int (__thiscall **)(void *, int, int), _WORD *, int *, int *))(*(_DWORD *)dword_1047CA6C
                                                                                            + 288))(
    dword_1047CA6C,
    this[95],
    v6,
    &v10,
    &v8);
  (*(void (__thiscall **)(int, int (__thiscall **)(void *, int, int)))(*(_DWORD *)dword_1047CA6C + 72))(
    dword_1047CA6C,
    this[96]);
  (*(void (__thiscall **)(int, int, int))(*(_DWORD *)dword_1047CA6C + 80))(
    dword_1047CA6C,
    (v9 - v10) / 2,
    (v7 - v8) / 2);
  return (*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)dword_1047CA6C + 92))(dword_1047CA6C, v4, 0);
}
