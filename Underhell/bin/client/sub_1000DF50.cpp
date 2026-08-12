int __thiscall sub_1000DF50(void *this, int a2)
{
  int result; // eax
  char Destination[2048]; // [esp+8h] [ebp-1000h] BYREF
  char v5[2048]; // [esp+808h] [ebp-800h] BYREF

  for ( result = sub_100DBEA0(Destination, v5); (_BYTE)result; result = sub_100DBB60(Destination, v5) )
    (*(void (__thiscall **)(void *, char *, char *))(*(_DWORD *)this + 152))(this, Destination, v5);
  return result;
}
