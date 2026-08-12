int __thiscall sub_1001F020(int this, float *a2, int a3, void *Src, void *a5, int a6)
{
  size_t v8; // [esp+0h] [ebp-10h]

  *(_DWORD *)(this + 8) = a3;
  *(_WORD *)(this + 12) = a6;
  *(float *)this = a2[2];
  *(float *)(this + 4) = a2[3];
  v8 = 2 * *(_DWORD *)(**(_DWORD **)a2 + 156);
  *(_WORD *)(this + 16) = v8;
  memcpy_0((void *)(this + 20), Src, v8);
  memcpy_0((void *)(*(unsigned __int16 *)(this + 16) + this + 20), a5, 2 * a6);
  *(_WORD *)(this + 14) = (2 * a6 + *(_WORD *)(this + 16) + 3) & 0xFFFC;
  return sub_1001E2D0((float *)this, *((_DWORD *)a2 + 1), *(_DWORD *)(**(_DWORD **)a2 + 156), a2[2]);
}
