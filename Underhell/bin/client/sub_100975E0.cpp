int __cdecl sub_100975E0(char *a1, int a2, unsigned __int8 (__cdecl *a3)(int, int))
{
  int result; // eax
  char *v4; // esi
  int v5; // edx
  _DWORD v6[2]; // [esp+4h] [ebp-8h] BYREF

  result = a2 - (_DWORD)a1;
  if ( (int)((a2 - (_DWORD)a1) & 0xFFFFFFF8) > 8 )
  {
    v4 = (char *)(a2 - 8);
    do
    {
      v5 = *((_DWORD *)v4 + 1);
      v6[0] = *(_DWORD *)v4;
      *(_DWORD *)v4 = *(_DWORD *)a1;
      v6[1] = v5;
      *((_DWORD *)v4 + 1) = *((_DWORD *)a1 + 1);
      sub_10095200((int)a1, 0, (result - 8) >> 3, v6, a3);
      v4 -= 8;
      result = v4 - a1 + 8;
    }
    while ( (int)(result & 0xFFFFFFF8) > 8 );
  }
  return result;
}
