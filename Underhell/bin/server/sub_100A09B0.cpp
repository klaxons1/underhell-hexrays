int __thiscall sub_100A09B0(int this)
{
  int v2; // ebx
  int i; // esi
  int result; // eax

  v2 = *(__int16 *)(this + 78);
  for ( i = 0; i < v2; ++i )
    result = Msg("%s\n", *(const char **)(*(_DWORD *)(this + 64) + 60 * (__int16)i + 8));
  return result;
}
