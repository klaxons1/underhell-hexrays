void __thiscall sub_10231E70(int this, int a2)
{
  const char *v3; // eax

  if ( !*(_BYTE *)(this + 889) )
  {
    v3 = *(const char **)(this + 808);
    if ( !v3 )
      v3 = String;
    DevMsg(2, "InputCancelScript: Cancelling script '%s'\n", v3);
    if ( *(_BYTE *)(this + 888) )
    {
      sub_100EC3F0((_DWORD *)this, 0, 0.0, 0);
      *(_BYTE *)(this + 888) = 0;
    }
    sub_10231CC0(this, 0);
  }
}
