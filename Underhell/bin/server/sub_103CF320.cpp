int __thiscall sub_103CF320(char *this)
{
  BOOL v2; // eax

  (*(void (__thiscall **)(char *, const char *))(*(_DWORD *)this + 104))(this, "models/zombie/zombie_soldier.mdl");
  v2 = this[3777] == 0;
  *((_DWORD *)this + 419) = 0;
  sub_100C1600((int)this, 1, v2);
  sub_10027A90((int)this, 1);
  sub_10020F00(this);
  return (*(int (__thiscall **)(char *, int))(*(_DWORD *)this + 1416))(this, 1);
}
