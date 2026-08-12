void __thiscall sub_1017DC80(_DWORD *this)
{
  int i; // edi
  int *v3; // esi

  for ( i = this[3] - 1; i >= 0; --i )
  {
    v3 = (int *)(*this + 8 * i);
    if ( *v3 && *(_BYTE *)*v3 )
    {
      sub_10034930(*v3);
      *v3 = 0;
    }
  }
  this[3] = 0;
}
