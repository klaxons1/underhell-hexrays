char __thiscall sub_100CC0A0(_DWORD *this, int a2)
{
  int v2; // eax
  int v4; // edi
  int v5; // ebx
  int v6; // esi
  int v7; // [esp+0h] [ebp-8h]
  _DWORD *v8; // [esp+4h] [ebp-4h]

  v2 = this[8];
  v8 = this;
  v7 = v2;
  if ( !v2 )
    return 0;
  v4 = 0;
  if ( v2 > 0 )
  {
    v5 = 0;
    while ( 1 )
    {
      v6 = v5 + this[5];
      if ( v4 )
        sub_1022D1D0((void *)".");
      sub_1022D0F0(v6);
      ++v4;
      v5 += 16;
      if ( v4 >= v7 )
        break;
      this = v8;
    }
  }
  return 1;
}
