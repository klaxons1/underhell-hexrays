int __stdcall sub_10002190(int **a1, int a2)
{
  int *v2; // edi
  int result; // eax
  int v4; // eax
  int *v5; // eax
  _BYTE v6[1024]; // [esp+8h] [ebp-400h] BYREF

  v2 = *a1;
  result = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 56))(a2);
  if ( (result & 0xFFFF0000) == 0x80800000 )
  {
    (*(void (__thiscall **)(int, _BYTE *, int, _DWORD))(*(_DWORD *)a2 + 80))(a2, v6, 1024, (unsigned __int16)result);
    v4 = sub_10244B60(v6);
    if ( v4 >= 0 && (v5 = (int *)(dword_10690148 + 8 * v4)) != 0 )
      result = *v5;
    else
      result = -1;
    *v2 = result;
    if ( result < 0 )
      *v2 = 0;
  }
  else
  {
    *v2 = result;
  }
  return result;
}
