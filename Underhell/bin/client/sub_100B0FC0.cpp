int __thiscall sub_100B0FC0(_DWORD *this)
{
  int result; // eax
  _DWORD *v2; // edx

  result = 0;
  if ( (int)this[66] <= 0 )
  {
LABEL_5:
    this[69] = 0;
    (*(void (__thiscall **)(int))(*(_DWORD *)dword_1044CC48 + 36))(dword_1044CC48);
    return sub_10248C80("HintMessageRaise");
  }
  else
  {
    v2 = (_DWORD *)this[63];
    while ( !*v2 )
    {
      ++result;
      v2 += 6;
      if ( result >= this[66] )
        goto LABEL_5;
    }
  }
  return result;
}
