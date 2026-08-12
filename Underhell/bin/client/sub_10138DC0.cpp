int __thiscall sub_10138DC0(_DWORD *this, int a2)
{
  int v2; // ebx
  int result; // eax
  int v4; // edi
  double v5; // st7
  unsigned int v6; // ecx
  int v7; // esi
  int v8; // edx
  float *v9; // ecx

  v2 = (int)this;
  result = this[1];
  v4 = 0;
  if ( result )
  {
    v5 = 0.1;
    do
    {
      v6 = *(_DWORD *)(result + 256);
      v7 = *(_DWORD *)(result + 44);
      if ( v6 == -1
        || (v2 = (int)this, *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(result + 256) & 0xFFF) + 2) != v6 >> 12) )
      {
        v8 = 0;
      }
      else
      {
        v8 = *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(result + 256) & 0xFFF) + 1);
      }
      if ( v8 != a2 || (*(_DWORD *)(result + 52) &= 0xFFFFFFFC, *(_DWORD *)(result + 48) == 4) )
      {
        *(_DWORD *)(result + 44) = v4;
        v4 = result;
      }
      else
      {
        v9 = *(float **)(result + 868);
        for ( *(float *)(result + 200) = *((float *)off_103DC81C + 3) - v5; v9; v9 = *(float **)v9 )
          v9[1] = *((float *)off_103DC81C + 3) - v5;
        sub_10137400(v2, result);
        v5 = 0.1;
      }
      result = v7;
    }
    while ( v7 );
  }
  *(_DWORD *)(v2 + 4) = v4;
  return result;
}
