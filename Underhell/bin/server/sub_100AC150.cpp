void __thiscall sub_100AC150(_DWORD *this, const char *a2, const char *a3)
{
  int v3; // eax
  int v5; // eax
  int v6; // eax

  v3 = *(_DWORD *)(dword_10695114 + 48);
  if ( v3 )
  {
    v5 = v3 - 1;
    if ( v5 )
    {
      if ( v5 == 1 )
      {
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(
          dword_106B31D0,
          *(_DWORD *)(this[1] + 24));
        sub_10029660((_DWORD *)this[1], (int)"SENTENCE [%d %.2f] %s: %s\n");
      }
    }
    else
    {
      v6 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(
             dword_106B31D0,
             *(_DWORD *)(this[1] + 24));
      DevMsg("SENTENCE [%d %.2f] %s: %s\n", v6, *(float *)(dword_106B31C8 + 12), a2, a3);
    }
  }
}
