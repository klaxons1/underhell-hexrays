int __thiscall sub_101ADBD0(_DWORD *this)
{
  __int16 *v2; // ebx
  _DWORD *v3; // eax
  int v4; // esi
  int v5; // eax
  unsigned int v6; // eax
  __int16 *v7; // eax
  int *v8; // eax
  int v9; // eax
  int result; // eax
  const char *v11; // [esp-8h] [ebp-10h]
  const char *v12; // [esp-4h] [ebp-Ch]

  v2 = (__int16 *)sub_10033760();
  v3 = (_DWORD *)sub_100422D0();
  if ( v3 )
  {
    v4 = sub_1000A630(v3, "grenade");
    v5 = this[116];
    if ( v4 != v5 )
    {
      if ( v4 )
      {
        if ( v4 >= v5 )
          v11 = "GrenadeIncreased";
        else
          v11 = "GrenadeDecreased";
      }
      else
      {
        v11 = "GrenadeEmpty";
      }
      (*(void (__thiscall **)(int))(*(_DWORD *)dword_1044CC48 + 36))(dword_1044CC48);
      sub_10248C80(v11);
      this[116] = v4;
    }
    sub_100D0E20(this, v4);
  }
  v6 = this[114];
  if ( v6 == -1 || *((_DWORD *)off_103DCD74 + 4 * (this[114] & 0xFFF) + 2) != v6 >> 12 )
    v7 = 0;
  else
    v7 = (__int16 *)*((_DWORD *)off_103DCD74 + 4 * (this[114] & 0xFFF) + 1);
  if ( v7 == v2 )
  {
    if ( v2 )
      goto LABEL_22;
  }
  else if ( v2 && !sub_1000AB70(v2) )
  {
    if ( sub_1000B680(v2) )
      goto LABEL_22;
    v12 = "GWeaponUsesClip";
    goto LABEL_21;
  }
  v12 = "GWeaponIsMelee";
LABEL_21:
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_1044CC48 + 36))(dword_1044CC48);
  sub_10248C80(v12);
LABEL_22:
  v8 = sub_101AB1E0();
  v9 = sub_10007E50(v8, "grenade");
  result = sub_1014FF90(v9);
  this[115] = result;
  if ( v2 )
  {
    result = *(_DWORD *)(*(int (__thiscall **)(__int16 *))(*(_DWORD *)v2 + 8))(v2);
    this[114] = result;
  }
  else
  {
    this[114] = -1;
  }
  return result;
}
