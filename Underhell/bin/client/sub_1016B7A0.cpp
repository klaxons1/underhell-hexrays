int __stdcall sub_1016B7A0(_DWORD *a1)
{
  int result; // eax
  int v2; // esi
  int v3; // eax
  int i; // esi
  double v5; // st7
  int (__thiscall *v6)(_DWORD *); // eax
  double v7; // st7
  int v8; // eax
  float v9[7]; // [esp+4h] [ebp-34h]
  _BYTE v10[12]; // [esp+20h] [ebp-18h] BYREF
  float v11[3]; // [esp+2Ch] [ebp-Ch] BYREF

  result = (*(int (__thiscall **)(_DWORD *))(a1[1] + 36))(a1 + 1);
  if ( result )
  {
    v2 = *(_DWORD *)dword_10413178;
    v3 = (*(int (__thiscall **)(_DWORD *, float *, _BYTE *))(a1[1] + 36))(a1 + 1, v11, v10);
    (*(void (__thiscall **)(int, int))(v2 + 24))(dword_10413178, v3);
    for ( i = 0; i < 3; v9[i] = v7 + v9[i + 6] )
    {
      v5 = *(float *)(i * 4 + (*(int (__thiscall **)(_DWORD *))(*a1 + 36))(a1)) + v11[i];
      v6 = *(int (__thiscall **)(_DWORD *))(*a1 + 36);
      v9[i + 4] = v5;
      v7 = *(float *)(i * 4 + v6(a1));
      ++i;
    }
    v8 = a1[519];
    a1[20] = -1;
    if ( v8 == 13 )
      sub_10037B80(a1);
    else
      sub_10036100((int)a1, v8);
    return 1;
  }
  return result;
}
