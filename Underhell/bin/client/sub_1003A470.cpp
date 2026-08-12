_DWORD *__cdecl sub_1003A470(_DWORD *a1, float *a2, float *a3, float a4, float a5)
{
  _DWORD *result; // eax
  int v6; // ecx
  int v7; // edx
  int v8; // ecx
  float v9; // [esp+0h] [ebp-48h]
  int v10[4]; // [esp+Ch] [ebp-3Ch] BYREF
  int v11[4]; // [esp+1Ch] [ebp-2Ch] BYREF
  int v12[4]; // [esp+2Ch] [ebp-1Ch] BYREF
  _DWORD v13[3]; // [esp+3Ch] [ebp-Ch] BYREF

  if ( *a2 == *a3 && a2[1] == a3[1] && a2[2] == a3[2] )
  {
    result = a1;
    *a1 = *(_DWORD *)a2;
    v6 = *((_DWORD *)a2 + 2);
    a1[1] = *((_DWORD *)a2 + 1);
    a1[2] = v6;
  }
  else
  {
    sub_101EF050(a2, v11);
    sub_101EF050(a3, v12);
    v9 = a4 * a5 + 1.0;
    sub_101F0F00((int)v11, (int)v12, v9, (int)v10);
    sub_101F0F70(v10, v13);
    result = a1;
    v7 = v13[1];
    *a1 = v13[0];
    v8 = v13[2];
    a1[1] = v7;
    a1[2] = v8;
  }
  return result;
}
