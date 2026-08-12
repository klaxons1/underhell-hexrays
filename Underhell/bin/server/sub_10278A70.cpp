float *__thiscall sub_10278A70(_DWORD *this)
{
  float *result; // eax
  float *v2; // esi
  float v3[3]; // [esp+14h] [ebp-Ch] BYREF

  result = (float *)sub_100D1940(this);
  v2 = result;
  if ( result )
  {
    result = (float *)(*(int (__thiscall **)(float *))(*(_DWORD *)result + 320))(result);
    if ( (_BYTE)result )
    {
      v3[0] = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                dword_106B31E4,
                1.0,
                2.0);
      v3[1] = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                dword_106B31E4,
                -2.0,
                -1.0);
      v3[2] = 0.0;
      return sub_100F7A60(v2, v3);
    }
  }
  return result;
}
