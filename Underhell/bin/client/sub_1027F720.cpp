int __thiscall sub_1027F720(_DWORD *this, int (__thiscall ***a2)(void *, int *, int *))
{
  int v4; // [esp+8h] [ebp-10h] BYREF
  int v5; // [esp+Ch] [ebp-Ch] BYREF
  int v6; // [esp+10h] [ebp-8h] BYREF
  int v7; // [esp+14h] [ebp-4h] BYREF

  (*(void (__thiscall **)(int, int *, int *))(*(_DWORD *)dword_1047CA68 + 28))(dword_1047CA68, &v4, &v5);
  sub_10236F60(a2, &v4, &v5);
  sub_102361D0((int (__thiscall ***)(void *, int, int))a2, (int)&v7, (int)&v6);
  if ( v4 >= 2 )
    return this[9];
  if ( v5 < 4 )
    return this[5];
  if ( v5 >= v6 - 4 )
    return this[6];
  return this[7];
}
