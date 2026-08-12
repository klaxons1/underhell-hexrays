int __thiscall sub_101E2410(int this, int a2)
{
  int result; // eax
  char v4; // dl

  *(_DWORD *)(this + 312) = dword_103EDE98++;
  *(_DWORD *)(this + 364) = 257;
  *(_BYTE *)(this + 4) = 0;
  sub_1022CFC0((void *)Locale);
  sub_1022CFC0((void *)Locale);
  sub_1022CFC0((void *)Locale);
  sub_1022CFC0((void *)Locale);
  *(float *)(this + 72) = 0.0;
  *(_BYTE *)(this + 376) &= 0xF8u;
  *(_DWORD *)(this + 296) = a2;
  *(float *)(this + 76) = -1.0;
  *(_DWORD *)(this + 180) = 0;
  *(_DWORD *)(this + 184) = 0;
  sub_1022CFC0((void *)Locale);
  sub_1022CFC0((void *)Locale);
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
  result = sub_1022CFC0((void *)Locale);
  v4 = *(_BYTE *)(this + 377);
  *(float *)(this + 340) = 0.0;
  *(_BYTE *)(this + 376) &= ~0x80u;
  *(_BYTE *)(this + 5) = 0;
  *(_DWORD *)(this + 332) = 0;
  *(_DWORD *)(this + 336) = 0;
  *(_BYTE *)(this + 377) = v4 & 0xD8 | 0x20;
  return result;
}
