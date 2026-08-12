unsigned __int8 __thiscall sub_10230560(_DWORD *this, _DWORD *a2)
{
  unsigned __int8 result; // al
  const char *v4; // ebx
  const char *v5; // eax
  const char *v6; // [esp-8h] [ebp-10h]

  result = sub_100697A0(a2, 2, 1);
  if ( result )
  {
    v4 = (const char *)this[23];
    if ( !v4 )
      v4 = String;
    v6 = sub_100D6390(a2);
    v5 = sub_100D6390(this);
    DevMsg(2, "%s (%s): StopSchedule called on NPC %s.\n", v4, v5, v6);
    return (unsigned __int8)sub_10044510((int)a2, (int)"Stopping scripted schedule");
  }
  return result;
}
