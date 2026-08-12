void __thiscall sub_10214480(int this, int a2)
{
  int v2; // eax

  v2 = *(_DWORD *)(this + 1672);
  if ( v2 )
  {
    if ( v2 == 2 )
      sub_10210260((_DWORD *)this);
  }
  else if ( !*(_BYTE *)(this + 1720) )
  {
    sub_102141C0((_DWORD *)this, *(_DWORD *)(this + 1672));
  }
}
