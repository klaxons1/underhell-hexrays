bool __userpurge sub_10312640@<al>(int a1@<ecx>, double a2@<st0>, float *a3, float *a4, int a5)
{
  unsigned int v6; // eax
  int *v7; // ecx
  int v8; // ecx
  unsigned int v9; // eax
  int v10; // ecx
  bool result; // al
  float v12; // [esp+10h] [ebp+Ch]

  v6 = *(_DWORD *)(a1 + 3756);
  if ( v6 == -1 || (v7 = &off_1061BE18[4 * (*(_DWORD *)(a1 + 3756) & 0xFFF) + 1], v7[1] != v6 >> 12) )
    v8 = 0;
  else
    v8 = *v7;
  result = 0;
  if ( !*(_BYTE *)(v8 + 224) && !sub_10312580((_DWORD *)a1) && !*(_BYTE *)(a1 + 3764) )
  {
    sub_1004BCD0(a3, a4);
    v9 = *(_DWORD *)(a1 + 3756);
    if ( v9 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 3756) & 0xFFF) + 2] != v9 >> 12 )
      v10 = 0;
    else
      v10 = off_1061BE18[4 * (*(_DWORD *)(a1 + 3756) & 0xFFF) + 1];
    v12 = a2;
    if ( sub_10412ED0(v10) >= v12 )
      return 1;
  }
  return result;
}
