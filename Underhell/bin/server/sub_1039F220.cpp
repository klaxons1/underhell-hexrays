double __thiscall sub_1039F220(int this, int a2)
{
  int v4; // esi
  int v5; // eax

  if ( (*(_BYTE *)(this + 250) & 1) != 0
    && ((*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a2 + 320))(a2)
     || sub_100D7680(a2)
     && (v4 = sub_1025FB50(1)) != 0
     && (v5 = sub_100D7680(a2), (*(int (__thiscall **)(int, int))(*(_DWORD *)v5 + 1080))(v5, v4) != 1)) )
  {
    return 0.0;
  }
  else
  {
    return sub_100DC7F0((_DWORD *)this, a2);
  }
}
