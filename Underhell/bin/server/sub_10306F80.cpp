int __thiscall sub_10306F80(int this, int a2)
{
  unsigned int v2; // eax
  int *v4; // ecx
  unsigned int v5; // eax
  int v6; // ecx
  unsigned int v7; // eax
  __int64 v8; // rax
  unsigned int v9; // eax
  __int64 v10; // rax
  int v11; // eax
  float v13; // [esp+4h] [ebp-14h]

  v2 = *(_DWORD *)(a2 + 44);
  if ( v2 != -1 )
  {
    v4 = &off_1061BE18[4 * (*(_DWORD *)(a2 + 44) & 0xFFF) + 1];
    v5 = v2 >> 12;
    if ( off_1061BE18[4 * (*(_DWORD *)(a2 + 44) & 0xFFF) + 2] == v5 )
    {
      if ( *v4 )
      {
        v6 = off_1061BE18[4 * (*(_DWORD *)(a2 + 44) & 0xFFF) + 2] == v5 ? *v4 : 0;
        if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v6 + 320))(v6) )
        {
          v7 = *(_DWORD *)(a2 + 44);
          if ( v7 == -1 || off_1061BE18[4 * (*(_DWORD *)(a2 + 44) & 0xFFF) + 2] != *(_DWORD *)(a2 + 44) >> 12 )
            HIDWORD(v8) = 0;
          else
            HIDWORD(v8) = off_1061BE18[4 * (*(_DWORD *)(a2 + 44) & 0xFFF) + 1];
          if ( v7 == -1 || off_1061BE18[4 * (*(_DWORD *)(a2 + 44) & 0xFFF) + 2] != v7 >> 12 )
            LODWORD(v8) = 0;
          else
            LODWORD(v8) = off_1061BE18[4 * (*(_DWORD *)(a2 + 44) & 0xFFF) + 1];
          sub_1010DD80((_DWORD *)(this + 1196), v8, 0.0);
        }
      }
    }
  }
  v9 = *(_DWORD *)(a2 + 44);
  if ( v9 == -1 || off_1061BE18[4 * (*(_DWORD *)(a2 + 44) & 0xFFF) + 2] != *(_DWORD *)(a2 + 44) >> 12 )
    HIDWORD(v10) = 0;
  else
    HIDWORD(v10) = off_1061BE18[4 * (*(_DWORD *)(a2 + 44) & 0xFFF) + 1];
  if ( v9 == -1 || off_1061BE18[4 * (*(_DWORD *)(a2 + 44) & 0xFFF) + 2] != v9 >> 12 )
    LODWORD(v10) = 0;
  else
    LODWORD(v10) = off_1061BE18[4 * (*(_DWORD *)(a2 + 44) & 0xFFF) + 1];
  sub_1010DD80((_DWORD *)(this + 1172), v10, 0.0);
  sub_100DA010((_DWORD *)this, (_DWORD *)a2);
  if ( *(_DWORD *)(a2 + 44) == -1 || off_1061BE18[4 * (*(_DWORD *)(a2 + 44) & 0xFFF) + 2] != *(_DWORD *)(a2 + 44) >> 12 )
    v11 = 0;
  else
    v11 = off_1061BE18[4 * (*(_DWORD *)(a2 + 44) & 0xFFF) + 1];
  LOBYTE(a2) = (*(_BYTE *)(a2 + 64) & 0x81) != 0;
  sub_10306B20(this, v11, 0, a2);
  if ( *(_BYTE *)(this + 225) )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 480))(this, this + 225);
    *(_BYTE *)(this + 225) = 0;
  }
  if ( *(_DWORD *)(dword_106E2F84 + 48) )
    sub_10306040((void *)this);
  sub_100EC3F0((_DWORD *)this, (int)sub_10246D70, 0.0, 0);
  v13 = *(float *)(dword_106B31C8 + 12) + 0.1;
  return sub_100EC4A0((int *)this, v13, 0);
}
