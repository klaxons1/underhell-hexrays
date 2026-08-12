int __thiscall sub_102D52D0(int this)
{
  int v2; // edx
  int result; // eax
  float v4[3]; // [esp+8h] [ebp-18h] BYREF
  float v5[3]; // [esp+14h] [ebp-Ch] BYREF

  (*(void (__thiscall **)(int))(*(_DWORD *)this + 100))(this);
  (*(void (__thiscall **)(int, const char *))(*(_DWORD *)this + 104))(this, "models/weapons/w_bugbait.mdl");
  sub_100EBE30(this, 13);
  sub_100E0970(this, v2, 5, 0);
  sub_10112C00(this + 320, 2);
  v5[0] = 2.0;
  v5[1] = 2.0;
  v5[2] = 2.0;
  v4[0] = -2.0;
  v4[1] = -2.0;
  v4[2] = -2.0;
  result = sub_1025F360((_DWORD *)this, (int)v4, (int)v5);
  *(_DWORD *)(this + 196) = sub_102D4DB0;
  if ( *(_BYTE *)(this + 225) )
  {
    result = (*(int (__thiscall **)(int, int))(*(_DWORD *)this + 480))(this, this + 225);
    *(_BYTE *)(this + 225) = 0;
  }
  *(_DWORD *)(this + 2148) = 0;
  return result;
}
