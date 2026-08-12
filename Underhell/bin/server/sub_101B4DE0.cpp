double __cdecl sub_101B4DE0(int a1)
{
  double result; // st7
  int v2; // edi
  int i; // esi
  _DWORD v4[1024]; // [esp+8h] [ebp-1000h] BYREF
  float v5; // [esp+1010h] [ebp+8h]

  result = 0.0;
  v2 = (*(int (__thiscall **)(int, _DWORD *, int))(*(_DWORD *)a1 + 624))(a1, v4, 1024);
  v5 = 0.0;
  for ( i = 0; i < v2; v5 = result )
  {
    result = ((double (__thiscall *)(_DWORD))*(_DWORD *)(*(_DWORD *)v4[i] + 116))(v4[i]) + v5;
    ++i;
  }
  return result;
}
