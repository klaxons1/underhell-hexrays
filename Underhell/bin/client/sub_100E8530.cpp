__int16 __thiscall sub_100E8530(int this, char *Source, int a3)
{
  char *v4; // eax
  int v5; // esi
  void *v6; // esp
  char v8[12]; // [esp+0h] [ebp-Ch] BYREF

  v4 = &Source[strlen(Source) + 1];
  v5 = v4 - Source;
  v6 = alloca(v4 - Source);
  sub_102282F0(v8, Source, v4 - Source);
  sub_10227B70(v8, v5);
  return sub_100E84A0((void *)(this + 4), v8, &a3);
}
