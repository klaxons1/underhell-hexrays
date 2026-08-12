char __thiscall sub_101629D0(unsigned int *this, _DWORD *a2, int a3)
{
  _DWORD *v3; // esi
  unsigned int v5; // eax
  int v6; // eax
  bool v7; // cc
  unsigned __int16 v8; // ax
  char v9; // al
  char v10; // cl
  char v11; // cl
  char v13[256]; // [esp+Ch] [ebp-134h] BYREF
  _DWORD v14[9]; // [esp+10Ch] [ebp-34h] BYREF
  __int16 v15; // [esp+130h] [ebp-10h]
  int v16; // [esp+134h] [ebp-Ch]
  char v17; // [esp+13Fh] [ebp-1h]

  v3 = a2;
  v17 = 1;
  v5 = sub_1008A260(a2);
  *this = v5;
  if ( v5 > 0x989680 )
    v17 = 0;
  sub_10162360(this + 1, v3, a3);
  v6 = sub_1008A260(v3);
  if ( v6 > 1024 || (v7 = v6 <= 0, v6 < 0) )
  {
    v17 = 0;
    v7 = v6 <= 0;
  }
  if ( !v7 )
  {
    a2 = (_DWORD *)v6;
    do
    {
      sub_1042E170(v13, 256);
      memset(&v14[1], 0, 32);
      v15 = 1;
      v16 = 0;
      v14[0] = v13;
      v8 = sub_10161A10((_WORD *)this + 22, (int)v14);
      if ( v8 == 0xFFFF )
        v8 = sub_101628E0(this + 11, v13);
      if ( !sub_10162360((unsigned int *)(52 * v8 + this[12] + 12), v3, a3) )
        v17 = 0;
      a2 = (_DWORD *)((char *)a2 - 1);
    }
    while ( a2 );
  }
  if ( a3 >= 2 )
  {
    if ( (*((_BYTE *)v3 + 21) & 1) != 0 )
    {
      HIBYTE(a2) = 0;
      sub_1042E720(v3, "%c", (char *)&a2 + 3);
      v9 = HIBYTE(a2);
    }
    else if ( (unsigned __int8)sub_1042D170(1) )
    {
      v9 = *(_BYTE *)(v3[3] - v3[8] + *v3);
      ++v3[3];
    }
    else
    {
      v9 = 0;
    }
    this[19] = v9;
    if ( (*((_BYTE *)v3 + 21) & 1) != 0 )
    {
      HIBYTE(a2) = 0;
      sub_1042E720(v3, "%c", (char *)&a2 + 3);
      v10 = HIBYTE(a2);
    }
    else if ( (unsigned __int8)sub_1042D170(1) )
    {
      v10 = *(_BYTE *)(v3[3] - v3[8] + *v3);
      ++v3[3];
    }
    else
    {
      v10 = 0;
    }
    v7 = a3 <= 2;
    *((_BYTE *)this + 72) = v10 != 0;
    if ( !v7 )
    {
      if ( (*((_BYTE *)v3 + 21) & 1) != 0 )
      {
        HIBYTE(a2) = 0;
        sub_1042E720(v3, "%c", (char *)&a2 + 3);
        v11 = HIBYTE(a2);
      }
      else if ( (unsigned __int8)sub_1042D170(1) )
      {
        v11 = *(_BYTE *)(v3[3] - v3[8] + *v3);
        ++v3[3];
      }
      else
      {
        v11 = 0;
      }
      *((_BYTE *)this + 73) = v11 != 0;
    }
  }
  if ( a3 > 3 )
    this[20] = sub_1008A160(v3);
  return v17;
}
