void __thiscall sub_103C2200(int this)
{
  int v2; // eax
  void (__thiscall *v3)(int, int); // edx
  __int64 v4; // [esp+Ch] [ebp-10h]
  float v5; // [esp+10h] [ebp-Ch]
  float v6; // [esp+10h] [ebp-Ch]

  if ( !(*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)this + 2260))(this, 5) )
  {
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    *(float *)(this + 3784) = *(float *)(this + 704);
    *(float *)(this + 3788) = *(float *)(this + 708);
    *(float *)(this + 3792) = *(float *)(this + 712);
    v5 = *(float *)(dword_106B31C8 + 12) + 0.050000001;
    sub_100EC4A0((int *)this, v5, 0);
    v2 = *(_DWORD *)this;
    if ( *(_DWORD *)(this + 2372) == dword_106EBC74 )
    {
      if ( (*(unsigned __int8 (__thiscall **)(int))(v2 + 732))(this) )
      {
        v3 = *(void (__thiscall **)(int, int))(*(_DWORD *)this + 1416);
        *(float *)(this + 3748) = 0.0;
        *(_BYTE *)(this + 3733) = 0;
        v3(this, dword_106EBC6C);
        if ( *(_BYTE *)(this + 3732) )
        {
          sub_100EC3F0((_DWORD *)this, (int)sub_10382670, 0.0, 0);
          v6 = *(float *)(dword_106B31C8 + 12) + 0.050000001;
          sub_100EC4A0((int *)this, v6, 0);
        }
        else
        {
          (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 2268))(this, 4);
          sub_100EC3F0((_DWORD *)this, (int)sub_103BFC00, 0.0, 0);
        }
      }
    }
    else
    {
      (*(void (__thiscall **)(int, int))(v2 + 2268))(this, 2);
      (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 1416))(this, dword_106EBC70);
      if ( !sub_103C1260((int *)this) )
      {
        (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 1416))(this, dword_106EBC74);
        sub_1023C380((_DWORD *)this, (int)"NPC_FloorTurret.Retire", 0.0, 0);
        HIDWORD(v4) = this;
        LODWORD(v4) = 0;
        sub_1010DD80((_DWORD *)(this + 3868), v4, 0.0);
      }
    }
  }
}
