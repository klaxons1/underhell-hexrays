_DWORD *__thiscall sub_100F2730(int *this, _BYTE *a2)
{
  int v3; // esi
  _DWORD *v4; // eax
  _DWORD *v5; // edi
  bool v6; // zf
  int v7; // esi
  int *v8; // ebx
  float *v9; // eax
  unsigned int v10; // ecx
  int *v11; // eax
  unsigned int v12; // ecx
  int v13; // eax
  float v15[3]; // [esp+8h] [ebp-2Ch] BYREF
  float v16[3]; // [esp+14h] [ebp-20h] BYREF
  float v17[3]; // [esp+20h] [ebp-14h] BYREF
  int v18; // [esp+2Ch] [ebp-8h]
  int *v19; // [esp+30h] [ebp-4h]
  int v20; // [esp+3Ch] [ebp+8h]

  v19 = this;
  sub_100F1890(this, 0, 1, 1);
  if ( !a2 || !*a2 )
    return 0;
  if ( this[1685] == -1 || *((_DWORD *)off_103DCD74 + 4 * (this[1685] & 0xFFF) + 2) != (unsigned int)this[1685] >> 12 )
    v3 = 0;
  else
    v3 = *((_DWORD *)off_103DCD74 + 4 * (this[1685] & 0xFFF) + 1);
  v4 = (_DWORD *)sub_101F8C60(7040);
  if ( v4 )
    v5 = sub_100F23A0(v4, v3, a2);
  else
    v5 = 0;
  *((_BYTE *)v5 + 6720) |= 0x40u;
  ++v5[1756];
  v5[1679] = a2;
  if ( v5[20] )
  {
    v18 = -32 - (_DWORD)v19;
    v7 = 0;
    v8 = this + 42;
    v20 = -168 - (_DWORD)v19;
    do
    {
      if ( (*((_QWORD *)v19 + 825) & (1LL << v7)) != 0 )
      {
        sub_100F2080(v5, v7, (float *)v8 - 16);
        v9 = (float *)((char *)v8 + v20 + (_DWORD)(v19 + 4));
        v15[0] = v9[28];
        v15[1] = v9[29];
        v15[2] = v9[30];
        v16[0] = *(float *)((char *)v19 + (_DWORD)v8 + v18 + 16);
        v16[1] = *(float *)((char *)v19 + (_DWORD)v8 + v18 + 20);
        v16[2] = *(float *)((char *)v19 + (_DWORD)v8 + v18 + 24);
        v17[0] = v9[31];
        v17[1] = v9[32];
        v17[2] = v9[33];
        sub_100F1770(v5 + 4, v7, v15, v16, v17);
        sub_100F2150(v5, v7);
        sub_10058FF0(v5 + 4, v7, *v8);
      }
      ++v7;
      v8 += 17;
    }
    while ( v7 < 64 );
    v10 = v19[1685];
    if ( v10 != -1 )
    {
      v11 = (int *)((char *)off_103DCD74 + 16 * (v19[1685] & 0xFFF) + 4);
      v12 = v10 >> 12;
      if ( *((_DWORD *)off_103DCD74 + 4 * (v19[1685] & 0xFFF) + 2) == v12 )
      {
        if ( *v11 )
        {
          if ( *((_DWORD *)off_103DCD74 + 4 * (v19[1685] & 0xFFF) + 2) == v12 )
            v13 = *v11;
          else
            v13 = 0;
          sub_100E9F60((_DWORD *)(v13 + 444), (int)v19, (int)v5);
        }
      }
    }
    v6 = v5[1756]-- == 1;
  }
  else
  {
    v6 = v5[1756]-- == 1;
  }
  if ( v6 && (v5[1680] & 0x40) != 0 )
  {
    if ( (unsigned __int8)sub_101FA3E0(v5 + 4) )
      *((_BYTE *)v5 + 6720) |= 2u;
  }
  return v5;
}
