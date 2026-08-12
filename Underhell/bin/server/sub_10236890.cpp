_DWORD *__stdcall sub_10236890(_DWORD *a1, _DWORD *a2)
{
  _DWORD *result; // eax
  int v3; // edx
  int v4; // ecx

  if ( (a2[63] & 0x800) != 0 )
    sub_100DAE60((int)a2);
  result = a1;
  v3 = a2[146];
  *a1 = a2[145];
  v4 = a2[147];
  a1[1] = v3;
  a1[2] = v4;
  return result;
}
