int __thiscall sub_100301D0(_DWORD *this)
{
  int v2; // esi

  v2 = this[307];
  if ( v2 )
  {
    sub_1011A810(v2 + 4112);
    sub_100F9DC0(v2 + 4092);
    *(_DWORD *)(v2 + 4080) = 0;
    *(_DWORD *)(v2 + 4084) = v2;
    sub_10034930(v2);
    this[307] = 0;
  }
  return sub_10038520(this);
}
