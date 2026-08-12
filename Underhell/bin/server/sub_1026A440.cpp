float *__thiscall sub_1026A440(int (__thiscall ***this)(void *, _DWORD), int a2, float *a3, float *a4, float *a5)
{
  float *result; // eax
  int v6; // esi
  _BYTE v7[12]; // [esp+4h] [ebp-Ch] BYREF

  result = (float *)(**this)(this, 0);
  v6 = (int)result;
  if ( result )
  {
    result = (float *)(*(int (__thiscall **)(float *))(*(_DWORD *)result + 320))(result);
    if ( (_BYTE)result )
    {
      if ( a3 )
      {
        result = (float *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v6 + 504))(v6, v7);
        *a3 = *result;
        a3[1] = result[1];
        a3[2] = result[2];
      }
      if ( a4 )
      {
        result = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v6 + 508))(v6);
        *a4 = *result;
        a4[1] = result[1];
        a4[2] = result[2];
      }
      if ( a5 )
      {
        result = (float *)sub_101EE630(v6);
        *a5 = (float)(int)result;
      }
    }
  }
  return result;
}
