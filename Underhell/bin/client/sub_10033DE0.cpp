int __thiscall sub_10033DE0(_DWORD *this, int a2)
{
  int result; // eax
  int v4; // eax

  sub_10029380((int)this, a2);
  result = 1;
  if ( a2 == 1 )
  {
    if ( this[504] != 2 )
      return result;
    goto LABEL_9;
  }
  if ( !a2 && this[504] == 1 )
  {
    result = sub_1000BAC0(this - 2);
    if ( result )
    {
      v4 = sub_1000BAC0(this - 2);
      result = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 788))(v4);
      if ( (_DWORD *)result == this - 2 )
      {
        result = 2;
LABEL_9:
        if ( this[504] != result )
          this[504] = result;
      }
    }
  }
  return result;
}
