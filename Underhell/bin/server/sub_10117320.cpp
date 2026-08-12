int __thiscall sub_10117320(void *this, int *a2, int a3)
{
  int result; // eax
  int i; // ebx
  char *v5; // esi
  signed int v6; // kr00_4
  signed int j; // ecx
  int v8; // esi
  int v9; // eax
  int v10; // edi
  int v11; // eax
  char Destination[1024]; // [esp+4h] [ebp-404h] BYREF
  void *v13; // [esp+404h] [ebp-4h]

  v13 = this;
  result = sub_1042A2F0(a3);
  for ( i = result; result; i = result )
  {
    if ( !strcmp((const char *)sub_1042A070(i), "connections") )
    {
      sub_10117320(a2, i);
    }
    else
    {
      v5 = (char *)sub_1042B460(0, (int)String);
      if ( sub_10429720(v5, 94, 1024) )
      {
        sub_104299C0(Destination, v5, 0x400u);
        v6 = strlen(Destination);
        for ( j = 0; j < v6; ++j )
        {
          if ( Destination[j] == 94 )
            Destination[j] = 34;
        }
        v8 = *a2;
        v9 = sub_1042A070(i);
        (*(void (__thiscall **)(int *, int, char *))(v8 + 128))(a2, v9, Destination);
      }
      else
      {
        v10 = *a2;
        v11 = sub_1042A070(i);
        (*(void (__thiscall **)(int *, int, char *))(v10 + 128))(a2, v11, v5);
      }
    }
    result = sub_1042A300(i);
  }
  return result;
}
