__int16 __thiscall sub_102F4200(unsigned __int16 *this)
{
  __int16 result; // ax
  int v3; // [esp+4h] [ebp-8h] BYREF
  int v4; // [esp+8h] [ebp-4h] BYREF

  result = sub_10395F40();
  if ( *((_DWORD *)this + 1458) != 3 )
  {
    result = (*(int (__thiscall **)(unsigned __int16 *))(*(_DWORD *)this + 2168))(this);
    if ( (_BYTE)result )
    {
      sub_100B8C40(this + 1380, &v3, &v4);
      return sub_100B8BE0(this + 1380, 2 * v3, 2 * v4);
    }
  }
  return result;
}
