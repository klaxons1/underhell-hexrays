void __thiscall sub_10092960(void *this, int a2)
{
  if ( a2
    && (!(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a2 + 284))(a2)
     || 0.0 == *(float *)(sub_100D7680(a2) + 2732)
     || *(float *)(dword_106B31C8 + 12) - *(float *)(sub_100D7680(a2) + 2732) > 5.0) )
  {
    (*(void (__thiscall **)(void *, const char *, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)this + 2344))(
      this,
      "TLK_ENEMY_DEAD",
      0,
      0,
      0,
      0);
  }
}
