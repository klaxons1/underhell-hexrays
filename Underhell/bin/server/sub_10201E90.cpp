int __thiscall sub_10201E90(_DWORD *this)
{
  _DWORD *v1; // edi
  int v2; // esi
  const char *v3; // edi
  int result; // eax
  int v5; // ebx
  int v6; // eax
  int v7; // esi
  const char *v8; // edi
  _BYTE v9[4]; // [esp+8h] [ebp-10h] BYREF
  int v10; // [esp+Ch] [ebp-Ch] BYREF
  _DWORD *v11; // [esp+10h] [ebp-8h]
  int v12; // [esp+14h] [ebp-4h]

  v1 = this;
  v2 = this[224];
  v11 = this;
  if ( v2 )
  {
    result = sub_1024B240();
    if ( v2 > 0 )
    {
      v5 = 0;
      v12 = v2;
      while ( 1 )
      {
        v6 = v1[221];
        v7 = *(_DWORD *)(v5 + v6);
        if ( (v1[62] & 2) != 0 || !(unsigned __int8)sub_1024B360(*(_DWORD *)(v5 + v6)) )
        {
          v8 = *(const char **)sub_1024B380(v9, v7);
          if ( !v8 )
            v8 = String;
        }
        else
        {
          v8 = (const char *)sub_1024B480(v7);
        }
        v10 = sub_1024B3D0(v7);
        result = sub_10181250((int)v8, &v10);
        v5 += 68;
        if ( !--v12 )
          break;
        v1 = v11;
      }
    }
  }
  else
  {
    v3 = (const char *)this[65];
    if ( !v3 )
      v3 = String;
    return Msg("Precache called on a point_template that has no templates: %s\n", v3);
  }
  return result;
}
