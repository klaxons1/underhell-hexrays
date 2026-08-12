int __thiscall sub_10234BE0(int this)
{
  double v2; // st7
  int result; // eax
  int v4; // edi
  double v5; // [esp+10h] [ebp-8h]

  v5 = *(float *)(this + 20);
  v2 = Plat_FloatTime();
  result = (int)ceil(v5 - (v2 - *(float *)(this + 12)));
  v4 = result;
  if ( *(_DWORD *)(this + 28) != result )
  {
    result = Msg("Starting benchmark in %d seconds...\n", result);
    *(_DWORD *)(this + 28) = v4;
  }
  return result;
}
