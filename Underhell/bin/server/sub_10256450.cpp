char *__thiscall sub_10256450(float *this)
{
  int v3; // [esp+8h] [ebp-4h]

  sub_1042CBA0("sv_alternateticks");
  if ( 0.0 == this[276] || !*(_DWORD *)(v3 + 48) )
  {
    this[277] = this[27];
    return sub_10255CE0((int)this);
  }
  else
  {
    this[277] = this[27] * this[276];
    return sub_10255CE0((int)this);
  }
}
