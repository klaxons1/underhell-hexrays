int __thiscall sub_1040ED00(int this)
{
  int v2; // edx

  (*(void (__thiscall **)(int))(*(_DWORD *)this + 100))(this);
  sub_10112C00(this + 320, 2);
  sub_100E0970(this, v2, 5, 1);
  (*(void (__thiscall **)(int, const char *))(*(_DWORD *)this + 104))(this, "Models/weapons/flare.mdl");
  sub_100EAB80((_DWORD *)this, 32);
  *(_DWORD *)(this + 196) = sub_1040E520;
  sub_100EC4A0((int *)this, *(float *)(dword_106B31C8 + 12), 0);
  if ( *(_BYTE *)(this + 225) )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 480))(this, this + 225);
    *(_BYTE *)(this + 225) = 0;
  }
  if ( *(_DWORD *)(this + 220) != 1 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 464))(this, this + 220);
    *(_DWORD *)(this + 220) = 1;
  }
  *(float *)(this + 552) = 0.000099999997;
  *(_DWORD *)(this + 2180) = 0;
  return sub_1025F360((_DWORD *)this, (int)&flt_106F1CA8, (int)&flt_106F1CA8);
}
