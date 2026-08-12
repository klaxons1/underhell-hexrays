bool __thiscall sub_1032E9B0(int this)
{
  int v2; // eax
  const char *v3; // eax

  if ( *(_DWORD *)(dword_10698344 + 48) )
  {
    if ( *(_BYTE *)(this + 3688) && !(unsigned __int8)sub_10295530((void *)(this + 3652)) )
      return 1;
  }
  else
  {
    v2 = *(_DWORD *)(this + 908);
    if ( v2 != -1 )
    {
      v3 = sub_100BE1F0(this, v2);
      return strncmp(v3, "slump", 5u) == 0;
    }
  }
  return 0;
}
