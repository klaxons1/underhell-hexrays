void __thiscall sub_1026A1B0(_DWORD **this, const char *a2)
{
  if ( a2 && *a2 )
  {
    if ( *(_DWORD *)(dword_106CEF04 + 48) )
      Msg("Playing non-looping vehicle sound: %s\n", a2);
    sub_1023C380(this[11], (int)a2, 0.0, 0);
  }
}
