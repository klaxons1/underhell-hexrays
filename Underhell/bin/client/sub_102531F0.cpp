int __thiscall sub_102531F0(int this)
{
  char v2; // al
  int v3; // ecx

  v2 = *(_BYTE *)(this + 400);
  if ( (v2 & 1) != 0 )
  {
    v3 = *(_DWORD *)(this + 232);
    *(_DWORD *)(this + 316) = v3;
    *(_DWORD *)(this + 280) = v3;
    *(_DWORD *)(this + 312) = (v3 > 0) - 1;
    if ( (v2 & 2) == 0 )
    {
      *(_BYTE *)(this + 400) = v2 & 0xFE;
      return sub_10252370((void *)this);
    }
  }
  else if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA68 + 60))(dword_1047CA68, 67)
         || (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA68 + 68))(dword_1047CA68, 67) )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)this + 828))(this);
    (*(void (__thiscall **)(int))(*(_DWORD *)this + 852))(this);
  }
  return sub_10252370((void *)this);
}
