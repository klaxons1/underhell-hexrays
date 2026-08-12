int __thiscall sub_10388C20(_DWORD *this)
{
  bool v2; // al
  int v3; // ecx

  v2 = sub_10023D10(this, 4);
  v3 = (int)(this + 1290);
  if ( v2 )
    return sub_100AC410(v3, "METROPOLICE_COVER_NO_AMMO", 0, 2);
  else
    return sub_100AC410(v3, "METROPOLICE_COVER_LOW_AMMO", 0, 2);
}
