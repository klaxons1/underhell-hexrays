int __thiscall sub_1040E950(int this)
{
  int *v2; // ebx
  int v3; // eax
  unsigned int v4; // eax
  _DWORD *v5; // eax
  int v6; // edx
  int v7; // esi
  int *v8; // ecx
  int v9; // esi
  int *v10; // ecx
  int v11; // edx
  int result; // eax
  int v13; // [esp+14h] [ebp-4h]

  v2 = (int *)(this + 2196);
  v13 = 2;
  do
  {
    v3 = sub_100FB5C0("sprites/laser.vmt", *(float *)(this + 2156));
    *v2 = v3;
    sub_1005C620(
      (_BYTE *)(v3 + 116),
      *(_BYTE *)(this + 116),
      *(_BYTE *)(this + 117),
      *(_BYTE *)(this + 118),
      HIBYTE(*(_DWORD *)(v3 + 116)));
    v4 = *(_DWORD *)(this + 2176);
    if ( v4 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 2176) & 0xFFF) + 2] != v4 >> 12 )
      v5 = 0;
    else
      v5 = (_DWORD *)off_1061BE18[4 * (*(_DWORD *)(this + 2176) & 0xFFF) + 1];
    sub_100FAE40(*v2, (_DWORD *)this, v5);
    v7 = *v2;
    if ( *(_BYTE *)(*v2 + 119) != 0xFF )
    {
      if ( *(_BYTE *)(v7 + 84) )
      {
        *(_BYTE *)(v7 + 88) |= 1u;
      }
      else
      {
        v8 = *(int **)(v7 + 24);
        if ( v8 )
          sub_100194B0(v8, 116);
      }
      *(_BYTE *)(v7 + 119) = -1;
    }
    v9 = *v2;
    if ( *(_DWORD *)(*v2 + 928) != COERCE_INT(1.0) )
    {
      if ( *(_BYTE *)(v9 + 84) )
      {
        *(_BYTE *)(v9 + 88) |= 1u;
      }
      else
      {
        v10 = *(int **)(v9 + 24);
        if ( v10 )
          sub_100194B0(v10, 928);
      }
      *(float *)(v9 + 928) = 1.0;
    }
    sub_100FAB10(*v2, v6, 64);
    result = sub_100FAB10(*v2++, v11, 128);
    --v13;
  }
  while ( v13 );
  return result;
}
