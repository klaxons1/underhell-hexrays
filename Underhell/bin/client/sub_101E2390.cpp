double __thiscall sub_101E2390(int this)
{
  int v3; // ecx
  float v4; // [esp+4h] [ebp-4h]

  if ( !*(_DWORD *)(this + 24) )
    return 0.0;
  v3 = *(_DWORD *)(this + 24);
  v4 = *(float *)(v3 + 72);
  return ((double (*)(void))**(_DWORD **)v3)() * *(float *)(this + 16) + v4;
}
