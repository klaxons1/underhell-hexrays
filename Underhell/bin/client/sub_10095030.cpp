int __thiscall sub_10095030(float *this)
{
  const char *v2; // edi
  int v3; // eax
  const char *v4; // eax
  double v5; // st7
  int v6; // eax
  float v8; // [esp+0h] [ebp-Ch]

  v2 = "detail/detailsprites";
  v3 = sub_10073890();
  if ( v3 )
  {
    v4 = (const char *)(v3 + 1241);
    if ( v4 )
    {
      if ( *v4 )
        v2 = v4;
    }
  }
  sub_102334D0(v2, "Other textures", 1);
  if ( sub_1009C500() )
  {
    if ( *(float *)(sub_1009C500() + 1192) <= (double)this[37] )
      v5 = *(float *)(sub_1009C500() + 1192);
    else
      v5 = this[37];
    v8 = v5;
    sub_10229120(v8);
    if ( *(float *)(sub_1009C500() + 1196) <= (double)this[38] )
    {
      v6 = sub_1009C500();
      return sub_10229120(*(float *)(v6 + 1196));
    }
  }
  else
  {
    sub_10229120(this[37]);
  }
  return sub_10229120(this[38]);
}
