int __stdcall sub_1021FC90(int a1)
{
  _DWORD *v2; // edi
  int result; // eax
  int v4; // ebx
  int v5; // [esp+Ch] [ebp-4h] BYREF
  int v6; // [esp+18h] [ebp+8h]

  v2 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 148))(a1);
  (*(void (__thiscall **)(int, int *, int, _DWORD))(*(_DWORD *)a1 + 60))(a1, &v5, 1, 0);
  result = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B31D0 + 100))(dword_106B31D0, 56 * v5, 1);
  if ( result )
  {
    result = sub_1021E620(v2, result, v5);
    v4 = 0;
    if ( (int)v2[343] > 0 )
    {
      v6 = 0;
      do
      {
        result = (*(int (__thiscall **)(int, const char *, int, _DWORD, int, int))(*(_DWORD *)a1 + 12))(
                   a1,
                   "ETABLE",
                   v6 + v2[344],
                   0,
                   dword_106466D4,
                   dword_106466D8);
        v6 += 56;
        ++v4;
      }
      while ( v4 < v2[343] );
    }
  }
  return result;
}
