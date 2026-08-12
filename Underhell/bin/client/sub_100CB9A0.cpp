char __stdcall sub_100CB9A0(char *Source, size_t Count, _DWORD *a3)
{
  char *v3; // esi
  char *v5; // eax
  char *v6; // edi
  char v7[2048]; // [esp+8h] [ebp-1020h] BYREF
  char Str[2048]; // [esp+808h] [ebp-820h] BYREF
  char Destination[32]; // [esp+1008h] [ebp-20h] BYREF

  *a3 = 0;
  sub_102282F0(Str, Source, 0x800u);
  v3 = strstr(Str, "[");
  if ( !v3 )
    return 0;
  v5 = strstr(Str, "]");
  v6 = v5;
  if ( !v5 )
    return 0;
  sub_102282F0(Destination, v3 + 1, v5 - v3);
  *a3 = sub_10227CC0(Destination);
  sub_102282F0(v7, Str, v3 - Str + 1);
  sub_10228100((int)v7, v6 + 1, 2048, -1);
  sub_102282F0(Source, v7, Count);
  return 1;
}
