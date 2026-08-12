void __usercall sub_1004DD00(int a1@<ecx>, int a2@<ebp>, float *a3@<edi>)
{
  unsigned int v4; // eax
  int *v5; // ecx
  int v6; // eax
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  float *v10; // eax
  unsigned int v11; // eax
  int v12; // ecx
  unsigned int v13; // eax
  int v14; // ecx

  v4 = *(_DWORD *)(a1 + 20);
  if ( v4 == -1 || (v5 = &off_1061BE18[4 * (*(_DWORD *)(a1 + 20) & 0xFFF) + 1], v5[1] != v4 >> 12) )
    v6 = 0;
  else
    v6 = *v5;
  *(_DWORD *)(a1 + 48) = *(_DWORD *)(v6 + 804);
  v7 = *(_DWORD *)(a1 + 20);
  if ( v7 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 20) & 0xFFF) + 2] != *(_DWORD *)(a1 + 20) >> 12 )
    v8 = 0;
  else
    v8 = off_1061BE18[4 * (*(_DWORD *)(a1 + 20) & 0xFFF) + 1];
  if ( *(_DWORD *)(v8 + 804) )
  {
    if ( v7 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 20) & 0xFFF) + 2] != *(_DWORD *)(a1 + 20) >> 12 )
      v9 = 0;
    else
      v9 = off_1061BE18[4 * (*(_DWORD *)(a1 + 20) & 0xFFF) + 1];
    v10 = (float *)sub_1004D970(a1, a2, a3, a1, *(char **)(v9 + 804));
    if ( v10 )
    {
      sub_1004C460((_DWORD *)a1, v10);
      *(_BYTE *)(a1 + 37) = 0;
    }
    else
    {
      v11 = *(_DWORD *)(a1 + 20);
      if ( v11 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 20) & 0xFFF) + 2] != v11 >> 12 )
        v12 = 0;
      else
        v12 = off_1061BE18[4 * (*(_DWORD *)(a1 + 20) & 0xFFF) + 1];
      DevMsg("**ERROR: Can't find next assault point: %s\n", *(const char **)(v12 + 804));
      *(_DWORD *)(a1 + 28) = 0;
      sub_1004C190((int *)a1, (int)"Can't find next assault point");
    }
  }
  else
  {
    *(_DWORD *)(a1 + 28) = 0;
    sub_1004CBB0((void **)a1);
    v13 = *(_DWORD *)(a1 + 20);
    if ( v13 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 20) & 0xFFF) + 2] != v13 >> 12 )
      v14 = 0;
    else
      v14 = off_1061BE18[4 * (*(_DWORD *)(a1 + 20) & 0xFFF) + 1];
    if ( *(_DWORD *)(v14 + 800) )
      sub_100211D0(*(_DWORD **)(a1 + 4), 0, 0);
    sub_1010DD80(*(_DWORD *)(a1 + 4), *(_DWORD *)(a1 + 4), 0.0);
  }
}
