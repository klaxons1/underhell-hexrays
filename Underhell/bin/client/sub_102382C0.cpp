int __stdcall sub_102382C0(int a1, int a2)
{
  int result; // eax
  _BYTE *v3; // ecx
  _BYTE *v4; // edx

  result = (*(int (__cdecl **)(int))(a2 + 20))(a1);
  v3 = *(_BYTE **)(a2 + 12);
  v4 = (_BYTE *)result;
  do
  {
    LOBYTE(result) = *v3;
    *v4++ = *v3++;
  }
  while ( (_BYTE)result );
  return result;
}
