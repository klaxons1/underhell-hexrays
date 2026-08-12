bool __thiscall sub_1041CE70(int this)
{
  int v2; // edi
  bool result; // al

  v2 = 0;
  for ( result = 1; v2 < *(_DWORD *)(this + 96); ++v2 )
    result = result
          && (unsigned __int8)sub_104187F0(
                                *(void **)(*(_DWORD *)(this + 84) + 4 * v2),
                                *(_DWORD *)(this + 160),
                                this,
                                *(float *)(this + 124));
  return result;
}
