char *__thiscall sub_100B3B10(char *Destination, char *Source)
{
  if ( Destination != Source )
  {
    sub_102282F0(Destination, Source, 0x40u);
    sub_102282F0(Destination + 64, Source + 64, 0x40u);
    *((_DWORD *)Destination + 35) = *((_DWORD *)Source + 35);
    *((_DWORD *)Destination + 36) = *((_DWORD *)Source + 36);
    *((_DWORD *)Destination + 37) = *((_DWORD *)Source + 37);
    *((_DWORD *)Destination + 38) = *((_DWORD *)Source + 38);
    *((_DWORD *)Destination + 34) = *((_DWORD *)Source + 34);
    *((_DWORD *)Destination + 39) = *((_DWORD *)Source + 39);
    *((_DWORD *)Destination + 40) = *((_DWORD *)Source + 40);
    *((_DWORD *)Destination + 41) = *((_DWORD *)Source + 41);
    *((_DWORD *)Destination + 42) = *((_DWORD *)Source + 42);
    Destination[128] = Source[128];
    Destination[130] = Source[130];
    *((_DWORD *)Destination + 33) = *((_DWORD *)Source + 33);
  }
  return Destination;
}
