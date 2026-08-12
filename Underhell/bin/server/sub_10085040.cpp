double __thiscall sub_10085040(_DWORD *this, int a2)
{
  int v2; // edx

  v2 = this[2];
  if ( v2 && a2 >= 0 && a2 <= this[1] )
    return *(float *)(*(_DWORD *)(v2 + 4 * a2) + 56);
  else
    return 0.0;
}
