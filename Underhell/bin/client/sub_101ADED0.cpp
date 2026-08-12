int __thiscall sub_101ADED0(_DWORD *this)
{
  int result; // eax
  int v3; // ecx
  const char *v4; // [esp-4h] [ebp-8h]
  int v5; // [esp-4h] [ebp-8h]

  result = this[107];
  v3 = this[108];
  if ( v3 != result )
  {
    if ( v3 >= result )
    {
      if ( result == -1 || !result || v3 >= 20 )
        v4 = "SuitPowerIncreasedAbove20";
      else
        v4 = "SuitPowerIncreasedBelow20";
    }
    else
    {
      (*(void (__thiscall **)(int))(*(_DWORD *)dword_1044CC48 + 36))(dword_1044CC48);
      sub_10248C80("SuitDamageTaken");
      if ( (int)this[108] >= 20 )
      {
LABEL_11:
        v5 = this[108];
        this[107] = v5;
        return sub_100D0E20(this, v5);
      }
      v4 = "SuitArmorLow";
    }
    (*(void (__thiscall **)(int))(*(_DWORD *)dword_1044CC48 + 36))(dword_1044CC48);
    sub_10248C80(v4);
    goto LABEL_11;
  }
  return result;
}
