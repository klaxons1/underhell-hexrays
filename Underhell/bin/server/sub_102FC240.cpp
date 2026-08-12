void __userpurge sub_102FC240(int a1@<ecx>, int a2@<ebx>, int a3@<edi>, double a4@<st0>, float *a5)
{
  int *v6; // eax
  int v7; // eax
  float *v8; // edi
  float v9; // [esp+Ch] [ebp-24h]
  float v10; // [esp+10h] [ebp-20h]
  float v11; // [esp+14h] [ebp-1Ch]
  float v12; // [esp+18h] [ebp-18h]
  float v13; // [esp+1Ch] [ebp-14h]
  float v14; // [esp+20h] [ebp-10h]
  int v15; // [esp+24h] [ebp-Ch] BYREF
  float v16; // [esp+28h] [ebp-8h]
  float v17; // [esp+2Ch] [ebp-4h]

  sub_1002C160((_DWORD *)a1, a4, a5);
  if ( (*(_DWORD *)(a1 + 248) & 0x10000) != 0 && !sub_10023D10((_DWORD *)a1, 31) )
  {
    v6 = (int *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 368))(a1);
    sub_10260A10(a2, a3, v6, 1.0, (float *)&v15);
    if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
      sub_100DAE60(a1);
    v9 = *(float *)&v15 - *(float *)(a1 + 580);
    v10 = v16 - *(float *)(a1 + 584);
    v11 = v17 - *(float *)(a1 + 588);
    if ( off_10689714() > *(float *)(a1 + 4108) )
    {
      v7 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 368))(a1);
      v8 = (float *)v7;
      if ( (*(_DWORD *)(v7 + 252) & 0x800) != 0 )
        sub_100DAE60(v7);
      v12 = *(float *)&v15 - v8[145];
      v13 = v16 - v8[146];
      v14 = v17 - v8[147];
      if ( off_10689714() > 512.0 && v12 * v9 + v13 * v10 + v14 * v11 > 0.0 )
      {
        sub_10021880((void *)a1);
        sub_100285C0((_DWORD *)a1, 0, 1);
        if ( *(_DWORD *)(a1 + 2336) != 2 )
          *(_DWORD *)(a1 + 2336) = 2;
        sub_10023CB0((char *)a1, 31);
      }
    }
  }
}
