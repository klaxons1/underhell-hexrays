void __thiscall sub_1019D100(_DWORD *this)
{
  int v1; // esi
  int v3; // ebx
  _DWORD *v4; // ebx
  int v5; // ebx
  _DWORD *v6; // ebx
  int v7; // ebx
  _DWORD *v8; // ebx
  int v9; // ebx
  _DWORD *v10; // ebx
  int i; // ebx
  int v12; // [esp+18h] [ebp-Ch]
  _DWORD *v14; // [esp+20h] [ebp-4h]

  v1 = 0;
  v12 = 0;
  if ( this[8] )
  {
    sub_102ABFC0(1);
    v1 = 1;
    v12 = 1;
  }
  if ( this[9] )
  {
    v3 = v1;
    if ( v1 + 1 > 0 )
    {
      sub_102ABFC0(v1 + 1);
      v1 = v12;
    }
    v12 = ++v1;
    if ( v1 - v3 - 1 > 0 )
      memcpy((void *)(4 * v3 + 4), (const void *)(4 * v3), 4 * (v1 - v3 - 1));
    v4 = (_DWORD *)(4 * v3);
    if ( v4 )
      *v4 = this[9];
  }
  if ( this[10] )
  {
    v5 = v1;
    if ( v1 + 1 > 0 )
    {
      sub_102ABFC0(v1 + 1);
      v1 = v12;
    }
    v12 = ++v1;
    if ( v1 - v5 - 1 > 0 )
      memcpy((void *)(4 * v5 + 4), (const void *)(4 * v5), 4 * (v1 - v5 - 1));
    v6 = (_DWORD *)(4 * v5);
    if ( v6 )
      *v6 = this[10];
  }
  if ( this[11] )
  {
    v7 = v1;
    if ( v1 + 1 > 0 )
    {
      sub_102ABFC0(v1 + 1);
      v1 = v12;
    }
    v12 = ++v1;
    if ( v1 - v7 - 1 > 0 )
      memcpy((void *)(4 * v7 + 4), (const void *)(4 * v7), 4 * (v1 - v7 - 1));
    v8 = (_DWORD *)(4 * v7);
    if ( v8 )
      *v8 = this[11];
  }
  if ( this[12] )
  {
    v9 = v1;
    if ( v1 + 1 > 0 )
    {
      sub_102ABFC0(v1 + 1);
      v1 = v12;
    }
    if ( ++v1 - v9 - 1 > 0 )
      memcpy((void *)(4 * v9 + 4), (const void *)(4 * v9), 4 * (v1 - v9 - 1));
    v10 = (_DWORD *)(4 * v9);
    if ( v10 )
      *v10 = this[12];
  }
  for ( i = 0; i < v1; ++i )
  {
    v14 = *(_DWORD **)(4 * i);
    sub_1018C090((int)v14);
    if ( *(_DWORD *)(dword_106B8370 + 1124) != 4 )
      sub_1018D160(v14);
  }
}
