int __cdecl sub_101B6090(int a1, __int16 a2)
{
  int result; // eax
  int v3; // ebx
  int i; // edi
  int v5; // esi
  __int16 v6; // ax
  _DWORD v7[1024]; // [esp+8h] [ebp-1000h] BYREF

  result = (*(int (__thiscall **)(int, _DWORD *, int))(*(_DWORD *)a1 + 624))(a1, v7, 1024);
  v3 = result;
  for ( i = 0; i < v3; ++i )
  {
    v5 = v7[i];
    v6 = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 76))(v5);
    result = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v5 + 72))(v5, (unsigned __int16)(a2 | v6));
  }
  return result;
}
