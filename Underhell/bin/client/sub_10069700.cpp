int __thiscall sub_10069700(_DWORD *this, int a2)
{
  const char *v2; // eax

  v2 = "none";
  if ( a2 >= 0 && a2 < this[10] )
    v2 = (const char *)sub_10229A00(*(_DWORD *)(this[7] + 4 * a2));
  return DevMsg(1, "Soundscape: %s\n", v2);
}
