void __thiscall sub_103C2380(int this)
{
  void (__thiscall *v2)(int, int); // edx
  double v3; // st7
  __int64 v4; // [esp+Ch] [ebp-14h]
  float v5; // [esp+10h] [ebp-10h]
  int v6; // [esp+1Ch] [ebp-4h] BYREF

  if ( !(*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)this + 2260))(this, 4) )
  {
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    *(float *)(this + 3784) = *(float *)(this + 704);
    *(float *)(this + 3788) = *(float *)(this + 708);
    *(float *)(this + 3792) = *(float *)(this + 712);
    v5 = *(float *)(dword_106B31C8 + 12) + 0.050000001;
    sub_100EC4A0((int *)this, v5, 0);
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)this + 2268))(this, 0);
    if ( *(_DWORD *)(this + 2372) != dword_106EBC78 )
    {
      v2 = *(void (__thiscall **)(int, int))(*(_DWORD *)this + 1416);
      *(_BYTE *)(this + 3733) = 1;
      v2(this, dword_106EBC78);
      sub_1023C380((_DWORD *)this, (int)"NPC_FloorTurret.Deploy", 0.0, 0);
      HIDWORD(v4) = this;
      LODWORD(v4) = 0;
      sub_1010DD80((_DWORD *)(this + 3844), v4, 0.0);
    }
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)this + 732))(this) )
    {
      (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 1416))(this, dword_106EBC70);
      v3 = *(float *)(dword_106B31C8 + 12) + 1.0;
      v6 = 0;
      *(float *)(this + 3744) = v3;
      sub_1002AB40((float *)(this + 864), &v6);
      sub_100EC3F0((_DWORD *)this, (int)sub_103BFBE0, 0.0, 0);
      sub_1023C380((_DWORD *)this, (int)"NPC_FloorTurret.Move", 0.0, 0);
    }
    *(float *)(this + 3748) = *(float *)(dword_106B31C8 + 12) + 5.0;
  }
}
