int __thiscall sub_101AD5F0(_DWORD *this)
{
  _DWORD *v2; // esi
  _DWORD *v3; // edi
  int v4; // eax
  int v5; // eax
  unsigned int v6; // eax
  int result; // eax
  const char *v8; // [esp-4h] [ebp-10h]

  v2 = (_DWORD *)sub_10033760();
  v3 = (_DWORD *)sub_100422D0();
  if ( v3 && v2 && sub_1000B680(v2) )
  {
    v4 = (*(int (__thiscall **)(_DWORD *))(*v2 + 1200))(v2);
    v5 = sub_1000A5F0(v3, v4);
    sub_101ACEE0(this, v5);
  }
  v6 = this[107];
  if ( v6 == -1 || *((_DWORD *)off_103DCD74 + 4 * (this[107] & 0xFFF) + 2) != v6 >> 12 )
    result = 0;
  else
    result = *((_DWORD *)off_103DCD74 + 4 * (this[107] & 0xFFF) + 1);
  if ( (_DWORD *)result != v2 )
  {
    if ( sub_1000B680(v2) )
      v8 = "WeaponUsesSecondaryAmmo";
    else
      v8 = "WeaponDoesNotUseSecondaryAmmo";
    (*(void (**)(void))(*(_DWORD *)dword_1044CC48 + 36))();
    sub_10248C80(v8);
    if ( v2 )
      this[107] = *(_DWORD *)(*(int (__thiscall **)(_DWORD *))(*v2 + 8))(v2);
    else
      this[107] = -1;
    result = sub_1014FF90(0);
    this[108] = result;
  }
  return result;
}
