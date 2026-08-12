char __thiscall sub_1018FA50(int this, float a2, float *a3)
{
  char v4; // bl
  unsigned int v5; // eax

  v4 = sub_10044590((float *)this, a2, (int)a3);
  v5 = *(_DWORD *)(this + 4128);
  if ( v5 == -1
    || *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(this + 4128) & 0xFFF) + 2) != v5 >> 12
    || !*((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(this + 4128) & 0xFFF) + 1) )
  {
    sub_1018F070(this, COERCE_INT(*((float *)off_103DC81C + 7)), a3);
    sub_1018E7A0((void *)this, COERCE_INT(*((float *)off_103DC81C + 7)), (int)a3);
  }
  return v4;
}
