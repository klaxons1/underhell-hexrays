int sub_101A0B80()
{
  int v0; // eax
  int *v1; // esi
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int result; // eax

  v0 = dword_1063288C;
  if ( dword_1063288C == -1 )
  {
    v1 = &dword_106B8C60;
    do
    {
      v2 = sub_10184390(40);
      *v1 = v2;
      *(_BYTE *)(v2 + 36) = 1;
      v3 = *v1++;
      *(_BYTE *)(v3 + 37) = 0;
    }
    while ( (int)v1 < (int)dword_106B8CB0 );
    v0 = 0;
  }
  v4 = v0 + 1;
  dword_1063288C = v4;
  if ( v4 != 20 )
    return dword_106B8C5C[v4];
  result = unk_106B8CAC;
  dword_1063288C = 0;
  return result;
}
