void __thiscall sub_100EF420(_DWORD *this, int *a2)
{
  int i; // ebx
  int v4; // edi
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  _DWORD *v8; // eax
  float v9; // [esp+8h] [ebp-4h]

  v9 = sub_101F8CD0(off_103EE614);
  for ( i = this[17]; i; i = *(_DWORD *)(i + 6708) )
  {
    if ( (*(float *)(i + 68) > (double)v9 || *(int *)(i + 56) <= 0) && (*(_BYTE *)(i + 6720) & 2) == 0 )
    {
      if ( byte_1043585D )
        qword_10435870 += *(int *)(i + 56);
      v4 = a2[3];
      v5 = a2[1];
      if ( v4 + 1 > v5 )
        sub_1010AFF0(v4 - v5 + 1);
      ++a2[3];
      v6 = *a2;
      v7 = a2[3] - v4 - 1;
      a2[4] = *a2;
      if ( v7 > 0 )
        memcpy((void *)(v6 + 4 * v4 + 4), (const void *)(v6 + 4 * v4), 4 * v7);
      v8 = (_DWORD *)(*a2 + 4 * v4);
      if ( v8 )
        *v8 = i;
    }
  }
}
