void __stdcall sub_101F20A0(_DWORD *a1, int a2)
{
  _BYTE *v2; // esi
  _BYTE v3[32]; // [esp+4h] [ebp-20h] BYREF

  if ( *a1 && (*(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)*a1 + 320))(*a1) )
  {
    v2 = (_BYTE *)*a1;
  }
  else
  {
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 196))(dword_106B3CDC) )
      return;
    v2 = (_BYTE *)sub_10261B20();
  }
  if ( v2 )
  {
    if ( v2[2137] )
      sub_101ECF40((int)v2);
    (*(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)v2 + 1232))(v2, a2);
    sub_101EED50((int)v2, (int)v3);
  }
}
