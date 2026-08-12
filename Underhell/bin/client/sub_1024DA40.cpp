int __thiscall sub_1024DA40(int (__thiscall ***this)(void *, _BYTE *, int *))
{
  int v2; // eax
  int v3; // eax
  int v5; // [esp+8h] [ebp-18h]
  int v6; // [esp+10h] [ebp-10h] BYREF
  int v7; // [esp+14h] [ebp-Ch] BYREF
  _BYTE v8[4]; // [esp+18h] [ebp-8h] BYREF
  _BYTE v9[4]; // [esp+1Ch] [ebp-4h] BYREF

  (*(void (__thiscall **)(int, _BYTE *, _BYTE *, int *, int *))(*(_DWORD *)dword_1047CA6C + 348))(
    dword_1047CA6C,
    v9,
    v8,
    &v7,
    &v6);
  v2 = sub_102374F0(this);
  v5 = (v6 - v2) / 2;
  v3 = sub_102374C0((int (__thiscall ***)(void *, int *, _BYTE *))this);
  return sub_10236140((int (__thiscall ***)(void *, int, int))this, (v7 - v3) / 2, v5);
}
