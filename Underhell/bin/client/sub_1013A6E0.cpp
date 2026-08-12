int __thiscall sub_1013A6E0(_DWORD *this, int a2)
{
  void (__thiscall *v2)(int, int *, int); // edx
  int i; // edi
  int (__thiscall *v5)(int, int *, int); // edx
  int result; // eax
  int j; // edi
  int v8; // [esp+Ch] [ebp-4h] BYREF

  v2 = *(void (__thiscall **)(int, int *, int))(*(_DWORD *)a2 + 52);
  v8 = this[4];
  v2(a2, &v8, 1);
  for ( i = 0; i < v8; ++i )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)a2 + 28))(a2);
    (*(void (__thiscall **)(int, _DWORD, int *))(*(_DWORD *)a2 + 20))(a2, *(_DWORD *)(this[1] + 4 * i), &dword_103E77B8);
    (*(void (__thiscall **)(int))(*(_DWORD *)a2 + 36))(a2);
  }
  v5 = *(int (__thiscall **)(int, int *, int))(*(_DWORD *)a2 + 52);
  v8 = this[9];
  result = v5(a2, &v8, 1);
  for ( j = 0; j < v8; ++j )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)a2 + 28))(a2);
    (*(void (__thiscall **)(int, _DWORD, int *))(*(_DWORD *)a2 + 20))(a2, *(_DWORD *)(this[6] + 4 * j), &dword_103E77D0);
    result = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 36))(a2);
  }
  return result;
}
