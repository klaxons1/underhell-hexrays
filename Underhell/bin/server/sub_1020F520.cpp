char __thiscall sub_1020F520(_BYTE *this, int a2, int a3)
{
  char v4; // al
  int v6; // eax
  int v7; // ebx
  int v8; // eax
  _DWORD *v9; // ecx
  char v10; // al
  _BYTE *v11; // edi
  int v12; // ebx
  int v13; // eax
  _DWORD *v14; // ecx
  double v15; // st7
  __int64 v16; // [esp+0h] [ebp-18h]
  __int64 v17; // [esp+0h] [ebp-18h]
  float v18; // [esp+4h] [ebp-14h]
  float v19; // [esp+4h] [ebp-14h]
  float v20; // [esp+8h] [ebp-10h]

  v4 = this[175];
  switch ( v4 )
  {
    case 2:
      return 1;
    case 5:
      return 0;
    case 0:
      v6 = sub_100BDCE0((int)(this - 1124), 388);
      sub_100C3330((int)(this - 1124), v6);
      sub_10045B20((int)(this - 1124), 0.0);
      sub_100C1A10((int)(this - 1124));
      this[175] = 1;
      return 0;
    case 3:
      if ( a3 == 1 )
        return 0;
      v7 = sub_100BDCE0((int)(this - 1124), 390);
      if ( v7 == -1 )
      {
        v7 = sub_100BDCE0((int)(this - 1124), 389);
        this[175] = 4;
        v9 = this + 224;
      }
      else
      {
        v8 = off_10642FA4;
        this[175] = 6;
        v18 = *(float *)(dword_106B31C8 + 12) + 0.1;
        sub_100EC3F0((_DWORD *)this - 281, (int)sub_1020D530, v18, v8);
        v9 = this + 200;
      }
      HIDWORD(v16) = this - 1124;
      LODWORD(v16) = 0;
      sub_1010DD80(v9, v16, 0.0);
      sub_100C3330((int)(this - 1124), v7);
      sub_10045B20((int)(this - 1124), 1.0);
      sub_100C1A10((int)(this - 1124));
      break;
  }
  v10 = this[175];
  if ( v10 == 6 || v10 == 7 )
    return 0;
  if ( v10 == 4 )
  {
    if ( a3 == 1 )
      return 0;
    v11 = this - 1124;
    sub_100C2660((int)(this - 1124), *(float *)(dword_106B31C8 + 16));
    (*(void (__thiscall **)(_BYTE *, _BYTE *))(*((_DWORD *)this - 281) + 784))(this - 1124, this - 1124);
    if ( !(*(unsigned __int8 (__thiscall **)(_BYTE *))(*((_DWORD *)this - 281) + 732))(this - 1124) )
      return 0;
    v12 = sub_100BDCE0((int)(this - 1124), 391);
    if ( v12 == -1 )
    {
      this[175] = 5;
      v14 = this + 272;
    }
    else
    {
      v13 = off_10642FA4;
      this[175] = 7;
      v19 = *(float *)(dword_106B31C8 + 12) + 0.1;
      sub_100EC3F0((_DWORD *)this - 281, (int)sub_1020D530, v19, v13);
      sub_100C3330((int)(this - 1124), v12);
      sub_10045B20((int)(this - 1124), 1.0);
      sub_100C1A10((int)(this - 1124));
      v14 = this + 248;
    }
  }
  else
  {
    if ( a3 )
      v15 = 0.5;
    else
      v15 = *(float *)(dword_106B31C8 + 16);
    v11 = this - 1124;
    v20 = v15;
    sub_100C2660((int)(this - 1124), v20);
    sub_100C1A10((int)(this - 1124));
    (*(void (__thiscall **)(_BYTE *, _BYTE *))(*((_DWORD *)this - 281) + 784))(this - 1124, this - 1124);
    if ( !(*(unsigned __int8 (__thiscall **)(_BYTE *))(*((_DWORD *)this - 281) + 732))(this - 1124) )
      return 0;
    sub_10045B20((int)(this - 1124), 1.0);
    this[175] = 2;
    v14 = this + 176;
  }
  HIDWORD(v17) = v11;
  LODWORD(v17) = 0;
  sub_1010DD80(v14, v17, 0.0);
  return 0;
}
