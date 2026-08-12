int __stdcall sub_100A0880(int a1, _DWORD *a2)
{
  int result; // eax
  int v3; // ebx
  _DWORD *v4; // esi
  int v5; // eax
  int v6; // edi
  int v7; // ebx
  void (__thiscall *v8)(_DWORD *, int *, int); // edx
  int i; // edi
  int v10; // [esp+4h] [ebp-Ch]
  _DWORD *v11; // [esp+8h] [ebp-8h]
  int v12; // [esp+Ch] [ebp-4h] BYREF

  result = a1;
  v3 = **(_DWORD **)a1;
  v10 = v3;
  if ( v3 )
  {
    if ( (_UNKNOWN *)v3 != &unk_10694290 )
    {
      v4 = a2;
      v5 = *a2;
      v12 = *(__int16 *)(v3 + 22);
      result = (*(int (__thiscall **)(_DWORD *, int *, int))(v5 + 52))(a2, &v12, 1);
      a2 = 0;
      if ( v12 > 0 )
      {
        while ( 1 )
        {
          (*(void (__thiscall **)(_DWORD *, const char *))(*v4 + 32))(v4, "ResponseGroup");
          v6 = 60 * (__int16)a2;
          (*(void (__thiscall **)(_DWORD *, _DWORD))(*v4 + 92))(v4, *(_DWORD *)(v6 + *(_DWORD *)(v3 + 8) + 8));
          v7 = v6 + *(_DWORD *)(v3 + 8) + 12;
          (*(void (__thiscall **)(_DWORD *, int, int *))(*v4 + 20))(v4, v7, &dword_1060A524);
          v8 = *(void (__thiscall **)(_DWORD *, int *, int))(*v4 + 44);
          a1 = *(unsigned __int16 *)(v7 + 12);
          v8(v4, &a1, 1);
          for ( i = 0; i < (__int16)a1; ++i )
          {
            v11 = (_DWORD *)(*(_DWORD *)v7 + 8 * i);
            (*(void (__thiscall **)(_DWORD *, const char *))(*v4 + 32))(v4, "Response");
            (*(void (__thiscall **)(_DWORD *, _DWORD))(*v4 + 92))(v4, *v11);
            (*(void (__thiscall **)(_DWORD *, _DWORD *, int *))(*v4 + 20))(v4, v11, &dword_1060A50C);
            (*(void (__thiscall **)(_DWORD *))(*v4 + 36))(v4);
          }
          (*(void (__thiscall **)(_DWORD *))(*v4 + 36))(v4);
          result = (int)a2 + 1;
          a2 = (_DWORD *)result;
          if ( result >= v12 )
            break;
          v3 = v10;
        }
      }
    }
  }
  return result;
}
