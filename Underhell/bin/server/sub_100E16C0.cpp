bool __thiscall sub_100E16C0(_WORD *this, int a2)
{
  _DWORD v4[4]; // [esp+4h] [ebp-10h] BYREF

  v4[0] = 0;
  v4[1] = 0;
  v4[2] = -2;
  v4[3] = -1;
  v4[0] = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_10700A38 + 140))(dword_10700A38, a2);
  return sub_100DDB70(this + 2, (int)v4) != -1;
}
