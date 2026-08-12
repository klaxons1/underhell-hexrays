int __thiscall sub_101B60A0(int this)
{
  int result; // eax

  sub_1014F620((_BYTE *)this);
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_1044CC48 + 36))(dword_1044CC48);
  result = sub_10248C80("OpenWeaponSelectionMenu");
  *(_DWORD *)(this + 452) = 0;
  *(_DWORD *)(this + 456) = -1;
  return result;
}
