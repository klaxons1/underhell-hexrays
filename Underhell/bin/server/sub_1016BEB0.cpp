int __usercall sub_1016BEB0@<eax>(int a1@<eax>)
{
  int v1; // edi
  int i; // eax
  int result; // eax
  int v4; // edi
  int v5; // esi
  int v6; // ecx
  bool v7; // zf
  int v8; // [esp+4h] [ebp-4h]

  v1 = a1;
  if ( a1 > 256 )
    v1 = 256;
  for ( i = 0; i < v1; ++i )
    dword_106B52E0[i] = i;
  result = v1 / 2;
  if ( v1 / 2 > 0 )
  {
    v4 = v1 - 1;
    v8 = result;
    do
    {
      v5 = RandomInt(0, v4);
      result = RandomInt(0, v4);
      v6 = dword_106B52E0[v5];
      v7 = v8-- == 1;
      dword_106B52E0[v5] = dword_106B52E0[result];
      dword_106B52E0[result] = v6;
    }
    while ( !v7 );
  }
  return result;
}
