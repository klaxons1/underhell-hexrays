BOOL __thiscall sub_101FCB70(__m128 *this, int a2)
{
  int v2; // esi
  int v4; // eax

  v2 = a2;
  if ( !a2 )
  {
    Warning("Particlelib: Missing precache for particle system type \"%s\"!\n", "unknown");
    v4 = sub_101FBCF0(*((int **)off_103EE614 + 35), "error");
    if ( v4 )
      v2 = v4;
  }
  sub_101FC420(this, v2, 0.0, 0);
  return this[4].m128_i32[0] != 0;
}
