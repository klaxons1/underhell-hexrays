_DWORD *__cdecl sub_1011D420(float *a1, float a2, int a3, int a4, int a5, int a6, int a7, float a8)
{
  _DWORD *result; // eax
  int v9[3]; // [esp+1Ch] [ebp-18h] BYREF
  _BYTE v10[12]; // [esp+28h] [ebp-Ch] BYREF

  result = (_DWORD *)sub_1025FC50();
  if ( result )
  {
    sub_100F5A30(result, (int)v10, 0, 0);
    sub_10422540(v10, v9);
    return (_DWORD *)sub_1011CEB0(a1, (int)v9, a2, a3, a4, a5, a6, a7, a8);
  }
  return result;
}
