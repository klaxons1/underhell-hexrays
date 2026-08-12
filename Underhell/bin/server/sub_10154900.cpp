float *__stdcall sub_10154900(int a1, float *a2)
{
  int v2; // eax
  int v3; // ecx
  int v4; // eax
  float *result; // eax
  _BYTE v6[12]; // [esp+0h] [ebp-Ch] BYREF

  v2 = a1;
  if ( (a1 || (v2 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 76))(dword_106B31D0, 0)) != 0)
    && (v3 = *(_DWORD *)(v2 + 12)) != 0
    && (v4 = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 20))(v3)) != 0 )
  {
    result = (float *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v4 + 516))(v4, v6);
    *a2 = *result;
    a2[1] = result[1];
    a2[2] = result[2];
  }
  else
  {
    result = a2;
    *a2 = flt_106F1CA8;
    a2[1] = flt_106F1CAC;
    a2[2] = flt_106F1CB0;
  }
  return result;
}
