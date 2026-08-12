bool __thiscall sub_101FCBD0(__m128 *this, void *Src)
{
  int v3; // eax

  if ( !Src )
    return 0;
  v3 = sub_101FBCF0(*((int **)off_103EE614 + 35), Src);
  if ( !v3 )
  {
    Warning("Attempted to create unknown particle system type \"%s\"!\n", (const char *)Src);
    return 0;
  }
  return sub_101FCB70(this, v3);
}
