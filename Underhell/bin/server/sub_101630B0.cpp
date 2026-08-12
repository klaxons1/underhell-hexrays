void __thiscall sub_101630B0(int this)
{
  int i; // esi
  const char *v3; // [esp-8h] [ebp-14h]

  for ( i = (unsigned __int16)sub_10162DE0(this + 4);
        i != 0xFFFF;
        i = (unsigned __int16)sub_10162EB0((_DWORD *)(this + 4), i) )
  {
    v3 = *(const char **)(*(_DWORD *)(this + 8) + 12 * (unsigned __int16)i + 8);
    DevMsg("  %d (0x%x) : %s\n", i, v3, v3);
  }
  DevMsg("\n");
  DevMsg("Size:  %d items\n", *(unsigned __int16 *)(this + 22));
}
