char __thiscall sub_101C1A60(_DWORD *this, int a2, int a3)
{
  int v4; // ebx
  int i; // edi
  float v7[3]; // [esp+Ch] [ebp-Ch] BYREF

  v4 = this[9] - 1;
  this[11] = -1;
  if ( v4 < 0 )
    return 1;
  for ( i = 104 * v4; ; i -= 104 )
  {
    sub_101C14D0(*(int **)(i + this[6]), a2, v7, a3);
    if ( !sub_101C16D0((int)this, i + this[6], v7, 1) )
      break;
    if ( --v4 < 0 )
      return 1;
  }
  this[11] = v4;
  return 0;
}
