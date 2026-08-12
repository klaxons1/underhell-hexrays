const char *__thiscall sub_1023F360(void *this)
{
  int v1; // eax
  int v2; // eax

  v1 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 432))(this);
  v2 = sub_1023F0C0((int)&off_103FCF24, v1);
  if ( v2 )
    return sub_10231190((unsigned __int16 *)(v2 + 6));
  else
    return 0;
}
