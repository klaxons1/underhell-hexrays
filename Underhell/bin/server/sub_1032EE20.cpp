int __thiscall sub_1032EE20(int this, int a2)
{
  int result; // eax
  int v4; // eax
  const char *v5; // eax

  if ( *(_DWORD *)(dword_10698344 + 48) )
  {
    if ( !*(_BYTE *)(this + 3688) || (unsigned __int8)sub_10295530((void *)(this + 3652)) )
      return sub_100C9AD0((_DWORD *)this, a2);
  }
  else
  {
    v4 = *(_DWORD *)(this + 908);
    if ( v4 == -1 )
      return sub_100C9AD0((_DWORD *)this, a2);
    v5 = sub_100BE1F0(this, v4);
    if ( strncmp(v5, "slump", 5u) )
      return sub_100C9AD0((_DWORD *)this, a2);
  }
  *(_BYTE *)(this + 3829) = 0;
  result = sub_100C9AD0((_DWORD *)this, a2);
  *(_BYTE *)(this + 3829) = 1;
  return result;
}
