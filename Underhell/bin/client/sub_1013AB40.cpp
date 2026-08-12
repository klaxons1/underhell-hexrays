int __thiscall sub_1013AB40(int *this, int a2)
{
  int result; // eax
  int v4; // edi
  int *v5; // esi
  int v6; // ebx
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  int *v10; // ebx

  result = *(_DWORD *)a2;
  if ( *(_DWORD *)a2 && result != 4 || this[9] >= 32 )
  {
    switch ( result )
    {
      case 1:
        return sub_1013A830(this);
      case 2:
        result = sub_1013A600(this);
        if ( result )
          *(float *)(result + 8) = *(float *)(a2 + 4);
        break;
      case 3:
        result = sub_1013A600(this);
        if ( result )
          *(float *)(result + 12) = *(float *)(a2 + 8);
        break;
    }
  }
  else
  {
    v4 = sub_100DDA40(40);
    *(float *)(v4 + 8) = *(float *)(a2 + 4);
    *(float *)(v4 + 12) = *(float *)(a2 + 8);
    *(float *)(v4 + 4) = *(float *)(a2 + 12);
    *(float *)(v4 + 16) = 0.0;
    *(float *)v4 = *((float *)off_103DC81C + 3) + *(float *)(a2 + 12);
    v5 = this + 6;
    *(_DWORD *)(v4 + 36) = *(_DWORD *)a2;
    v6 = this[9];
    v7 = v5[1];
    if ( v6 + 1 > v7 )
      sub_1010AFF0(v5, v6 - v7 + 1);
    ++v5[3];
    v8 = *v5;
    v9 = v5[3] - v6 - 1;
    v5[4] = *v5;
    if ( v9 > 0 )
      memcpy((void *)(v8 + 4 * v6 + 4), (const void *)(v8 + 4 * v6), 4 * v9);
    result = *v5;
    v10 = (int *)(*v5 + 4 * v6);
    if ( v10 )
      *v10 = v4;
  }
  return result;
}
