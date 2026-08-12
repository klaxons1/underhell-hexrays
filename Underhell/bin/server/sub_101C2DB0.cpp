int __cdecl sub_101C2DB0(char a1)
{
  int result; // eax
  int v2; // esi
  int v3; // edi
  int v4; // esi
  void *v5; // esp
  int v6; // ebx
  int i; // esi
  _DWORD v8[3]; // [esp-4h] [ebp-10h] BYREF
  float v9; // [esp+8h] [ebp-4h]

  byte_10638658 = *(_DWORD *)(dword_106BA664 + 48) != 0;
  v9 = *(float *)(dword_106B31C8 + 12);
  sub_1012CE60();
  if ( a1 )
  {
    sub_1025EEF0();
    v4 = sub_1012BDF0();
    if ( v4 <= 1 )
      v4 = 1;
    v5 = alloca(4 * v4);
    v6 = sub_1012C9E0((int)v8, v4);
    for ( i = 0; i < v6; ++i )
    {
      if ( v8[i] )
      {
        *(float *)(dword_106B31C8 + 12) = v9;
        sub_101C2C40(v8[i]);
      }
    }
    sub_1025EF00();
    result = dword_106B31C8;
    goto LABEL_14;
  }
  result = dword_106B31C8;
  v2 = 1;
  if ( *(int *)(dword_106B31C8 + 20) < 1 )
  {
LABEL_14:
    *(float *)(result + 12) = v9;
    return result;
  }
  do
  {
    v3 = sub_1025FB50(v2);
    if ( v3 )
    {
      *(float *)(dword_106B31C8 + 12) = v9;
      sub_101E22C0(v3, v8[0]);
      sub_101C2C40(v3);
    }
    result = dword_106B31C8;
    ++v2;
  }
  while ( v2 <= *(_DWORD *)(dword_106B31C8 + 20) );
  *(float *)(dword_106B31C8 + 12) = v9;
  return result;
}
