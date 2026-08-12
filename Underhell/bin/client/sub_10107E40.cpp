float *__stdcall sub_10107E40(float *a1)
{
  float *result; // eax
  float *v2; // esi

  result = (float *)sub_100422D0();
  v2 = result;
  if ( result )
  {
    sub_10034A30(result, a1);
    v2[177] = *a1;
    v2[178] = a1[1];
    v2[179] = a1[2];
    return (float *)(*(int (__thiscall **)(float *))(*((_DWORD *)v2 + 140) + 20))(v2 + 140);
  }
  return result;
}
