int __thiscall sub_101E3C30(int this, int *a2)
{
  int v3; // edi
  int v4; // eax
  int v5; // eax
  int v6; // eax

  if ( *a2 == *(_DWORD *)(this + 24) )
    return 8;
  v3 = sub_1016BF40()[99];
  if ( v3 == (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(
               dword_106B31D0,
               *(_DWORD *)(this + 24)) )
  {
    if ( ((v4 = *a2) != 0
       || (v4 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 76))(dword_106B31D0, 0)) != 0)
      && (v5 = *(_DWORD *)(v4 + 12)) != 0 )
    {
      v6 = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 20))(v5);
    }
    else
    {
      v6 = 0;
    }
    if ( *(_BYTE *)(v6 + 3280) )
    {
      (*(void (__thiscall **)(int))(*(_DWORD *)(this + 12) + 20))(this + 12);
      return 8;
    }
  }
  if ( (*(_DWORD *)(this + 192) & 0x20) != 0
    || (*(_DWORD *)(this + 3416) & 8) != 0
    && *(float *)(dword_106B31C8 + 12) - *(float *)(this + 3472) > 0.5
    && *(_BYTE *)(this + 224) == 2
    && *(float *)(dword_106B31C8 + 12) - *(float *)(this + 3476) > 0.5 )
  {
    return 16;
  }
  else
  {
    return sub_100DA910((_DWORD *)this, a2);
  }
}
