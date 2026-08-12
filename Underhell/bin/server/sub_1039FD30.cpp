void __thiscall sub_1039FD30(int this, int a2)
{
  int v3; // eax
  int v4; // eax

  if ( (*(_BYTE *)(a2 + 356) & 0x28) == 0 && *(float *)(this + 3784) <= (double)*(float *)(dword_106B31C8 + 12) )
  {
    if ( (!sub_100D7680(a2)
       || (v3 = sub_100D7680(a2), (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v3 + 264))(v3)))
      && (*(_DWORD *)(a2 + 256) & 0x8000) == 0
      && ((v4 = (*(int (__thiscall **)(int, int))(*(_DWORD *)this + 1080))(this, a2), v4 == 1) || v4 == 2) )
    {
      sub_103A1550(this, a2);
    }
    else
    {
      sub_1039FCC0((_DWORD *)this);
    }
  }
}
