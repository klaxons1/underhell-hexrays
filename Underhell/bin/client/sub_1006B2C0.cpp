void *__thiscall sub_1006B2C0(int this, int a2)
{
  int v3; // esi
  int v4; // edi
  int v5; // eax
  int v6; // eax
  void *result; // eax
  _DWORD v8[5]; // [esp+8h] [ebp-18h] BYREF
  __int16 v9; // [esp+1Ch] [ebp-4h]
  char v10; // [esp+1Eh] [ebp-2h]
  unsigned int v11; // [esp+28h] [ebp+8h]

  v3 = *(_DWORD *)(this + 172) - 1;
  if ( v3 >= 0 )
  {
    v4 = *(_DWORD *)(this + 172);
    if ( v4 >= 4 )
    {
      v5 = 40 * v3;
      v11 = (unsigned int)v4 >> 2;
      v3 -= 4 * ((unsigned int)v4 >> 2);
      do
      {
        *(float *)(*(_DWORD *)(this + 160) + v5 + 16) = 0.0;
        if ( !a2 )
          *(float *)(*(_DWORD *)(this + 160) + v5 + 20) = 0.0;
        *(float *)(*(_DWORD *)(this + 160) + v5 - 24) = 0.0;
        if ( !a2 )
          *(float *)(*(_DWORD *)(this + 160) + v5 - 20) = 0.0;
        *(float *)(*(_DWORD *)(this + 160) + v5 - 64) = 0.0;
        if ( !a2 )
          *(float *)(*(_DWORD *)(this + 160) + v5 - 60) = 0.0;
        *(float *)(*(_DWORD *)(this + 160) + v5 - 104) = 0.0;
        if ( !a2 )
          *(float *)(*(_DWORD *)(this + 160) + v5 - 100) = 0.0;
        v5 -= 160;
        --v11;
      }
      while ( v11 );
    }
    if ( v3 >= 0 )
    {
      v6 = 40 * v3;
      do
      {
        *(float *)(*(_DWORD *)(this + 160) + v6 + 16) = 0.0;
        if ( !a2 )
          *(float *)(*(_DWORD *)(this + 160) + v6 + 20) = 0.0;
        --v3;
        v6 -= 40;
      }
      while ( v3 >= 0 );
    }
  }
  ++*(_DWORD *)(this + 204);
  *(_DWORD *)(this + 192) = 0;
  result = off_103DC81C;
  *(float *)(this + 200) = *((float *)off_103DC81C + 3);
  if ( a2 )
  {
    v8[3] = -1;
    *(float *)&v8[1] = 1.0;
    v8[4] = -1;
    v9 = 1;
    v10 = 0;
    v8[2] = 0;
    v8[0] = 0;
    result = (void *)sub_1006AEB0((int *)this, a2, (int)v8);
    if ( !v10 )
      result = (void *)sub_10229150(dword_10411108);
    if ( !HIBYTE(v9) )
      return (void *)sub_10229150(dword_1041110C);
  }
  return result;
}
