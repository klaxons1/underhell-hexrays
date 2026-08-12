int __cdecl sub_10227920(_DWORD *a1, int a2, unsigned __int8 (__cdecl *a3)(_DWORD *, int *))
{
  int v3; // edi
  int result; // eax
  int v5; // ecx
  int v6; // edx
  int v7; // ebx
  int v8; // ebp

  v3 = a2 - (_DWORD)a1;
  result = (a2 - (int)a1) >> 4;
  if ( result > 1 )
  {
    do
    {
      v5 = *(_DWORD *)((char *)a1 + v3 - 16);
      v6 = *(_DWORD *)((char *)a1 + v3 - 12);
      v7 = *(_DWORD *)((char *)a1 + v3 - 8);
      v8 = *(_DWORD *)((char *)a1 + v3 - 4);
      *(_DWORD *)((char *)a1 + v3 - 16) = *a1;
      *(_DWORD *)((char *)a1 + v3 - 12) = a1[1];
      *(_DWORD *)((char *)a1 + v3 - 8) = a1[2];
      *(_DWORD *)((char *)a1 + v3 - 4) = a1[3];
      sub_102277F0((int)a1, 0, (v3 - 16) >> 4, v5, v6, v7, v8, a3);
      v3 -= 16;
      result = v3 >> 4;
    }
    while ( v3 >> 4 > 1 );
  }
  return result;
}
