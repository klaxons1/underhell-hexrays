int __stdcall sub_1024B660(int a1)
{
  int v1; // esi
  void (__thiscall *v2)(int, int *, int); // edx
  int result; // eax
  int i; // ebx
  _DWORD *v5; // edi

  v1 = a1;
  (*(void (__thiscall **)(int, int *, int))(*(_DWORD *)a1 + 52))(a1, &dword_106C6870, 1);
  v2 = *(void (__thiscall **)(int, int *, int))(*(_DWORD *)v1 + 44);
  a1 = (unsigned __int16)dword_106C68CC;
  v2(v1, &a1, 1);
  result = 0;
  for ( i = 0; i < (__int16)a1; ++i )
  {
    v5 = *(_DWORD **)(dword_106C68C0 + 4 * i);
    (*(void (__thiscall **)(int, _DWORD *, int *))(*(_DWORD *)v1 + 20))(v1, v5, &dword_1064F85C);
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v1 + 92))(v1, *v5);
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v1 + 92))(v1, v5[1]);
    result = (__int16)a1;
  }
  return result;
}
