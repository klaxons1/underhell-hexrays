int __thiscall sub_10418AA0(int this, int a2)
{
  int result; // eax
  char v4; // dl

  *(_DWORD *)(this + 312) = dword_106895C0++;
  *(_DWORD *)(this + 364) = 257;
  *(_BYTE *)(this + 4) = 0;
  sub_10431020((void *)String);
  sub_10431020((void *)String);
  sub_10431020((void *)String);
  sub_10431020((void *)String);
  *(float *)(this + 72) = 0.0;
  *(_BYTE *)(this + 376) &= 0xF8u;
  *(_DWORD *)(this + 296) = a2;
  *(float *)(this + 76) = -1.0;
  *(_DWORD *)(this + 180) = 0;
  *(_DWORD *)(this + 184) = 0;
  sub_10431020((void *)String);
  sub_10431020((void *)String);
  *(_BYTE *)(this + 377) &= 0xA7u;
  *(float *)(this + 308) = 0.0;
  *(_BYTE *)(this + 376) &= 0xC7u;
  *(float *)(this + 80) = 0.0;
  *(_DWORD *)(this + 288) = 0;
  *(_DWORD *)(this + 292) = 0;
  *(_DWORD *)(this + 304) = 0;
  *(_DWORD *)(this + 300) = 0;
  *(_DWORD *)(this + 84) = -1;
  *(_DWORD *)(this + 88) = 0;
  result = sub_10431020((void *)String);
  v4 = *(_BYTE *)(this + 377);
  *(float *)(this + 340) = 0.0;
  *(_BYTE *)(this + 376) &= ~0x80u;
  *(_BYTE *)(this + 5) = 0;
  *(_DWORD *)(this + 332) = 0;
  *(_DWORD *)(this + 336) = 0;
  *(_BYTE *)(this + 377) = v4 & 0xD8 | 0x20;
  return result;
}
