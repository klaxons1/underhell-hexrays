BOOL __thiscall sub_100A8E60(int this, int a2)
{
  int v2; // eax

  v2 = *(_DWORD *)(a2 + 8);
  return !v2 || sub_100A8CA0(*(int **)(a2 + 4), v2, *(float *)(this + 960), *(_BYTE *)(this + 964));
}
