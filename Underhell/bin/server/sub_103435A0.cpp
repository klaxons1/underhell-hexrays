float *__userpurge sub_103435A0@<eax>(int a1@<ecx>, int a2@<ebx>, float *a3, int *a4)
{
  float *result; // eax
  int v5; // ecx
  int v6; // edx
  float v7; // edx
  float v8; // ecx
  int v9[3]; // [esp+10h] [ebp-Ch] BYREF

  if ( a4 )
  {
    sub_10260A10(a2, a1, a4, 0.050000001, (float *)v9);
    sub_10343510((int)a4, (int)v9);
    result = a3;
    v5 = v9[1];
    *a3 = *(float *)v9;
    v6 = v9[2];
    *((_DWORD *)a3 + 1) = v5;
    *((_DWORD *)a3 + 2) = v6;
  }
  else
  {
    result = a3;
    v7 = flt_106F1CAC;
    *a3 = flt_106F1CA8;
    v8 = flt_106F1CB0;
    a3[1] = v7;
    a3[2] = v8;
  }
  return result;
}
