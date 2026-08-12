void __thiscall sub_10267430(_BYTE *this)
{
  unsigned __int8 v2; // al
  int v3; // eax
  unsigned __int8 v4; // bl
  int v5; // esi
  char v6; // al
  char v7; // al
  unsigned __int8 v8; // [esp+7h] [ebp-1h]

  if ( this[16] != 0xFF )
  {
    v2 = this[12];
    v8 = v2;
    if ( v2 != 0xFF )
    {
      while ( 1 )
      {
        v3 = 9 * v2;
        v4 = *(_BYTE *)(*(_DWORD *)this + 8 * v3 + 69);
        v5 = *(_DWORD *)this + 8 * v3;
        sub_10266510((_DWORD *)(v5 + 28));
        *(_BYTE *)(v5 + 68) = v8;
        v6 = v4 == 0xFF ? this[14] : v4;
        *(_BYTE *)(v5 + 69) = v6;
        v8 = v4;
        if ( v4 == 0xFF )
          break;
        v2 = v4;
      }
    }
    v7 = this[12];
    if ( v7 != -1 )
      this[14] = v7;
    this[12] = -1;
    this[13] = -1;
    this[15] = 0;
  }
}
