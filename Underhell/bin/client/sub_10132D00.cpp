char __thiscall sub_10132D00(_BYTE *this, _DWORD *a2, _BYTE *a3, _DWORD *a4, _BYTE *a5)
{
  bool v5; // zf
  int v6; // eax
  int v7; // eax
  char result; // al

  v6 = *a2 - 9997;
  v5 = *a2 == 9997;
  *a4 = 0;
  if ( v5 )
  {
    *a3 = this[57700];
    a3[1] = this[57701];
    a3[2] = this[57702];
    result = this[57703];
    *a5 = result;
  }
  else
  {
    v7 = v6 - 1;
    if ( v7 )
    {
      if ( v7 == 1 )
      {
        *a3 = this[57692];
        a3[1] = this[57693];
        a3[2] = this[57694];
        result = this[57695];
        *a5 = result;
      }
      else
      {
        *a4 = 1;
        if ( a2[1] )
        {
          *a3 = this[57704];
          a3[1] = this[57705];
          a3[2] = this[57706];
          result = this[57707];
        }
        else
        {
          *a3 = this[57708];
          a3[1] = this[57709];
          a3[2] = this[57710];
          result = this[57711];
        }
        *a5 = result;
      }
    }
    else
    {
      *a3 = this[57696];
      a3[1] = this[57697];
      a3[2] = this[57698];
      result = this[57699];
      *a5 = result;
    }
  }
  return result;
}
