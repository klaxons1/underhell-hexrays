int __thiscall sub_1026DE10(int this)
{
  int result; // eax
  int v3; // esi
  int i; // ebx
  int v5; // ecx
  int v6; // [esp+Ch] [ebp-10h] BYREF
  int v7; // [esp+10h] [ebp-Ch] BYREF
  _BYTE v8[4]; // [esp+14h] [ebp-8h] BYREF
  _BYTE v9[4]; // [esp+18h] [ebp-4h] BYREF

  result = sub_102361D0((int (__thiscall ***)(void *, int, int))this, (int)v8, (int)&v7);
  v3 = 0;
  for ( i = 4; v3 < *(_DWORD *)(this + 224); i += v6 + 4 )
  {
    v5 = *(_DWORD *)(*(_DWORD *)(this + 212) + 4 * v3);
    (*(void (__thiscall **)(int, int *, _BYTE *))(*(_DWORD *)v5 + 784))(v5, &v6, v9);
    sub_10236140(*(int (__thiscall ****)(void *, int, int))(*(_DWORD *)(this + 212) + 4 * v3), i, 4);
    result = sub_102361A0(
               *(int (__thiscall ****)(void *, int, int))(*(_DWORD *)(this + 212) + 4 * v3++),
               v6 + 8,
               v7 - 8);
  }
  *(_DWORD *)(this + 232) = i;
  return result;
}
