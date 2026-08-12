int __thiscall sub_10258BC0(int this, float a2)
{
  int v3; // edi
  int v4; // eax
  _DWORD *v5; // ebx
  _DWORD *v6; // edi
  int *v7; // ecx
  int result; // eax
  double v9; // st7
  int v10; // [esp+10h] [ebp-4h]
  float v11; // [esp+1Ch] [ebp+8h]

  v3 = 0;
  v11 = a2 * *(float *)(this + 1096);
  v10 = 0;
  *(float *)(this + 1108) = *(float *)(dword_106B31C8 + 12);
  *(_DWORD *)(this + 1188) = 0;
  v4 = sub_101C46F0((_DWORD *)this, 1u);
  v5 = (_DWORD *)v4;
  if ( v4 )
  {
    v6 = *(_DWORD **)(v4 + 8);
    if ( v6 != (_DWORD *)v4 )
    {
      do
      {
        if ( *v6 != -1 && off_1061BE18[4 * (*v6 & 0xFFF) + 2] == *v6 >> 12 )
        {
          v7 = (int *)off_1061BE18[4 * (*v6 & 0xFFF) + 1];
          if ( v7 )
          {
            if ( sub_10258950((void *)this, v7, v11) )
              ++v10;
          }
        }
        v6 = (_DWORD *)v6[2];
      }
      while ( v6 != v5 );
    }
    v3 = v10;
  }
  if ( *(_DWORD *)(this + 1120) != 1 )
    return v3;
  if ( v3 )
  {
    v9 = *(float *)(this + 1096) + *(float *)(this + 1096);
    *(float *)(this + 1096) = v9;
    if ( v9 > *(float *)(this + 1104) )
      *(float *)(this + 1096) = *(float *)(this + 1104);
    *(float *)(this + 1112) = *(float *)(dword_106B31C8 + 12) + 3.0;
    return v3;
  }
  result = 0;
  if ( *(float *)(this + 1112) < (double)*(float *)(dword_106B31C8 + 12) )
    *(float *)(this + 1096) = *(float *)(this + 1092);
  return result;
}
