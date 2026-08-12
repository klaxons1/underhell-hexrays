void __thiscall sub_1004B160(_DWORD *this)
{
  int v2; // ecx
  int i; // edi
  int v4; // ecx
  const char *v5; // eax
  const char *v6; // eax
  const char *v7; // [esp-Ch] [ebp-14h]
  _BYTE v8[4]; // [esp+4h] [ebp-4h] BYREF

  if ( this[699] )
  {
    if ( (unsigned __int8)sub_100B1BD0(this) )
    {
      v2 = this[106];
      if ( !v2 || ((*(int (__thiscall **)(int))(*(_DWORD *)v2 + 76))(v2) & 4) == 0 )
      {
        for ( i = sub_100B1560(v8, 1); i; i = sub_100B1630(v8, 1) )
        {
          if ( (*(int (__thiscall **)(_DWORD *, int))(*this + 1080))(this, i) < 3 )
          {
            v4 = *(_DWORD *)(i + 424);
            if ( !v4 || ((*(int (__thiscall **)(int))(*(_DWORD *)v4 + 76))(v4) & 4) == 0 )
            {
              v5 = *(const char **)(this[699] + 4);
              if ( !v5 )
                v5 = String;
              Warning("ERROR: Squad '%s' has enemies in it!\n", v5);
              v7 = (const char *)sub_100D6390(i);
              v6 = (const char *)sub_100D6390(this);
              Warning("%s doesn't like %s\n\n", v6, v7);
            }
          }
        }
      }
    }
  }
}
