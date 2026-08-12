void __userpurge sub_1004BE60(_DWORD *a1@<ecx>, double a2@<st0>, int a3, int a4, int a5, char *Buffer)
{
  _BYTE v7[256]; // [esp+4h] [ebp-200h] BYREF
  _BYTE v8[256]; // [esp+104h] [ebp-100h] BYREF

  if ( a5 == 6002 )
  {
    if ( sscanf(Buffer, "%255s %255s", v7, v8) == 2 )
      sub_1004BD00((int)a1, a2, (int)v7, (int)v8);
  }
  else if ( a5 == 6003 )
  {
    if ( sscanf(Buffer, "%255s", v8) == 1 )
      sub_1004BB00(a1, (int)v8);
  }
  else
  {
    sub_1002E730(a1, a3, a4, a5, Buffer);
  }
}
