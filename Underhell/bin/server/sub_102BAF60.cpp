void __thiscall sub_102BAF60(_DWORD *this)
{
  int v2; // eax
  int v3; // eax

  v2 = this[204];
  if ( v2 )
  {
    v3 = v2 - 1;
    if ( !v3 )
    {
      sub_102BA980((int)this);
      ++this[204];
      return;
    }
    if ( v3 == 1 )
    {
      sub_102BA780((int)this, 1.0);
      ++this[204];
      return;
    }
  }
  else
  {
    sub_102BA680((int)this, 0.050000001);
  }
  ++this[204];
}
