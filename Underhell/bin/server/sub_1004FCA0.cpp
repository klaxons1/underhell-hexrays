char *__thiscall sub_1004FCA0(char **this)
{
  char *result; // eax
  int v3; // eax

  result = this[1];
  if ( *((_DWORD *)result + 581) != 4 )
  {
    result = (char *)sub_1004B510(this, 100001, 0);
    if ( !(_BYTE)result )
    {
      result = (char *)sub_1004B510(this, 100000, 0);
      if ( !(_BYTE)result )
      {
        (*((void (__thiscall **)(char **))*this + 13))(this);
        v3 = sub_1007DB30(100002);
        return sub_10024230(this[1], v3);
      }
    }
  }
  return result;
}
