int __thiscall sub_100B6F30(int this, char *Source)
{
  char *v2; // ebx
  int v4; // eax
  int result; // eax
  char *v6; // eax
  char *v7; // esi
  char Buffer[512]; // [esp+8h] [ebp-208h] BYREF
  char *v9; // [esp+208h] [ebp-8h] BYREF

  v2 = Source;
  if ( Source[128] )
    sub_10228370(Buffer, 0x200u, "%s_c%i", (_BYTE)Source + 64);
  else
    sub_10228370(Buffer, 0x200u, "%s_%i_%i_%i_%i", (_BYTE)Source + 64);
  v9 = Buffer;
  v4 = sub_100B4B40((unsigned __int8 (__cdecl **)(int, int))(this + 52), (int)&v9);
  if ( v4 == -1 || (result = *(_DWORD *)(*(_DWORD *)(this + 56) + 24 * v4 + 20)) == 0 )
  {
    v6 = (char *)sub_1022FF30(&unk_1042FADC);
    v7 = v6;
    if ( v6 )
      sub_100B3A90(v6);
    Source = v7;
    sub_100B3B10(v7, v2);
    sub_100B38B0((int)v7);
    return *(_DWORD *)(*(_DWORD *)(this + 56) + 24 * sub_100B6CF0(this + 52, Buffer, &Source) + 20);
  }
  return result;
}
