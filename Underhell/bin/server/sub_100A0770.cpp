int __stdcall sub_100A0770(int a1)
{
  int v1; // esi
  int (__thiscall *v2)(int, int *, int); // edx
  int result; // eax
  int v4; // edi
  int v5; // ebx
  void (__thiscall *v6)(int, int *, int); // edx
  int i; // edi
  _DWORD *v8; // [esp+4h] [ebp-Ch]
  int v9; // [esp+8h] [ebp-8h] BYREF
  int v10; // [esp+Ch] [ebp-4h]

  v1 = a1;
  v2 = *(int (__thiscall **)(int, int *, int))(*(_DWORD *)a1 + 52);
  v9 = word_106942A6;
  result = v2(a1, &v9, 1);
  v10 = 0;
  if ( v9 > 0 )
  {
    do
    {
      (*(void (__thiscall **)(int, const char *))(*(_DWORD *)v1 + 32))(v1, "ResponseGroup");
      v4 = 60 * (__int16)v10;
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v1 + 92))(v1, *(_DWORD *)(v4 + dword_10694298 + 8));
      v5 = v4 + dword_10694298 + 12;
      (*(void (__thiscall **)(int, int, int *))(*(_DWORD *)v1 + 20))(v1, v5, &dword_1060A524);
      v6 = *(void (__thiscall **)(int, int *, int))(*(_DWORD *)v1 + 44);
      a1 = *(unsigned __int16 *)(v5 + 12);
      v6(v1, &a1, 1);
      for ( i = 0; i < (__int16)a1; ++i )
      {
        v8 = (_DWORD *)(*(_DWORD *)v5 + 8 * i);
        (*(void (__thiscall **)(int, const char *))(*(_DWORD *)v1 + 32))(v1, "Response");
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v1 + 92))(v1, *v8);
        (*(void (__thiscall **)(int, _DWORD *, int *))(*(_DWORD *)v1 + 20))(v1, v8, &dword_1060A50C);
        (*(void (__thiscall **)(int))(*(_DWORD *)v1 + 36))(v1);
      }
      (*(void (__thiscall **)(int))(*(_DWORD *)v1 + 36))(v1);
      result = v10 + 1;
      v10 = result;
    }
    while ( result < v9 );
  }
  return result;
}
