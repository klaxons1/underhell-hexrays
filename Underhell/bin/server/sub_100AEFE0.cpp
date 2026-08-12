int __stdcall sub_100AEFE0(int *a1, int a2)
{
  int v2; // esi
  int (__thiscall *v3)(int, int *, int); // edx
  int v4; // edi
  int result; // eax
  int v6; // ebx
  int v7; // edi
  void (__thiscall *v8)(int, char *, int); // edx
  int v9; // [esp+Ch] [ebp-8h]
  int v10; // [esp+10h] [ebp-4h] BYREF

  v2 = a2;
  v3 = *(int (__thiscall **)(int, int *, int))(*(_DWORD *)a2 + 52);
  v4 = *a1;
  v10 = *(_DWORD *)(*a1 + 20);
  v9 = v4;
  result = v3(a2, &v10, 1);
  v6 = 0;
  a2 = 0;
  if ( v10 > 0 )
  {
    while ( 1 )
    {
      v7 = v6 + *(_DWORD *)(v4 + 4) + 20;
      (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 28))(v2);
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v2 + 92))(v2, *(_DWORD *)(v6 + *(_DWORD *)(v9 + 4) + 16));
      (*(void (__thiscall **)(int, int, int *))(*(_DWORD *)v2 + 20))(v2, v7, &dword_1060B3F4);
      v8 = *(void (__thiscall **)(int, char *, int))(*(_DWORD *)v2 + 60);
      HIBYTE(a1) = *(_DWORD *)(v7 + 4) != 0;
      v8(v2, (char *)&a1 + 3, 1);
      if ( HIBYTE(a1) )
        (*(void (__thiscall **)(int, _DWORD, int *))(*(_DWORD *)v2 + 20))(v2, *(_DWORD *)(v7 + 4), &dword_106063F0);
      (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 36))(v2);
      result = a2 + 1;
      v6 += 28;
      a2 = result;
      if ( result >= v10 )
        break;
      v4 = v9;
    }
  }
  return result;
}
