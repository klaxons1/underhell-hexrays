void __thiscall sub_1027E380(int *this)
{
  char *v2; // edi
  int v3; // [esp+8h] [ebp-4h]

  v2 = (char *)sub_100D1940(this);
  if ( v2 && sub_100CF5D0(v2, this[298]) > 0 )
  {
    v3 = this[300];
    if ( v3 < (*(int (__thiscall **)(int *))(*this + 1216))(this) )
    {
      sub_10276CE0(this + 300, 0);
      sub_100CF490(v2, 1, this[298]);
    }
  }
}
