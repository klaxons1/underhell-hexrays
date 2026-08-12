int __thiscall sub_101B1B00(_DWORD *this)
{
  int v2; // esi
  int result; // eax
  int v4; // edi
  const char *v5; // [esp-4h] [ebp-10h]

  v2 = 0;
  result = sub_100422D0();
  v4 = result;
  if ( result )
  {
    result = (*(int (__thiscall **)(int))(*(_DWORD *)result + 416))(result);
    if ( result <= 0 )
    {
      v2 = 0;
    }
    else
    {
      result = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 416))(v4);
      v2 = result;
    }
  }
  if ( v2 != this[96] )
  {
    this[96] = v2;
    if ( v2 < 20 )
    {
      if ( v2 <= 0 )
        return sub_100D0E20(this, this[96]);
      (*(void (__thiscall **)(int))(*(_DWORD *)dword_1044CC48 + 36))(dword_1044CC48);
      sub_10248C80("HealthIncreasedBelow20");
      v5 = "HealthLow";
    }
    else
    {
      v5 = "HealthIncreasedAbove20";
    }
    (*(void (__thiscall **)(int))(*(_DWORD *)dword_1044CC48 + 36))(dword_1044CC48);
    sub_10248C80(v5);
    return sub_100D0E20(this, this[96]);
  }
  return result;
}
