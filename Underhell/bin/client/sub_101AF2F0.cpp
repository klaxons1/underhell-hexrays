void __thiscall sub_101AF2F0(_DWORD *this, int a2)
{
  int v3; // edi
  int v4; // eax
  char *v5; // edx
  char v6; // cl
  int v7; // eax
  char *v8; // edx
  char v9; // cl
  int v10; // esi
  int v11; // eax
  int v12; // ecx
  int v13; // eax
  char *v14; // eax
  char Str[540]; // [esp+8h] [ebp-220h] BYREF
  int v16; // [esp+224h] [ebp-4h]

  if ( a2 )
  {
    v3 = sub_10229C90(a2);
    v16 = v3;
    if ( v3 )
    {
      while ( 1 )
      {
        v4 = sub_10229A00(v3);
        v5 = &Str[-v4];
        do
        {
          v6 = *(_BYTE *)v4;
          v5[v4] = *(_BYTE *)v4;
          ++v4;
        }
        while ( v6 );
        v7 = sub_1022B4C0(Str, (int)"Default");
        v8 = &Str[-v7 + 256];
        do
        {
          v9 = *(_BYTE *)v7;
          v8[v7] = *(_BYTE *)v7;
          ++v7;
        }
        while ( v9 );
        v10 = this[69];
        v11 = this[67];
        if ( v10 + 1 > v11 )
          sub_101AE580(this + 66, v10 - v11 + 1);
        ++this[69];
        v12 = this[66];
        v13 = this[69] - v10 - 1;
        this[70] = v12;
        if ( v13 > 0 )
          memcpy((void *)(540 * v10 + v12 + 540), (const void *)(540 * v10 + v12), 540 * v13);
        v14 = (char *)(this[66] + 540 * v10);
        if ( v14 )
        {
          qmemcpy(v14, Str, 0x21Cu);
          v3 = v16;
        }
        v16 = sub_1021F0F0(v3);
        if ( !v16 )
          break;
        v3 = v16;
      }
    }
  }
}
