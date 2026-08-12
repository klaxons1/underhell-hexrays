int __userpurge sub_10390250@<eax>(int a1@<ecx>, int a2@<edi>, int a3)
{
  int v4; // edi
  int v5; // ecx
  int v8[11]; // [esp+4h] [ebp-50h] BYREF
  unsigned int v9; // [esp+30h] [ebp-24h]
  float v10; // [esp+38h] [ebp-1Ch]

  sub_1001E4E0(v8, a3);
  if ( (*(_DWORD *)(a1 + 248) & 0x200000) != 0 )
    sub_1038FD20((_DWORD *)a1);
  if ( v9 == -1 || off_1061BE18[4 * (v9 & 0xFFF) + 2] != v9 >> 12 )
    v4 = 0;
  else
    v4 = off_1061BE18[4 * (v9 & 0xFFF) + 1];
  if ( v4 == (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 368))(a1) )
  {
    *(_DWORD *)(a1 + 5184) = (int)((double)*(int *)(a1 + 5184) + v10);
    *(float *)(a1 + 5188) = *(float *)(dword_106B31C8 + 12);
  }
  v5 = *(_DWORD *)(a1 + 3624);
  if ( v5 )
    return (*(int (__thiscall **)(int, int *))(*(_DWORD *)v5 + 200))(v5, v8);
  else
    return sub_10035940((int *)a1, a2, (int)v8);
}
