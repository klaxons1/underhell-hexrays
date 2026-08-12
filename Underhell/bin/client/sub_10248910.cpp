char __thiscall sub_10248910(int this, int (__thiscall ***a2)(_DWORD), int a3)
{
  unsigned __int16 v4; // di
  int v6; // ecx
  int v7; // eax
  _WORD *v8; // edx
  int v9; // edi
  int v10; // ebx
  int v11; // eax
  int v12; // ebp

  if ( *(_BYTE *)(this + 207) )
    sub_102488A0((int *)this);
  v4 = *sub_10230C80(dword_1047CCCC, (__int16 *)&a3, a3);
  a3 = v4;
  if ( v4 == 0xFFFF )
    return 0;
  sub_10246230((_DWORD *)this, v4, a2);
  v6 = *(_DWORD *)(this + 224);
  v7 = 0;
  if ( v6 > 0 )
  {
    v8 = *(_WORD **)(this + 212);
    do
    {
      if ( *v8 == v4 )
        break;
      ++v7;
      v8 += 14;
    }
    while ( v7 < v6 );
  }
  if ( v7 >= v6 )
    return 0;
  v9 = 28 * v7;
  v10 = 0;
  v11 = 28 * v7 + *(_DWORD *)(this + 212);
  if ( *(int *)(v11 + 20) > 0 )
  {
    v12 = 0;
    do
    {
      sub_10247420(this, a3, v12 + *(_DWORD *)(v11 + 8), a2);
      ++v10;
      v11 = *(_DWORD *)(this + 212) + v9;
      v12 += 48;
    }
    while ( v10 < *(_DWORD *)(v11 + 20) );
  }
  return 1;
}
