void __thiscall sub_10228260(int this)
{
  _BYTE *v1; // esi
  int *v2; // ecx

  if ( *(_BYTE *)(this + 884) )
  {
    v1 = (_BYTE *)(this + 885);
    if ( !*(_BYTE *)(this + 885) && *v1 != 1 )
    {
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
        *v1 = 1;
      }
      else
      {
        v2 = *(int **)(this + 24);
        if ( v2 )
          sub_100194B0(v2, 885);
        *v1 = 1;
      }
    }
  }
}
