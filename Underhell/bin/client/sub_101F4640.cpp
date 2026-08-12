int __thiscall sub_101F4640(_BYTE *this)
{
  char v2; // al
  char v3; // al
  char v4; // al
  int v5; // eax

  memset(&flt_10464FD8, 0, 0x38u);
  v2 = (byte_10464FFC ^ (*(_DWORD *)(dword_104652D4 + 48) != 0)) & 1 ^ byte_10464FFC;
  byte_10464FFC = v2;
  flt_10464FD8 = *(float *)(dword_1046556C + 44);
  flt_10464FDC = *(float *)(dword_104655B4 + 44);
  flt_10464FE0 = *(float *)(dword_10465374 + 44);
  flt_10464FE4 = *(float *)(dword_1046516C + 44);
  if ( *(_DWORD *)(dword_10465124 + 48) || (this[2728] & 8) != 0 )
    v3 = v2 | 2;
  else
    v3 = v2 & 0xFD;
  byte_10464FFC = v3;
  byte_10464FFC = (v3 ^ (4 * (*(_DWORD *)(dword_10465094 + 48) != 0))) & 4 ^ v3;
  byte_10464FFC ^= (byte_10464FFC ^ (8 * (*(_DWORD *)(dword_10465404 + 48) != 0))) & 8;
  byte_10464FFC ^= (byte_10464FFC ^ (16 * (*(_DWORD *)(dword_10465244 + 48) != 0))) & 0x10;
  dword_10464FF0 = *(_DWORD *)(dword_10465494 + 48);
  byte_10464FFC ^= (byte_10464FFC ^ ((*(_DWORD *)(dword_104653BC + 48) != 0) << 6)) & 0x40;
  byte_10464FFC ^= (byte_10464FFC ^ (32 * (*(_DWORD *)(dword_104650DC + 48) != 0))) & 0x20;
  byte_10464FFC = (16 * this[2728]) ^ (byte_10464FFC ^ (16 * this[2728])) & 0x7F;
  byte_10464FFD ^= (byte_10464FFD ^ (*(_DWORD *)(dword_1046528C + 48) != 0)) & 1;
  dword_10464FF4 = *(_DWORD *)(dword_10465524 + 48);
  dword_10464FEC = *(_DWORD *)(dword_1046544C + 48);
  v4 = ((byte_10464FFD ^ (32 * (*(_DWORD *)(dword_104654DC + 48) != 0))) & 0x20 ^ byte_10464FFD) & 0xF7;
  dword_10464FF8 = 0;
  byte_10464FFD = v4;
  byte_10464FFD = (v4 ^ (16 * (*(_DWORD *)(dword_104651FC + 48) != 0))) & 0x10 ^ v4;
  flt_10464FE8 = *(float *)(dword_104651B4 + 44);
  v5 = sub_101F42A0();
  return (*(int (__thiscall **)(int, float *))(*(_DWORD *)v5 + 32))(v5, &flt_10464FD8);
}
