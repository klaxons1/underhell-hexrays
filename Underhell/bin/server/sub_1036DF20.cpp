void __thiscall sub_1036DF20(int this)
{
  int v2; // eax
  int v3; // [esp+Ch] [ebp-4h] BYREF

  sub_10041D00((_DWORD *)this);
  if ( !*(_BYTE *)(this + 3656) && *(_BYTE *)(this + 113) )
  {
    if ( HIBYTE(*(_DWORD *)(this + 116)) + 120 <= 254 )
    {
      sub_100FB020(this, HIBYTE(*(_DWORD *)(this + 116)) + 120);
    }
    else
    {
      v3 = 0;
      sub_100DE570((_BYTE *)(this + 113), (char *)&v3);
      sub_100FB020(this, 0);
    }
  }
  if ( *(_DWORD *)(this + 2324) == 3
    && ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
         dword_106B31E4,
         0.0,
         5.0) < 0.1 )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)this + 1620))(this);
  }
  v2 = *(_DWORD *)(this + 2372);
  if ( *(_BYTE *)(this + 3655) && v2 != dword_106E8108 && v2 != dword_106E810C && v2 != dword_106E8110 )
  {
    DevMsg("Headcrab failed to unburrow properly!\n");
    sub_1036DD60(this, 0);
  }
}
