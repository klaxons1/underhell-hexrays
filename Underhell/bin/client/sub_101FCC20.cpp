void __thiscall sub_101FCC20(int **this, _BYTE *Src)
{
  int v2; // eax

  if ( Src && *Src )
  {
    v2 = sub_101FBCF0(this[35], Src);
    if ( v2 )
      sub_101FC030(v2);
    else
      Warning("Attemped to precache unknown particle system \"%s\"!\n", Src);
  }
}
