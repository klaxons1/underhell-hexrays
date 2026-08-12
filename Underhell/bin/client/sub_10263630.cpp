_DWORD *__userpurge sub_10263630@<eax>(int a1@<ecx>, int a2@<edi>, int a3)
{
  int v4; // edx
  int v5; // ecx
  bool v6; // zf
  _DWORD *result; // eax
  int v8; // eax
  int i; // edi
  int v10; // [esp+28h] [ebp-210h] BYREF
  int v11; // [esp+2Ch] [ebp-20Ch]
  int v12; // [esp+30h] [ebp-208h] BYREF
  _DWORD v13[2]; // [esp+34h] [ebp-204h] BYREF
  _BYTE v14[508]; // [esp+3Ch] [ebp-1FCh] BYREF

  v4 = *(_DWORD *)(a1 + 216);
  v5 = 9 * *(unsigned __int8 *)(*(_DWORD *)(a1 + 260) + a3);
  v6 = *(_BYTE *)(v4 + 8 * v5 + 24) == 0;
  result = (_DWORD *)(v4 + 8 * v5);
  v13[0] = result;
  if ( !v6 )
  {
    v11 = 0;
    v10 = 0;
    v12 = 0;
    (*(void (__thiscall **)(_DWORD, int *, int *, int))(*(_DWORD *)*result + 784))(*result, &v10, &v12, a2);
    v8 = *(_DWORD *)(a1 + 336);
    for ( i = 0; i < v8; ++i )
    {
      if ( i >= 0 && i < v8 )
      {
        (*(void (__thiscall **)(int, _DWORD, int, _BYTE *, int))(*(_DWORD *)a1 + 900))(
          a1,
          *(_DWORD *)(*(_DWORD *)(a1 + 324) + 4 * i),
          a3,
          v14,
          256);
        (*(void (__thiscall **)(_DWORD, _BYTE *, _DWORD))(**(_DWORD **)(a1 + 352) + 104))(*(_DWORD *)(a1 + 352), v14, 0);
        (*(void (__thiscall **)(_DWORD, int *, _DWORD *))(**(_DWORD **)(a1 + 352) + 8))(
          *(_DWORD *)(a1 + 352),
          &v12,
          v13);
        if ( v12 > v11 )
          v11 = v12;
      }
      v8 = *(_DWORD *)(a1 + 336);
    }
    v11 += 4;
    sub_102361D0(*(int (__thiscall ****)(void *, int, int))v13[1], (int)&v12, (int)v13);
    return (_DWORD *)(*(int (__thiscall **)(int, int))(*(_DWORD *)a1 + 1016))(a1, a3);
  }
  return result;
}
