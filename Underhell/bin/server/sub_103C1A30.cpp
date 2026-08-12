void __thiscall sub_103C1A30(int this)
{
  int v2; // eax
  int v3; // eax
  double v4; // st7
  int v5; // edx
  float v6; // [esp+8h] [ebp-10h]

  if ( !(*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)this + 2260))(this, 0) )
  {
    v6 = *(float *)(dword_106B31C8 + 12) + 0.050000001;
    sub_100EC4A0((int *)this, v6, 0);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 1416))(this, dword_106EBC70);
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this) )
    {
      v2 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this);
      if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v2 + 264))(v2) )
        sub_100285C0((_DWORD *)this, 0, 1);
    }
    if ( !(*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this) )
      (*(void (__thiscall **)(int))(*(_DWORD *)this + 2256))(this);
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this) )
    {
      v3 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this);
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v3 + 320))(v3) )
        v4 = *(float *)(dword_106B31C8 + 12) + 0.5;
      else
        v4 = *(float *)(dword_106B31C8 + 12) + 0.1;
      *(float *)(this + 3744) = v4;
      *(float *)(this + 3748) = 0.0;
      sub_100EC3F0((_DWORD *)this, (int)sub_103BFBB0, 0.0, 0);
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)this + 2268))(this, 0);
      if ( *(float *)(this + 3760) < (double)*(float *)(dword_106B31C8 + 12) )
      {
        sub_1023C380((_DWORD *)this, (int)"NPC_FloorTurret.Activate", 0.0, 0);
        *(float *)(this + 3760) = *(float *)(dword_106B31C8 + 12) + 3.0;
      }
    }
    else if ( *(float *)(this + 3748) >= (double)*(float *)(dword_106B31C8 + 12) )
    {
      if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
        sub_100DAE60(this);
      v5 = *(_DWORD *)(this + 252) >> 11;
      *(float *)(this + 3784) = sin(*(float *)(dword_106B31C8 + 12)) * 15.0 + *(float *)(this + 704);
      if ( (v5 & 1) != 0 )
        sub_100DAE60(this);
      *(float *)(this + 3788) = sin(*(float *)(dword_106B31C8 + 12) + *(float *)(dword_106B31C8 + 12)) * 60.0
                              + *(float *)(this + 708);
      sub_103C1260((int *)this);
      if ( *(float *)(dword_106B31C8 + 12) >= (double)*(float *)(this + 3756) )
      {
        sub_1023C380((_DWORD *)this, (int)"NPC_FloorTurret.Ping", 0.0, 0);
        (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 2268))(this, 1);
        *(float *)(this + 3756) = *(float *)(dword_106B31C8 + 12) + 1.0;
      }
    }
    else
    {
      *(float *)(this + 3748) = 0.0;
      sub_100EC3F0((_DWORD *)this, (int)sub_103BFBF0, 0.0, 0);
    }
  }
}
