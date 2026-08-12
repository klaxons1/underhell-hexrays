char __thiscall sub_100C5580(_DWORD *this, char *Source, char a3, float a4, char a5, char a6)
{
  int v7; // eax
  int v8; // ebx
  char *v9; // esi
  _DWORD *v10; // esi
  int v11; // edi
  _DWORD *v12; // eax
  char v14[512]; // [esp+8h] [ebp-208h] BYREF
  _DWORD *v15; // [esp+208h] [ebp-8h]
  char v16; // [esp+20Fh] [ebp-1h]

  v15 = this;
  v16 = 1;
  v7 = sub_100DDA40(28);
  v8 = 0;
  if ( v7 )
  {
    *(_BYTE *)(v7 + 4) &= 0xFCu;
    *(float *)v7 = 0.0;
    *(_DWORD *)(v7 + 8) = 0;
    *(_DWORD *)(v7 + 12) = 0;
    *(_DWORD *)(v7 + 16) = 0;
    *(_DWORD *)(v7 + 20) = 0;
    *(_DWORD *)(v7 + 24) = 0;
    v8 = v7;
  }
  *(_BYTE *)(v8 + 4) = a3 & 1 | *(_BYTE *)(v8 + 4) & 0xFA | (4 * (a6 & 1));
  if ( a3 )
  {
    v14[0] = 0;
    v9 = sub_10076840(v14, Source, 32);
    while ( v9 )
    {
      if ( (int)strlen(v14) <= 0 )
        break;
      v9 = sub_10076840(v14, v9, 32);
      if ( !strlen(v14) )
        break;
      sub_100C3F80((_DWORD *)v8, this + 108, v14);
    }
  }
  else
  {
    v16 = sub_100C3F80((_DWORD *)v8, this + 108, Source);
  }
  v10 = this + 63;
  v11 = (unsigned __int16)sub_100EC160(0);
  sub_1016F8E0(0xFFFF, v11);
  v12 = (_DWORD *)(*v10 + 8 * v11);
  if ( v12 )
    *v12 = v8;
  *(float *)v8 = a4;
  *(_BYTE *)(v8 + 4) ^= (*(_BYTE *)(v8 + 4) ^ (2 * a5)) & 2;
  sub_100C5160((_DWORD *)v8, (int)v15, v15 + 108);
  return v16;
}
