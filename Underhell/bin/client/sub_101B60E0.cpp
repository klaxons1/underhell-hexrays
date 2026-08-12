int __thiscall sub_101B60E0(_BYTE *this)
{
  int result; // eax

  sub_1014F630(this);
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_1044CC48 + 36))(dword_1044CC48);
  result = sub_10248C80("CloseWeaponSelectionMenu");
  this[420] = 0;
  return result;
}
