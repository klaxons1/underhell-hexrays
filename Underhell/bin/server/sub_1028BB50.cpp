int __cdecl sub_1028BB50(int a1, float a2, int a3, int a4)
{
  int v4; // eax
  char *v5; // edi
  float *v6; // eax
  unsigned int v7; // esi
  float *v8; // edx
  char *v9; // edi
  float *v10; // eax
  int v12; // [esp+10h] [ebp-8h]

  if ( dword_106D65AC != a3 )
    dword_106D65AC = a3;
  v4 = 0;
  if ( a3 <= 0 )
    goto LABEL_13;
  v5 = (char *)&unk_106D64E4 - a4;
  v6 = (float *)(a4 + 8);
  v12 = a3;
  do
  {
    v7 = 12;
    v8 = v6 - 2;
    v9 = v5 + 8;
    while ( *(_DWORD *)((char *)v8 + (_DWORD)v9) == *(_DWORD *)v8 )
    {
      v7 -= 4;
      ++v8;
      if ( v7 < 4 )
      {
        v5 = (char *)&unk_106D64E4 - a4;
        goto LABEL_10;
      }
    }
    v5 = (char *)&unk_106D64E4 - a4;
    *(float *)((char *)v6 + (_DWORD)&unk_106D64E4 - a4) = *(v6 - 2);
    *(float *)((char *)v6 + (_DWORD)&unk_106D64E8 - a4) = *(v6 - 1);
    *(float *)((char *)v6 + (_DWORD)&unk_106D64EC - a4) = *v6;
LABEL_10:
    v6 += 3;
    --v12;
  }
  while ( v12 );
  if ( a3 < 16 )
  {
    v4 = a3;
LABEL_13:
    v10 = (float *)((char *)&unk_106D64F4 + 12 * v4);
    do
    {
      *(v10 - 2) = 0.0;
      v10 += 3;
      *(v10 - 4) = 0.0;
      *(v10 - 3) = 0.0;
    }
    while ( (int)v10 < (int)flt_106D65B4 );
  }
  return sub_102823A0((int (__thiscall ***)(_DWORD))&dword_106D64E0, a1, a2);
}
