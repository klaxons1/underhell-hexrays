char *__thiscall sub_101B6600(char *this, int a2)
{
  int v3; // eax
  float *v4; // edi
  int v6; // [esp+Ch] [ebp-8h]
  int v7; // [esp+10h] [ebp-4h]

  *(_DWORD *)this = *(_DWORD *)a2;
  *((_DWORD *)this + 1) = *(_DWORD *)(a2 + 4);
  *((float *)this + 2) = *(float *)(a2 + 8);
  v3 = a2 - (_DWORD)this;
  *((float *)this + 3) = *(float *)(a2 + 12);
  v4 = (float *)(this + 48);
  *((float *)this + 4) = *(float *)(a2 + 16);
  v6 = a2 - (_DWORD)this;
  v7 = 4;
  *((float *)this + 5) = *(float *)(a2 + 20);
  *((float *)this + 6) = *(float *)(a2 + 24);
  *((float *)this + 7) = *(float *)(a2 + 28);
  *((float *)this + 8) = *(float *)(a2 + 32);
  *((float *)this + 9) = *(float *)(a2 + 36);
  *((float *)this + 10) = *(float *)(a2 + 40);
  *((float *)this + 11) = *(float *)(a2 + 44);
  while ( 1 )
  {
    sub_101B57B0(v4, (float *)((char *)v4 + v3));
    v4 += 29;
    if ( !--v7 )
      break;
    v3 = v6;
  }
  qmemcpy(this + 512, (const void *)(a2 + 512), 0x58u);
  qmemcpy(this + 600, (const void *)(a2 + 600), 0x48u);
  return this;
}
