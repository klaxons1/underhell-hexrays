void __cdecl sub_1012D250(char *a1, int a2, int a3)
{
  int v3; // esi
  void *v4; // esp
  char *v5; // edi
  _BYTE *v6; // eax
  int v7; // eax
  _BYTE v8[12]; // [esp+0h] [ebp-20h] BYREF
  _BYTE v9[12]; // [esp+Ch] [ebp-14h] BYREF
  _BYTE *v10; // [esp+18h] [ebp-8h]
  int i; // [esp+1Ch] [ebp-4h]
  int v12; // [esp+30h] [ebp+10h]

  if ( a3 )
  {
    sub_101F2E80(0);
    sub_101F31D0(a3);
    v3 = sub_1018FBE0(v9);
    v4 = alloca(v3 * ((v3 + a2 - 1) / v3));
    v5 = a1;
    v6 = v8;
    v10 = v8;
    v12 = a2;
    if ( a2 >= v3 )
    {
      v7 = v8 - a1;
      for ( i = v8 - a1; ; v7 = i )
      {
        sub_101F2FB0(v5, &v5[v7]);
        v5 += v3;
        v12 -= v3;
        if ( v12 < v3 )
          break;
      }
      v5 = a1;
      v6 = v10;
    }
    memcpy_0(v5, v6, a2 - v12);
    sub_101F2EE0(v9);
  }
}
