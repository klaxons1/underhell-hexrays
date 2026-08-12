_DWORD *__cdecl sub_1003A3C0(_DWORD *a1, float a2, int a3, float *a4, float *a5)
{
  _DWORD *result; // eax
  int v6; // ecx
  int v7; // edx
  int v8; // ecx
  int v9[4]; // [esp+Ch] [ebp-3Ch] BYREF
  int v10[4]; // [esp+1Ch] [ebp-2Ch] BYREF
  int v11[4]; // [esp+2Ch] [ebp-1Ch] BYREF
  _DWORD v12[3]; // [esp+3Ch] [ebp-Ch] BYREF

  if ( *a4 == *a5 && a4[1] == a5[1] && a4[2] == a5[2] )
  {
    result = a1;
    *a1 = *(_DWORD *)a4;
    v6 = *((_DWORD *)a4 + 2);
    a1[1] = *((_DWORD *)a4 + 1);
    a1[2] = v6;
  }
  else
  {
    sub_101EF050(a4, v10);
    sub_101EF050(a5, v11);
    sub_101F0F00((int)v10, (int)v11, a2, (int)v9);
    sub_101F0F70(v9, v12);
    result = a1;
    v7 = v12[1];
    *a1 = v12[0];
    v8 = v12[2];
    a1[1] = v7;
    a1[2] = v8;
  }
  return result;
}
