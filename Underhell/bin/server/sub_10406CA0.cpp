void __thiscall sub_10406CA0(int this)
{
  int v2; // esi
  unsigned int v3; // eax
  int v4; // edi
  float v5; // edx
  float v6; // eax
  float v7[3]; // [esp+10h] [ebp-1Ch] BYREF
  float v8; // [esp+1Ch] [ebp-10h]
  float v9; // [esp+20h] [ebp-Ch]
  float v10; // [esp+24h] [ebp-8h]
  char v11; // [esp+2Bh] [ebp-1h]
  int savedregs; // [esp+2Ch] [ebp+0h] BYREF

  sub_104063C0(this, (int)&savedregs);
  v2 = dword_106F04AC;
  v11 = 0;
  if ( !dword_106F04AC )
    goto LABEL_11;
  do
  {
    if ( *(_BYTE *)(v2 + 897) )
    {
      v3 = *(_DWORD *)(v2 + 412);
      if ( v3 == -1 || off_1061BE18[4 * (*(_DWORD *)(v2 + 412) & 0xFFF) + 2] != v3 >> 12 )
        v4 = 0;
      else
        v4 = off_1061BE18[4 * (*(_DWORD *)(v2 + 412) & 0xFFF) + 1];
      if ( v4 == sub_10019B00((_DWORD *)this) )
        v11 = 1;
    }
    v2 = *(_DWORD *)(v2 + 900);
  }
  while ( v2 );
  if ( !v11 )
  {
LABEL_11:
    if ( (*(_DWORD *)(this + 252) & 0x1000) != 0 )
      sub_100DAFD0(this);
    v5 = *(float *)(this + 480);
    v6 = *(float *)(this + 484);
    v8 = *(float *)(this + 476);
    v9 = v5;
    v10 = v6;
    off_10689714();
    v7[0] = v8 * 800.0;
    v7[1] = v9 * 800.0;
    v7[2] = 800.0 * v10;
    sub_100DD660(this, v7);
    sub_100EC3F0((_DWORD *)this, 0, 0.0, 0);
  }
}
