void __thiscall sub_1007C8F0(int this)
{
  int v2; // ecx

  if ( *(_BYTE *)(this + 8) )
  {
    if ( !(unsigned __int8)sub_100B8D10(*(_DWORD *)(this + 4) + 2760) )
      sub_100B8C80(0);
    v2 = *(_DWORD *)(this + 4);
    *(_BYTE *)(this + 8) = 0;
    (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 1992))(v2);
  }
}
