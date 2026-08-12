float *__stdcall sub_1021E110(float *a1, int a2)
{
  int v2; // esi
  float *result; // eax
  float v4; // edx
  float v5; // ecx
  _BYTE v6[12]; // [esp+4h] [ebp-18h] BYREF
  _DWORD v7[3]; // [esp+10h] [ebp-Ch] BYREF

  v2 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31F0 + 4))(dword_106B31F0, a2);
  if ( (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31F0 + 36))(dword_106B31F0, v2) == 1 )
  {
    (*(void (__thiscall **)(int, int, _DWORD *, _BYTE *))(*(_DWORD *)dword_106B31F0 + 24))(dword_106B31F0, v2, v7, v6);
    result = a1;
    v4 = *(float *)&v7[1];
    *a1 = *(float *)v7;
    v5 = *(float *)&v7[2];
  }
  else
  {
    result = a1;
    v4 = flt_106F1CAC;
    *a1 = flt_106F1CA8;
    v5 = flt_106F1CB0;
  }
  a1[1] = v4;
  a1[2] = v5;
  return result;
}
