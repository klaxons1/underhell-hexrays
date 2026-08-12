void __thiscall sub_100EA4D0(_DWORD *this, int a2, int a3, char a4)
{
  int v5; // edx
  int v6; // eax
  _DWORD *j; // edi
  int v8; // eax
  int v9; // ebx
  int i; // ebx
  char v11; // fps^1
  double v12; // st7
  bool v13; // c0
  char v14; // c2
  bool v15; // c3
  int v16; // esi
  int v17; // ecx
  int v18; // esi
  float v19; // [esp+4h] [ebp-10h]
  int v20; // [esp+8h] [ebp-Ch]
  int v21; // [esp+Ch] [ebp-8h]
  int v22; // [esp+10h] [ebp-4h]
  int v23; // [esp+1Ch] [ebp+8h]

  LOBYTE(v22) = this[7] == *((_DWORD *)off_103DC81C + 1);
  if ( !a2 )
  {
    v19 = sub_101F8CD0(off_103EE614);
    v9 = this[5] - 1;
    v23 = v9;
    if ( v9 < 0 )
      return;
    for ( i = 24 * v9; ; i -= 24 )
    {
      v21 = *(_DWORD *)(i + this[2] + 20);
      if ( (_BYTE)v22 )
        break;
      if ( a4 )
      {
        v12 = *(float *)(*(_DWORD *)(i + this[2] + 20) + 68);
        v13 = v12 < v19;
        v14 = 0;
        v15 = v12 == v19;
        BYTE1(v8) = v11;
        if ( v12 <= v19 )
          break;
      }
      LOBYTE(v20) = 0;
      if ( !(_BYTE)a3 )
        goto LABEL_21;
      LOBYTE(v8) = 1;
LABEL_22:
      sub_100F1890(0, v20, v8);
      v8 = v23 - 1;
      v23 = v8;
      if ( v8 < 0 )
        return;
    }
    v16 = this[2];
    v17 = *(_DWORD *)(v16 + i + 20);
    v18 = i + v16;
    LOBYTE(v20) = 1;
    if ( v17 )
      sub_100F1860(v17);
    sub_1011A810(v18);
    if ( this[5] - v23 - 1 > 0 )
      memcpy((void *)(i + this[2]), (const void *)(i + this[2] + 24), 24 * (this[5] - v23 - 1));
    v8 = -1;
    --this[5];
    *(_DWORD *)(v21 + 6740) = -1;
LABEL_21:
    LOBYTE(v8) = 0;
    goto LABEL_22;
  }
  v5 = this[5];
  v6 = 0;
  if ( v5 > 0 )
  {
    for ( j = (_DWORD *)(this[2] + 20); *j != a2; j += 6 )
    {
      if ( ++v6 >= v5 )
        return;
    }
    if ( v6 != -1 )
      sub_100F1890(0, v22, a3);
  }
}
