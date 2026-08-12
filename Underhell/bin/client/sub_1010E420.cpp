int sub_1010E420()
{
  int result; // eax

  result = sub_100DDA40(40);
  if ( !result )
    return 0;
  *(_DWORD *)result = &CPlayerLogoProxy::`vftable';
  *(_DWORD *)(result + 8) = sub_100FACE0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 20) = 0;
  *(_WORD *)(result + 24) = -1;
  *(_WORD *)(result + 26) = 0;
  *(_WORD *)(result + 28) = -1;
  *(_WORD *)(result + 30) = -1;
  *(_DWORD *)(result + 32) = *(_DWORD *)(result + 12);
  *(_DWORD *)(result + 36) = 0;
  return result;
}
