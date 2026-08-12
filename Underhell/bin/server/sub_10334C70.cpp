void __thiscall sub_10334C70(_DWORD *this, int a2)
{
  const char **v3; // esi
  char *v4; // eax
  char *v5; // eax
  const char **v6; // esi
  char *v7; // eax
  char *v8; // eax
  char v9[256]; // [esp+4h] [ebp-200h] BYREF
  char Buffer[256]; // [esp+104h] [ebp-100h] BYREF

  if ( this[1442] != 4 )
  {
    v3 = (const char **)&off_1066E904;
    do
    {
      v4 = sub_1001E280(Buffer, (&off_1066E940)[this[1442]], String);
      v5 = sub_1001E280(v9, "models/Humans/%s/%s", v4, *v3);
      sub_100E8220((int)this, v5);
      ++v3;
    }
    while ( (int)v3 < (int)&off_1066E940 );
    if ( this[1442] == 3 )
    {
      v6 = (const char **)&off_1066E904;
      do
      {
        v7 = sub_1001E280(v9, (&off_1066E940)[this[1442]], "m");
        v8 = sub_1001E280(Buffer, "models/Humans/%s/%s", v7, *v6);
        sub_100E8220((int)this, v8);
        ++v6;
      }
      while ( (int)v6 < (int)&off_1066E940 );
    }
  }
}
