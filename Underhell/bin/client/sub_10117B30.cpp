int __stdcall sub_10117B30(int a1)
{
  int v2; // eax
  int (__thiscall *v3)(int, int *, int); // edx
  int v4; // edi
  int result; // eax
  int v6; // ebx
  int v7; // [esp+Ch] [ebp-4h] BYREF
  int v8; // [esp+18h] [ebp+8h]

  v2 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 188))(a1);
  v3 = *(int (__thiscall **)(int, int *, int))(*(_DWORD *)a1 + 52);
  v4 = v2;
  v7 = *(_DWORD *)(v2 + 1372);
  result = v3(a1, &v7, 1);
  v6 = 0;
  if ( *(int *)(v4 + 1372) > 0 )
  {
    v8 = 0;
    do
    {
      result = (*(int (__thiscall **)(int, const char *, int, _DWORD, int, int))(*(_DWORD *)a1 + 24))(
                 a1,
                 "ETABLE",
                 v8 + *(_DWORD *)(v4 + 1376),
                 0,
                 dword_103E463C,
                 dword_103E4640);
      v8 += 56;
      ++v6;
    }
    while ( v6 < *(_DWORD *)(v4 + 1372) );
  }
  return result;
}
