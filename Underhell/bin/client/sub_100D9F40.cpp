int __cdecl sub_100D9F40(char *Source)
{
  unsigned __int8 v1; // di
  unsigned __int8 v2; // si
  char *v3; // esi
  char v4; // bl
  unsigned __int8 v5; // al
  char Destination[6]; // [esp+8h] [ebp-80h] BYREF
  char String1[122]; // [esp+Eh] [ebp-7Ah] BYREF

  sub_102282F0(Destination, Source, 0x80u);
  v1 = 0;
  v2 = 0;
  if ( !sub_10227C80(Destination, "curve_", 6) )
  {
    v3 = (char *)sub_10227FA0(String1, "_to_curve_");
    v4 = *v3;
    *v3 = 0;
    v5 = (unsigned __int8)sub_100D9F00(String1);
    *v3 = v4;
    v1 = v5;
    v2 = (unsigned __int8)sub_100D9F00(v3 + 10);
  }
  return v2 | (v1 << 8);
}
