void __cdecl sub_10228630(int a1, int a2, char *Destination, unsigned int a4)
{
  unsigned int v5; // eax
  size_t v6; // ecx
  char Source[12]; // [esp+4h] [ebp-Ch] BYREF
  char *Destinationa; // [esp+20h] [ebp+10h]

  *Destination = 0;
  for ( Destinationa = 0; (int)Destinationa < a2; ++Destinationa )
  {
    sub_10228370(Source, 0xAu, "%02x", (unsigned __int8)Destinationa[a1]);
    AssertValidStringPtr(Destination, 0xFFFFFF);
    AssertValidStringPtr(Source, 0xFFFFFF);
    v5 = strlen(Destination);
    v6 = strlen(Source);
    if ( v6 + v5 >= a4 )
      v6 = a4 - v5 - 1;
    if ( v6 )
      strncat(Destination, Source, v6)[a4 - 1] = 0;
  }
}
