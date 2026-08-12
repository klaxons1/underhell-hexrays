void __thiscall sub_10286E90(int this)
{
  int v2; // edx
  _BYTE v3[4]; // [esp+4h] [ebp-4h] BYREF

  if ( *(_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)this + 28))(this, v3) )
  {
    sub_10242E10((_BYTE *)this);
  }
  else
  {
    *(_DWORD *)(this + 460) = *(_DWORD *)(this + 920);
    sub_100D8500((_DWORD *)this);
    sub_10242E10((_BYTE *)this);
    sub_10112C00(this + 320, 0);
    sub_100E0970(this, v2, 8, 0);
    sub_100D5D10((int)&flt_106F1CA8, (int)&flt_106F1CA8);
    sub_10242BA0(this);
  }
}
