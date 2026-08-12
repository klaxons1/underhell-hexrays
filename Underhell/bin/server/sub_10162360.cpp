bool __thiscall sub_10162360(unsigned int *this, _DWORD *a2, int a3)
{
  _DWORD *v3; // esi
  unsigned int v5; // eax
  int v6; // eax
  unsigned int v7; // eax
  unsigned int v8; // eax
  unsigned int v9; // eax
  unsigned int *v10; // ebx
  unsigned int v11; // eax
  int v12; // ebx
  char v13; // cl
  char v14; // cl
  int v16; // [esp+8h] [ebp-8h]
  bool v17; // [esp+Fh] [ebp-1h]

  v3 = a2;
  v5 = sub_1008A260(a2);
  *this = v5;
  v17 = v5 <= 0x186A0;
  v6 = sub_1008A260(v3);
  this[1] = v6 <= 0 ? 0 : v6;
  v7 = sub_1008A260(v3);
  this[2] = v7;
  if ( v7 > 0x186A0 )
    v17 = 0;
  v8 = sub_1008A260(v3);
  this[3] = v8;
  if ( v8 > 0x186A0 )
    v17 = 0;
  v9 = sub_1008A260(v3);
  this[4] = v9;
  if ( v9 > 0x186A0 )
    v17 = 0;
  v10 = this + 5;
  v16 = 3;
  do
  {
    if ( (*((_BYTE *)v3 + 21) & 1) != 0 )
    {
      a2 = 0;
      sub_1042E720(v3, "%d", &a2);
      v11 = (unsigned int)a2;
    }
    else if ( (unsigned __int8)sub_1042D170(4) )
    {
      if ( (v3[11] & 1) != 0 )
      {
        sub_100868D0((_BYTE *)v3 + 44, (int *)&a2, (char *)(v3[3] + *v3 - v3[8]), 1);
        v11 = (unsigned int)a2;
        v3[3] += 4;
      }
      else
      {
        v11 = *(_DWORD *)(*v3 - v3[8] + v3[3]);
        v3[3] += 4;
        a2 = (_DWORD *)v11;
      }
    }
    else
    {
      v11 = 0;
      a2 = 0;
    }
    *v10 = v11;
    if ( v11 > 0x186A0 )
      v17 = 0;
    ++v10;
    --v16;
  }
  while ( v16 );
  v12 = a3;
  if ( a3 > 1 )
  {
    if ( (*((_BYTE *)v3 + 21) & 1) != 0 )
    {
      HIBYTE(a2) = 0;
      sub_1042E720(v3, "%c", (char *)&a2 + 3);
      v13 = HIBYTE(a2);
    }
    else if ( (unsigned __int8)sub_1042D170(1) )
    {
      v13 = *(_BYTE *)(v3[3] - v3[8] + *v3);
      ++v3[3];
    }
    else
    {
      v13 = 0;
    }
    *((_BYTE *)this + 32) = v13 != 0;
  }
  if ( v12 > 2 )
  {
    if ( (*((_BYTE *)v3 + 21) & 1) != 0 )
    {
      HIBYTE(a2) = 0;
      sub_1042E720(v3, "%c", (char *)&a2 + 3);
      v14 = HIBYTE(a2);
    }
    else if ( (unsigned __int8)sub_1042D170(1) )
    {
      v14 = *(_BYTE *)(v3[3] - v3[8] + *v3);
      ++v3[3];
    }
    else
    {
      v14 = 0;
    }
    *((_BYTE *)this + 33) = v14 != 0;
  }
  if ( v12 > 5 )
    this[9] = sub_1008A260(v3);
  return v17;
}
