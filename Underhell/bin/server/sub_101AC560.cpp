float *__stdcall sub_101AC560(float *a1)
{
  int v1; // eax
  float *result; // eax
  float v3; // edx
  float v4; // ecx
  float *v5; // eax
  int v6; // edx
  int v7; // eax

  if ( *(int *)(dword_106B31C8 + 20) <= 1 && (v1 = sub_10261B20()) != 0 )
  {
    v5 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v1 + 576))(v1);
    *a1 = *v5;
    v6 = *((_DWORD *)v5 + 1);
    v7 = *((_DWORD *)v5 + 2);
    *((_DWORD *)a1 + 1) = v6;
    *((_DWORD *)a1 + 2) = v7;
    return a1;
  }
  else
  {
    result = a1;
    v3 = flt_106F1CAC;
    *a1 = flt_106F1CA8;
    v4 = flt_106F1CB0;
    a1[1] = v3;
    a1[2] = v4;
  }
  return result;
}
