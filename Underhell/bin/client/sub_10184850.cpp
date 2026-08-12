int __fastcall sub_10184850(_DWORD *a1)
{
  int result; // eax
  int v2; // edi
  int v3; // esi
  char *v4; // eax
  int v5; // edi
  int v6; // eax
  char *v7; // eax
  char Destination[256]; // [esp+4h] [ebp-11Ch] BYREF
  char v9[4]; // [esp+104h] [ebp-1Ch] BYREF
  int v10; // [esp+108h] [ebp-18h]
  int v11; // [esp+110h] [ebp-10h]
  int v12; // [esp+114h] [ebp-Ch]
  int v13; // [esp+118h] [ebp-8h]
  _DWORD *v14; // [esp+11Ch] [ebp-4h]

  result = a1[175];
  v2 = 0;
  v14 = a1;
  v12 = result;
  v13 = 0;
  if ( result > 0 )
  {
    while ( 1 )
    {
      v11 = *(_DWORD *)(a1[172] + 8 * v2 + 4);
      result = sub_1026B810(v11);
      v3 = result;
      if ( result )
      {
        v4 = (char *)sub_1022B4C0("custom", (int)Locale);
        sub_102282F0(Destination, v4, 0xFFu);
        if ( Destination[0] )
        {
          v5 = *v14;
          v6 = sub_1026B780(v11);
          result = (*(int (__thiscall **)(_DWORD *, int, int))(v5 + 984))(v14, v3, v6);
          v2 = v13;
        }
        else
        {
          v7 = (char *)sub_1022B4C0("toggle", (int)Locale);
          result = sub_102282F0(Destination, v7, 0xFFu);
          if ( Destination[0] )
          {
            sub_10229600(Destination);
            result = sub_102291A0(v9);
            if ( (_BYTE)result )
              result = sub_1026BB40(v11, *(_DWORD *)(v10 + 48) != 0);
          }
        }
      }
      v13 = ++v2;
      if ( v2 >= v12 )
        break;
      a1 = v14;
    }
  }
  return result;
}
