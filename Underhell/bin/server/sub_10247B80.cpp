void __thiscall sub_10247B80(_DWORD *this, int a2)
{
  int v3; // edi
  char *v4; // eax
  int v5; // edx
  char v6; // cl
  int v7; // eax
  int v8; // esi
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  void *v12; // eax
  _DWORD v13[65]; // [esp+4h] [ebp-104h] BYREF
  int v14; // [esp+110h] [ebp+8h]

  if ( a2 )
  {
    v3 = sub_1042A2F0(a2);
    v14 = v3;
    if ( v3 )
    {
      while ( 1 )
      {
        v4 = (char *)sub_1042A070(v3);
        v5 = (char *)v13 - v4;
        do
        {
          v6 = *v4;
          v4[v5] = *v4;
          ++v4;
        }
        while ( v6 );
        v7 = sub_1042AE10(0, 0);
        v8 = this[17];
        v13[64] = v7;
        v9 = this[15];
        if ( v8 + 1 > v9 )
          sub_10247860(this + 14, v8 - v9 + 1);
        ++this[17];
        v10 = this[14];
        v11 = this[17] - v8 - 1;
        this[18] = v10;
        if ( v11 > 0 )
          memcpy((void *)(260 * v8 + v10 + 260), (const void *)(260 * v8 + v10), 260 * v11);
        v12 = (void *)(this[14] + 260 * v8);
        if ( v12 )
        {
          qmemcpy(v12, v13, 0x104u);
          v3 = v14;
        }
        v14 = sub_1042A300(v3);
        if ( !v14 )
          break;
        v3 = v14;
      }
    }
  }
}
