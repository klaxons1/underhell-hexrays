int __userpurge sub_1014C0A0@<eax>(int a1@<ecx>, int a2@<esi>, int a3)
{
  int result; // eax
  int v5; // ebx
  int i; // esi
  int v8; // [esp+8h] [ebp-8h] BYREF
  int v9; // [esp+Ch] [ebp-4h]

  result = (*(int (__thiscall **)(int, char *, const char *, _DWORD))(*(_DWORD *)(dword_10413188 + 4) + 8))(
             dword_10413188 + 4,
             off_103E82CC,
             "wb",
             0);
  v5 = result;
  if ( result )
  {
    v8 = 1;
    (*(void (__thiscall **)(int, int *, int, int))(*(_DWORD *)(dword_10413188 + 4) + 4))(
      dword_10413188 + 4,
      &v8,
      4,
      result);
    v9 = 256;
    do
    {
      for ( i = *(_DWORD *)(a1 + 36); i != a1; i = *(_DWORD *)(i + 36) )
        (*(void (__thiscall **)(int, int, int, int))(*(_DWORD *)(dword_10413188 + 4) + 4))(
          dword_10413188 + 4,
          i,
          32,
          v5);
      a1 += 40;
      --v9;
    }
    while ( v9 );
    return (*(int (__thiscall **)(int, int, int))(*(_DWORD *)(dword_10413188 + 4) + 12))(dword_10413188 + 4, v5, a2);
  }
  return result;
}
