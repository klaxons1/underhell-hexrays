char __thiscall sub_1021C2D0(int *this, char *String1, int String)
{
  int v4; // eax
  char *v5; // edi
  int v7; // eax
  int v8; // eax
  int v9; // eax
  char *v10; // [esp-4h] [ebp-210h]
  char Buffer[512]; // [esp+Ch] [ebp-200h] BYREF

  v4 = _stricmp(String1, "Breakable");
  v5 = (char *)String;
  if ( !v4 )
  {
    if ( atoi((const char *)String) == 1 )
    {
      String = 16;
      sub_1021B540(this + 201, &String);
      return sub_100EBE90((int)this, String1, v5);
    }
    return sub_100EBE90((int)this, String1, v5);
  }
  if ( !_stricmp(String1, "Collide") )
  {
    if ( atoi(v5) == 1 )
    {
      String = 4;
      sub_1021B540(this + 201, &String);
      return sub_100EBE90((int)this, String1, v5);
    }
    return sub_100EBE90((int)this, String1, v5);
  }
  if ( !_stricmp(String1, "Barbed") )
  {
    if ( atoi(v5) == 1 )
    {
      String = 2;
      sub_1021B540(this + 201, &String);
      return sub_100EBE90((int)this, String1, v5);
    }
    return sub_100EBE90((int)this, String1, v5);
  }
  if ( !_stricmp(String1, "Dangling") )
  {
    if ( atoi(v5) == 1 )
    {
      String = -3;
      sub_1021B1C0(this + 212, &String);
    }
    return 1;
  }
  else if ( !_stricmp(String1, "Type") )
  {
    v7 = atoi(v5);
    if ( v7 )
    {
      if ( v7 == 1 )
        String = 4;
      else
        String = 2;
      sub_1021B400(this + 206, &String);
      return sub_100EBE90((int)this, String1, v5);
    }
    else
    {
      String = 10;
      sub_1021B400(this + 206, &String);
      return sub_100EBE90((int)this, String1, v5);
    }
  }
  else
  {
    if ( _stricmp(String1, "RopeShader") )
    {
      if ( !_stricmp(String1, "RopeMaterial") )
      {
        v9 = sub_10429530(v5, ".vmt");
        v10 = v5;
        if ( !v9 )
        {
          sub_10429A00(Buffer, 0x200u, "%s.vmt", (char)v5);
          v10 = Buffer;
        }
        sub_1021C000((int)this, (int)v5, v10);
      }
      return sub_100EBE90((int)this, String1, v5);
    }
    v8 = atoi(v5);
    if ( v8 )
    {
      if ( v8 == 1 )
        String = sub_100E8220((int)v5, "cable/rope.vmt");
      else
        String = sub_100E8220((int)v5, "cable/chain.vmt");
      sub_1021B4A0(this + 209, &String);
      return sub_100EBE90((int)this, String1, v5);
    }
    else
    {
      String = sub_100E8220((int)v5, "cable/cable.vmt");
      sub_1021B4A0(this + 209, &String);
      return sub_100EBE90((int)this, String1, v5);
    }
  }
}
