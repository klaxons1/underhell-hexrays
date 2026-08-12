int __thiscall sub_10272C30(_DWORD *this, char a2)
{
  int result; // eax
  int v3; // ecx

  result = this[52];
  if ( result )
    *(_BYTE *)(result + 352) = a2;
  v3 = this[53];
  if ( v3 )
    *(_BYTE *)(v3 + 352) = a2;
  return result;
}
