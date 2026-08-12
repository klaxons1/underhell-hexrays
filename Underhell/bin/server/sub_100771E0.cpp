unsigned __int8 __stdcall sub_100771E0(int a1, int a2)
{
  _DWORD *v2; // esi
  void (__thiscall *v3)(int, int *, int); // edx
  unsigned __int8 result; // al
  int v5; // [esp+8h] [ebp-4h] BYREF
  unsigned __int8 i; // [esp+14h] [ebp+8h]

  v2 = *(_DWORD **)a1;
  v3 = *(void (__thiscall **)(int, int *, int))(*(_DWORD *)a2 + 52);
  v5 = *(unsigned __int8 *)(*(_DWORD *)a1 + 17);
  v3(a2, &v5, 1);
  result = sub_10076510((int)v2);
  for ( i = result; result != 0xFF; i = result )
  {
    (*(void (__thiscall **)(int, _DWORD, int *))(*(_DWORD *)a2 + 20))(
      a2,
      *(_DWORD *)(v2[1] + 12 * result + 8),
      &dword_10607EC8);
    result = sub_100765B0(v2, i);
  }
  return result;
}
